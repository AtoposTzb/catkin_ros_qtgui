/**
 * @file /include/rosqt_gui/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef rosqt_gui_QNODE_HPP_
#define rosqt_gui_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include <std_msgs/String.h>
#include <geometry_msgs/Twist.h>//sudu
#include <map>
#include <nav_msgs/Odometry.h>//里程计话题
#include <std_msgs/Float32.h>//电池电压

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace rosqt_gui {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
    void set_cmd_vel(char k,float linear,float angular);//一个公共函数去连接键盘控制和速度的功能
	void run();

	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	void log( const LogLevel &level, const std::string &msg);

Q_SIGNALS:
	void loggingUpdated();
    void rosShutdown();
    void speed_vel(float,float);//因为这是两个类,ui界面是在mianw访问，所以这里需要我们创建自定义信号，把当前的X,Y轴线速度通过信号的方式发送到mainw类中
    void power_vel(float);

private:
	int init_argc;
	char** init_argv;
	ros::Publisher chatter_publisher;
    ros::Publisher cmd_vel_pub;//声明一个话题发布者
    QStringListModel logging_model;
    ros::Subscriber chatter_sub;//创建一个订阅者
    ros::Subscriber odom_sub;//里程计话题订阅者
    ros::Subscriber power_sub;//电池电压
    void chatter_callback(const std_msgs::String &msg);//shengminghuidiaohanshu
    void odom_callback(const nav_msgs::Odometry &msg);
    void power_callback(const std_msgs::Float32 &msg);
};

}  // namespace rosqt_gui

#endif /* rosqt_gui_QNODE_HPP_ */
