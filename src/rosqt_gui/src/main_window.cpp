/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/rosqt_gui/main_window.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace rosqt_gui {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
	ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
	setWindowIcon(QIcon(":/images/icon.png"));
	ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

	/*********************
	** Logging
	**********************/
	ui.view_logging->setModel(qnode.loggingModel());
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));

    /*********************
    ** Auto Start
    **********************/
    if ( ui.checkbox_remember_settings->isChecked() ) {
        on_button_connect_clicked(true);
    }
    //连接角速度线速度进度条显示
    connect(ui.horizontalSlider_linear,SIGNAL(valueChanged(int)),this,SLOT(slot_linear_value_change(int)));
    connect(ui.horizontalSlider_raw,SIGNAL(valueChanged(int)),this,SLOT(slot_raw_value_change(int)));
    connect(ui.pushButton_u,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));
    connect(ui.pushButton_i,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));
    connect(ui.pushButton_o,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));
    connect(ui.pushButton_j,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));
    connect(ui.pushButton_l,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));
    connect(ui.pushButton_m,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));
    connect(ui.pushButton_dian,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));
    connect(ui.pushButton_dou,SIGNAL(clicked()),this,SLOT(slot_pushbtn_click()));


    //速度仪表盘实现
    //初始化u
    speed_x_dashBoard = new CCtrlDashBoard(ui.widget_speed_x);
    speed_y_dashBoard = new CCtrlDashBoard(ui.widget_speed_y);
    speed_x_dashBoard->setGeometry(ui.widget_speed_x->rect());//这样，speed_x_dashBoard的大小和ui.widget_speed_x的大小一样
    speed_y_dashBoard->setGeometry(ui.widget_speed_y->rect());
    speed_x_dashBoard->setValue(0);
    speed_y_dashBoard->setValue(0);//设置仪表盘默认指向
    ui.horizontalSlider_linear->setValue(50);//设置默认
    ui.horizontalSlider_raw->setValue(50);

    //rviz
//    ui.treeWidget->setWindowTitle("Display");
//    ui.treeWidget->setWindowIcon(QIcon(":/images/display.png")); 使用label替换
    //header
    ui.treeWidget->setHeaderLabels(QStringList()<<"key"<<"value");
    ui.treeWidget->setHeaderHidden(true);

    //GLobal options
    QTreeWidgetItem* Global = new QTreeWidgetItem(QStringList()<<"Global Options");
    Global->setIcon(0,QIcon(":images/setting.png"));
    ui.treeWidget->addTopLevelItem(Global);
    Global->setExpanded(true);
    //FixFrame
    QTreeWidgetItem* Fixed_frame = new QTreeWidgetItem(QStringList()<<"Fixed Frame");
    fixed_box = new QComboBox() ;
    fixed_box->addItem("map");
    fixed_box->setMaximumWidth(150);
    fixed_box->setEditable(true);

    connect(fixed_box,SIGNAL(currentTextChanged(QString)),this,SLOT(slot_treewidget_value_change(QString)));
    Global->addChild(Fixed_frame);
    ui.treeWidget->setItemWidget(Fixed_frame,1,fixed_box);



    //连接里程信息
    connect(&qnode,SIGNAL(speed_vel(float,float)),this,SLOT(slot_update_dashboard(float,float)));
    //连接电池电压
    connect(&qnode,SIGNAL(power_vel(float)),this,SLOT(slot_update_power(float)));
    //连接图像话题
    connect(&qnode,SIGNAL(image_val(QImage)),this,SLOT(slot_update_image(QImage)));
    connect(ui.pushButton_sub_image,SIGNAL(clicked()),this,SLOT(slot_sub_image()));
    //激光雷达
    connect(ui.pushButton_laser,SIGNAL(clicked()),this,SLOT(slot_quick_cmd_laser()));
}

void MainWindow::slot_treewidget_value_change(QString)
{
    myqrviz->Set_FixedFrame(fixed_box->currentText());
}


void MainWindow::slot_quick_cmd_laser()
{
    laser_cmd=new QProcess;
    laser_cmd->start("bash");//通过这个对象去调用一些外部的系统程序，如bash程序：运行命令行的
    laser_cmd->write(ui.textEdit_laser_cmd->toPlainText().toLocal8Bit()+'\n');//通过write方法去写入我们要运行的命令，'/n'代表命令输入结束
    //再设计一个黑框框模拟信号回显
    connect(laser_cmd,SIGNAL(readyReadStandardError()),this,SLOT(slot_quick_output()));
    connect(laser_cmd,SIGNAL(readyReadStandardOutput()),this,SLOT(slot_quick_output()));
}

void MainWindow::slot_quick_output()
{
    //在黑框框output中使用追加的方式显示并设置字体颜色
    ui.textEdit_quick_output->append("<font color=\"#FF0000\">"+laser_cmd->readAllStandardError()+"</font");
    ui.textEdit_quick_output->append("<font color=\"#FFFFFF\">"+laser_cmd->readAllStandardOutput()+"</font");
}

void MainWindow::slot_update_image(QImage im)
{
    ui.label_image->setPixmap(QPixmap::fromImage(im));
}
void MainWindow::slot_sub_image()
{
    qnode.sub_image(ui.lineEdit_image_topic->text());
}

void MainWindow::slot_update_power(float value)
{
    ui.label_power_val->setText(QString::number(value).mid(0,5)+"V");//只取前5个字符
    //进度条显示，先计算电压比
    double n = (value-10.5)/(12.5-10.5);//12.5 and 10.5为实体机器人设置的最大和最小电压
    int val = n*100;//转换为百分比
    ui.progressBar->setValue(val);
}

