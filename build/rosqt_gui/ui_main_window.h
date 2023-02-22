/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QLabel *label_9;
    QProgressBar *progressBar;
    QLabel *label_10;
    QLabel *label_power_val;
    QHBoxLayout *horizontalLayout_14;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QWidget *widget_speed_x;
    QWidget *widget_speed_y;
    QLabel *label_6;
    QLabel *label_dir_x;
    QLabel *label_7;
    QLabel *label_dir_y;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_3;
    QListView *view_logging;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_image;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_image_topic;
    QPushButton *pushButton_sub_image;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *set_start_btn;
    QPushButton *set_goal_btn;
    QPushButton *set_return_pos_btn;
    QPushButton *return_pos_btn;
    QVBoxLayout *Layout_rviz;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *line_edit_topic;
    QLabel *label;
    QLineEdit *line_edit_host;
    QLineEdit *line_edit_master;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkbox_remember_settings;
    QCheckBox *checkbox_use_environment;
    QHBoxLayout *horizontalLayout;
    QPushButton *quit_button;
    QPushButton *button_connect;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_u;
    QPushButton *pushButton_i;
    QPushButton *pushButton_o;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_j;
    QCheckBox *checkBox_isAll;
    QPushButton *pushButton_l;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_m;
    QPushButton *pushButton_dou;
    QPushButton *pushButton_dian;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSlider *horizontalSlider_linear;
    QLabel *label_linear;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSlider *horizontalSlider_raw;
    QLabel *label_raw;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_10;
    QTextEdit *textEdit_laser_cmd;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_laser;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *textEdit_quick_output;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLabel *label_12;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *pos_x;
    QLabel *label_17;
    QLabel *pos_y;
    QLabel *label_18;
    QLabel *pos_z;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *return_x;
    QLabel *label_19;
    QLabel *return_y;
    QLabel *label_20;
    QLabel *return_z;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(1029, 870);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_16 = new QVBoxLayout(centralwidget);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(32, 32));
        label_9->setMaximumSize(QSize(32, 32));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/battery.png")));

        horizontalLayout_7->addWidget(label_9);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(200, 25));
        progressBar->setMaximumSize(QSize(200, 25));
        progressBar->setValue(24);

        horizontalLayout_7->addWidget(progressBar);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(32, 32));
        label_10->setMaximumSize(QSize(32, 32));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/dian.png")));

        horizontalLayout_7->addWidget(label_10);

        label_power_val = new QLabel(centralwidget);
        label_power_val->setObjectName(QStringLiteral("label_power_val"));

        horizontalLayout_7->addWidget(label_power_val);


        verticalLayout_13->addLayout(horizontalLayout_7);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        verticalLayout_9 = new QVBoxLayout(tab_status);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_speed_x = new QWidget(tab_status);
        widget_speed_x->setObjectName(QStringLiteral("widget_speed_x"));
        widget_speed_x->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(widget_speed_x, 0, 0, 1, 2);

        widget_speed_y = new QWidget(tab_status);
        widget_speed_y->setObjectName(QStringLiteral("widget_speed_y"));
        widget_speed_y->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(widget_speed_y, 0, 2, 1, 2);

        label_6 = new QLabel(tab_status);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_dir_x = new QLabel(tab_status);
        label_dir_x->setObjectName(QStringLiteral("label_dir_x"));

        gridLayout->addWidget(label_dir_x, 1, 1, 1, 1);

        label_7 = new QLabel(tab_status);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_dir_y = new QLabel(tab_status);
        label_dir_y->setObjectName(QStringLiteral("label_dir_y"));

        gridLayout->addWidget(label_dir_y, 1, 3, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        frame_2 = new QFrame(tab_status);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frame_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        groupBox_12 = new QGroupBox(tab_status);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_12);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QStringLiteral("view_logging"));

        gridLayout_3->addWidget(view_logging, 0, 1, 1, 1);


        horizontalLayout_9->addWidget(groupBox_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_image = new QLabel(tab_status);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setMinimumSize(QSize(200, 200));
        label_image->setMaximumSize(QSize(200, 200));
        label_image->setStyleSheet(QStringLiteral("border:1px solid black"));

        horizontalLayout_8->addWidget(label_image);

        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_image_topic = new QLineEdit(tab_status);
        lineEdit_image_topic->setObjectName(QStringLiteral("lineEdit_image_topic"));

        verticalLayout_2->addWidget(lineEdit_image_topic);

        pushButton_sub_image = new QPushButton(tab_status);
        pushButton_sub_image->setObjectName(QStringLiteral("pushButton_sub_image"));

        verticalLayout_2->addWidget(pushButton_sub_image);


        horizontalLayout_8->addLayout(verticalLayout_2);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout_9->addLayout(verticalLayout_8);

        tab_manager->addTab(tab_status, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_15 = new QVBoxLayout(tab_3);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        set_start_btn = new QPushButton(tab_3);
        set_start_btn->setObjectName(QStringLiteral("set_start_btn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/rviz_images/SetInitialPose.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_start_btn->setIcon(icon1);

        horizontalLayout_12->addWidget(set_start_btn);

        set_goal_btn = new QPushButton(tab_3);
        set_goal_btn->setObjectName(QStringLiteral("set_goal_btn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/rviz_images/SetGoal.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_goal_btn->setIcon(icon2);

        horizontalLayout_12->addWidget(set_goal_btn);

        set_return_pos_btn = new QPushButton(tab_3);
        set_return_pos_btn->setObjectName(QStringLiteral("set_return_pos_btn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/set_return.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_return_pos_btn->setIcon(icon3);

        horizontalLayout_12->addWidget(set_return_pos_btn);

        return_pos_btn = new QPushButton(tab_3);
        return_pos_btn->setObjectName(QStringLiteral("return_pos_btn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        return_pos_btn->setIcon(icon4);

        horizontalLayout_12->addWidget(return_pos_btn);


        verticalLayout_14->addLayout(horizontalLayout_12);

        Layout_rviz = new QVBoxLayout();
        Layout_rviz->setObjectName(QStringLiteral("Layout_rviz"));

        verticalLayout_14->addLayout(Layout_rviz);


        verticalLayout_15->addLayout(verticalLayout_14);

        tab_manager->addTab(tab_3, QString());

        horizontalLayout_14->addWidget(tab_manager);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        verticalLayout_4->addWidget(line_edit_topic);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));

        verticalLayout_4->addWidget(line_edit_host);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));

        verticalLayout_4->addWidget(line_edit_master);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_3);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(checkbox_remember_settings);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(checkbox_use_environment);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        quit_button = new QPushButton(groupBox);
        quit_button->setObjectName(QStringLiteral("quit_button"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(quit_button);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QStringLiteral("button_connect"));
        button_connect->setEnabled(true);
        sizePolicy2.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(button_connect);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_u = new QPushButton(groupBox);
        pushButton_u->setObjectName(QStringLiteral("pushButton_u"));

        horizontalLayout_2->addWidget(pushButton_u);

        pushButton_i = new QPushButton(groupBox);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));

        horizontalLayout_2->addWidget(pushButton_i);

        pushButton_o = new QPushButton(groupBox);
        pushButton_o->setObjectName(QStringLiteral("pushButton_o"));

        horizontalLayout_2->addWidget(pushButton_o);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_j = new QPushButton(groupBox);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));

        horizontalLayout_3->addWidget(pushButton_j);

        checkBox_isAll = new QCheckBox(groupBox);
        checkBox_isAll->setObjectName(QStringLiteral("checkBox_isAll"));

        horizontalLayout_3->addWidget(checkBox_isAll);

        pushButton_l = new QPushButton(groupBox);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));

        horizontalLayout_3->addWidget(pushButton_l);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_m = new QPushButton(groupBox);
        pushButton_m->setObjectName(QStringLiteral("pushButton_m"));

        horizontalLayout_4->addWidget(pushButton_m);

        pushButton_dou = new QPushButton(groupBox);
        pushButton_dou->setObjectName(QStringLiteral("pushButton_dou"));

        horizontalLayout_4->addWidget(pushButton_dou);

        pushButton_dian = new QPushButton(groupBox);
        pushButton_dian->setObjectName(QStringLiteral("pushButton_dian"));

        horizontalLayout_4->addWidget(pushButton_dian);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSlider_linear = new QSlider(groupBox);
        horizontalSlider_linear->setObjectName(QStringLiteral("horizontalSlider_linear"));
        horizontalSlider_linear->setMaximum(100);
        horizontalSlider_linear->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_linear);

        label_linear = new QLabel(groupBox);
        label_linear->setObjectName(QStringLiteral("label_linear"));
        label_linear->setMinimumSize(QSize(30, 0));
        label_linear->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(label_linear);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSlider_raw = new QSlider(groupBox);
        horizontalSlider_raw->setObjectName(QStringLiteral("horizontalSlider_raw"));
        horizontalSlider_raw->setMaximum(100);
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_raw);

        label_raw = new QLabel(groupBox);
        label_raw->setObjectName(QStringLiteral("label_raw"));
        label_raw->setMinimumSize(QSize(30, 0));
        label_raw->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(label_raw);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_7->addWidget(frame);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 371, 261));
        verticalLayout_10 = new QVBoxLayout(groupBox_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        textEdit_laser_cmd = new QTextEdit(groupBox_2);
        textEdit_laser_cmd->setObjectName(QStringLiteral("textEdit_laser_cmd"));
        textEdit_laser_cmd->setMinimumSize(QSize(0, 45));
        textEdit_laser_cmd->setMaximumSize(QSize(16777215, 45));

        verticalLayout_10->addWidget(textEdit_laser_cmd);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_laser = new QPushButton(groupBox_2);
        pushButton_laser->setObjectName(QStringLiteral("pushButton_laser"));

        horizontalLayout_10->addWidget(pushButton_laser);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_10);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        textEdit_quick_output = new QTextEdit(groupBox_2);
        textEdit_quick_output->setObjectName(QStringLiteral("textEdit_quick_output"));
        textEdit_quick_output->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        verticalLayout_10->addWidget(textEdit_quick_output);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_12 = new QVBoxLayout(tab_4);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(16, 16));
        label_11->setMaximumSize(QSize(16, 16));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/display.png")));
        label_11->setScaledContents(true);

        horizontalLayout_11->addWidget(label_11);

        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_11->addWidget(label_12);


        verticalLayout_11->addLayout(horizontalLayout_11);

        treeWidget = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(150);
        treeWidget->header()->setMinimumSectionSize(150);

        verticalLayout_11->addWidget(treeWidget);


        verticalLayout_12->addLayout(verticalLayout_11);

        tabWidget->addTab(tab_4, QString());

        horizontalLayout_14->addWidget(tabWidget);


        verticalLayout_13->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(30, 27));
        label_14->setMaximumSize(QSize(30, 27));

        horizontalLayout_13->addWidget(label_14);

        pos_x = new QLabel(centralwidget);
        pos_x->setObjectName(QStringLiteral("pos_x"));
        pos_x->setMinimumSize(QSize(75, 27));
        pos_x->setMaximumSize(QSize(75, 27));

        horizontalLayout_13->addWidget(pos_x);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(30, 27));
        label_17->setMaximumSize(QSize(30, 27));

        horizontalLayout_13->addWidget(label_17);

        pos_y = new QLabel(centralwidget);
        pos_y->setObjectName(QStringLiteral("pos_y"));
        pos_y->setMinimumSize(QSize(75, 27));
        pos_y->setMaximumSize(QSize(75, 27));

        horizontalLayout_13->addWidget(pos_y);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(30, 27));
        label_18->setMaximumSize(QSize(30, 27));

        horizontalLayout_13->addWidget(label_18);

        pos_z = new QLabel(centralwidget);
        pos_z->setObjectName(QStringLiteral("pos_z"));
        pos_z->setMinimumSize(QSize(75, 27));
        pos_z->setMaximumSize(QSize(75, 27));

        horizontalLayout_13->addWidget(pos_z);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_13->addWidget(label_15);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(30, 27));
        label_16->setMaximumSize(QSize(30, 27));

        horizontalLayout_13->addWidget(label_16);

        return_x = new QLabel(centralwidget);
        return_x->setObjectName(QStringLiteral("return_x"));
        return_x->setMinimumSize(QSize(75, 27));
        return_x->setMaximumSize(QSize(75, 27));

        horizontalLayout_13->addWidget(return_x);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(30, 27));
        label_19->setMaximumSize(QSize(30, 27));

        horizontalLayout_13->addWidget(label_19);

        return_y = new QLabel(centralwidget);
        return_y->setObjectName(QStringLiteral("return_y"));
        return_y->setMinimumSize(QSize(75, 27));
        return_y->setMaximumSize(QSize(75, 27));

        horizontalLayout_13->addWidget(return_y);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(30, 27));
        label_20->setMaximumSize(QSize(30, 27));

        horizontalLayout_13->addWidget(label_20);

        return_z = new QLabel(centralwidget);
        return_z->setObjectName(QStringLiteral("return_z"));
        return_z->setMinimumSize(QSize(75, 27));
        return_z->setMaximumSize(QSize(75, 27));

        horizontalLayout_13->addWidget(return_z);


        verticalLayout_13->addLayout(horizontalLayout_13);


        verticalLayout_16->addLayout(verticalLayout_13);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1029, 32));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));
        QObject::connect(quit_button, SIGNAL(clicked()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindowDesign", "\347\224\265\346\261\240\347\224\265\351\207\217:", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QString());
        label_power_val->setText(QApplication::translate("MainWindowDesign", "00.00V", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindowDesign", "X\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        label_dir_x->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindowDesign", "Y\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        label_dir_y->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging", Q_NULLPTR));
        label_image->setText(QApplication::translate("MainWindowDesign", "NO IMAGE", Q_NULLPTR));
        pushButton_sub_image->setText(QApplication::translate("MainWindowDesign", "\350\256\242\351\230\205", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", Q_NULLPTR));
        set_start_btn->setText(QApplication::translate("MainWindowDesign", "2D Pose Estimate", Q_NULLPTR));
        set_goal_btn->setText(QApplication::translate("MainWindowDesign", "2D Nav Goal", Q_NULLPTR));
        set_return_pos_btn->setText(QApplication::translate("MainWindowDesign", "\350\256\276\347\275\256\350\277\224\350\210\252\347\202\271", Q_NULLPTR));
        return_pos_btn->setText(QApplication::translate("MainWindowDesign", "\350\277\224\350\210\252", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_3), QApplication::translate("MainWindowDesign", "rviz", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", Q_NULLPTR));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", Q_NULLPTR));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", Q_NULLPTR));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", Q_NULLPTR));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", Q_NULLPTR));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", Q_NULLPTR));
        quit_button->setText(QApplication::translate("MainWindowDesign", "Quit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", Q_NULLPTR));
        pushButton_u->setText(QApplication::translate("MainWindowDesign", "u", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_u->setShortcut(QApplication::translate("MainWindowDesign", "U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_i->setText(QApplication::translate("MainWindowDesign", "i", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_i->setShortcut(QApplication::translate("MainWindowDesign", "I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_o->setText(QApplication::translate("MainWindowDesign", "o", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_o->setShortcut(QApplication::translate("MainWindowDesign", "O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_j->setText(QApplication::translate("MainWindowDesign", "j", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_j->setShortcut(QApplication::translate("MainWindowDesign", "J", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        checkBox_isAll->setText(QApplication::translate("MainWindowDesign", "\345\205\250\345\220\221\350\275\256\346\250\241\345\274\217", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        checkBox_isAll->setShortcut(QApplication::translate("MainWindowDesign", "K", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_l->setText(QApplication::translate("MainWindowDesign", "l", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_l->setShortcut(QApplication::translate("MainWindowDesign", "L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_m->setText(QApplication::translate("MainWindowDesign", "m", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_m->setShortcut(QApplication::translate("MainWindowDesign", "M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_dou->setText(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_dou->setShortcut(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_dian->setText(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_dian->setShortcut(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_4->setText(QApplication::translate("MainWindowDesign", "\347\272\277\351\200\237\345\272\246: ", Q_NULLPTR));
        label_linear->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowDesign", "\350\247\222\351\200\237\345\272\246: ", Q_NULLPTR));
        label_raw->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowDesign", "Tab 1", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "\346\277\200\345\205\211\351\233\267\350\276\276", Q_NULLPTR));
        pushButton_laser->setText(QApplication::translate("MainWindowDesign", "\346\211\223\345\274\200\346\277\200\345\205\211\351\233\267\350\276\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowDesign", "Tab 2", Q_NULLPTR));
        label_11->setText(QString());
        label_12->setText(QApplication::translate("MainWindowDesign", "Display", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindowDesign", "rviz", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindowDesign", "X : ", Q_NULLPTR));
        pos_x->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindowDesign", "Y : ", Q_NULLPTR));
        pos_y->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindowDesign", "Z : ", Q_NULLPTR));
        pos_z->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindowDesign", "\350\277\224\350\210\252\347\202\271", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindowDesign", "X : ", Q_NULLPTR));
        return_x->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindowDesign", "Y : ", Q_NULLPTR));
        return_y->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindowDesign", "Z : ", Q_NULLPTR));
        return_z->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
