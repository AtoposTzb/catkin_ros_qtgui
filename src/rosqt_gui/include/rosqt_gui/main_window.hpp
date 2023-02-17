/**
 * @file /include/rosqt_gui/main_window.hpp
 *
 * @brief Qt based gui for rosqt_gui.
 *
 * @date November 2010
 **/
#ifndef rosqt_gui_MAIN_WINDOW_H
#define rosqt_gui_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtWidgets/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"
#include "CCtrlDashBoard.hpp"

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace rosqt_gui {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();

	void ReadSettings(); // Load up qt program settings at startup
	void WriteSettings(); // Save qt program settings when closing

	void closeEvent(QCloseEvent *event); // Overloaded function
	void showNoMasterMessage();

public Q_SLOTS:
	/******************************************
	** Auto-connections (connectSlotsByName())
	*******************************************/
	void on_actionAbout_triggered();
	void on_button_connect_clicked(bool check );
	void on_checkbox_use_environment_stateChanged(int state);

    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically
    void slot_linear_value_change(int);//线速度改变槽函数
    void slot_raw_value_change(int);
    void slot_pushbtn_click();//几个按钮的点击事件,多个控制按钮连接同一个槽函数
    void slot_update_dashboard(float,float);//将节点发送来的信号响应设置到仪表盘上
    void slot_update_power(float);
    void slot_update_image(QImage);
    void slot_sub_image();

private:
	Ui::MainWindowDesign ui;
	QNode qnode;
    CCtrlDashBoard* speed_x_dashBoard;
    CCtrlDashBoard* speed_y_dashBoard;
};

}  // namespace rosqt_gui

#endif // rosqt_gui_MAIN_WINDOW_H