void MainWindow::slot_update_dashboard(float x,float y)
{
    //将节点发送来的信号响应设置到仪表盘上
    speed_x_dashBoard->setValue(abs(x)*100);
    speed_y_dashBoard->setValue(abs(y)*100);
    //方向
    ui.label_dir_x->setText(x>0?"正向":"反向");
    ui.label_dir_y->setText(x>0?"正向":"反向");

}

//sender()方法可以处理是哪个对象发送来的对象并处理
//按钮控制响应事件
void MainWindow::slot_pushbtn_click()
{
    QPushButton*btn = qobject_cast<QPushButton*> (sender());
    qDebug()<<btn->text();
    char k = btn->text().toStdString()[0];//获取按键按下的字符
    //判断是否使用全向轮
    bool is_all = ui.checkBox_isAll->isChecked();
    float linear = ui.label_linear->text().toFloat()*0.01;//cm / mm
    float angular = ui.label_raw->text().toFloat()*0.01;

    switch(k){
    case 'i':
        qnode.set_cmd_vel(is_all?'I':'i' ,linear ,angular);
        break;
    case 'u':
        qnode.set_cmd_vel(is_all?'U':'u' ,linear ,angular);
        break;
    case 'o':
        qnode.set_cmd_vel(is_all?'O':'o' ,linear ,angular);
        break;
    case 'j':
        qnode.set_cmd_vel(is_all?'J':'j' ,linear ,angular);
        break;
    case 'l':
        qnode.set_cmd_vel(is_all?'L':'l' ,linear ,angular);
        break;
    case 'm':
        qnode.set_cmd_vel(is_all?'M':'m' ,linear ,angular);
        break;
    case ',':
        qnode.set_cmd_vel(is_all?'<':',' ,linear ,angular);
        break;
    case '.':
        qnode.set_cmd_vel(is_all?'>':'.' ,linear ,angular);
        break;
    }
}

void MainWindow::slot_linear_value_change(int value)
{
    ui.label_linear->setText(QString::number(value));
}
void MainWindow::slot_raw_value_change(int value)
{
    ui.label_raw->setText(QString::number(value));
}

MainWindow::~MainWindow() {}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the ros master.");
	msgBox.exec();
    close();
}

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 */

void MainWindow::on_button_connect_clicked(bool check ) {
	if ( ui.checkbox_use_environment->isChecked() ) {
		if ( !qnode.init() ) {
			showNoMasterMessage();
            ui.treeWidget->setEnabled(false);//myrviz 对象没有连接上master时,设置为不可用
		} else {
			ui.button_connect->setEnabled(false);
            ui.treeWidget->setEnabled(true);//连接成功时设置为可用,防止被意外调用
            myqrviz = new qrviz(ui.Layout_rviz);
		}
	} else {
		if ( ! qnode.init(ui.line_edit_master->text().toStdString(),
				   ui.line_edit_host->text().toStdString()) ) {
			showNoMasterMessage();
            ui.treeWidget->setEnabled(false);//myrviz 对象没有连接上master时,设置为不可用
		} else {
			ui.button_connect->setEnabled(false);
			ui.line_edit_master->setReadOnly(true);
			ui.line_edit_host->setReadOnly(true);
			ui.line_edit_topic->setReadOnly(true);
            ui.treeWidget->setEnabled(true);//连接成功时设置为可用,防止被意外调用
            myqrviz = new qrviz(ui.Layout_rviz);
		}
	}
}


void MainWindow::on_checkbox_use_environment_stateChanged(int state) {
	bool enabled;
	if ( state == 0 ) {
		enabled = true;
	} else {
		enabled = false;
	}
	ui.line_edit_master->setEnabled(enabled);
	ui.line_edit_host->setEnabled(enabled);
	//ui.line_edit_topic->setEnabled(enabled);
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/

/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView() {
        ui.view_logging->scrollToBottom();
}

/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros Package", "rosqt_gui");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();
    //QString topic_name = settings.value("topic_name", QString("/chatter")).toString();
    ui.line_edit_master->setText(master_url);
    ui.line_edit_host->setText(host_url);
    //ui.line_edit_topic->setText(topic_name);
    bool remember = settings.value("remember_settings", false).toBool();
    ui.checkbox_remember_settings->setChecked(remember);
    bool checked = settings.value("use_environment_variables", false).toBool();
    ui.checkbox_use_environment->setChecked(checked);
    if ( checked ) {
    	ui.line_edit_master->setEnabled(false);
    	ui.line_edit_host->setEnabled(false);
    	//ui.line_edit_topic->setEnabled(false);
    }
}

void MainWindow::WriteSettings() {
    QSettings settings("Qt-Ros Package", "rosqt_gui");
    settings.setValue("master_url",ui.line_edit_master->text());
    settings.setValue("host_url",ui.line_edit_host->text());
    //settings.setValue("topic_name",ui.line_edit_topic->text());
    settings.setValue("use_environment_variables",QVariant(ui.checkbox_use_environment->isChecked()));
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
    settings.setValue("remember_settings",QVariant(ui.checkbox_remember_settings->isChecked()));

}

void MainWindow::closeEvent(QCloseEvent *event)
{
	WriteSettings();
	QMainWindow::closeEvent(event);
}

}  // namespace rosqt_gui

