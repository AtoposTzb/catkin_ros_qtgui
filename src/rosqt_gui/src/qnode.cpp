/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/rosqt_gui/qnode.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace rosqt_gui {

/*****************************************************************************
** Implementation
*****************************************************************************/

QNode::QNode(int argc, char** argv ) :
	init_argc(argc),
	init_argv(argv)
	{}

QNode::~QNode() {
    if(ros::isStarted()) {
      ros::shutdown(); // explicitly needed since we use ros::start();
      ros::waitForShutdown();
    }
	wait();
}

bool QNode::init() {
	ros::init(init_argc,init_argv,"rosqt_gui");
	if ( ! ros::master::check() ) {
		return false;
	}
	ros::start(); // explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;
	// Add your ros communications here.
	chatter_publisher = n.advertise<std_msgs::String>("chatter", 1000);
    chatter_sub = n.subscribe("chatter",1000,&QNode::chatter_callback,this);
    cmd_vel_pub = n.advertise<geometry_msgs::Twist>("cmd_vel",1000);
    start();
	return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url) {
	std::map<std::string,std::string> remappings;
	remappings["__master"] = master_url;
	remappings["__hostname"] = host_url;
	ros::init(remappings,"rosqt_gui");
	if ( ! ros::master::check() ) {
		return false;
	}
	ros::start(); // explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;
	// Add your ros communications here.
	chatter_publisher = n.advertise<std_msgs::String>("chatter", 1000);
    chatter_sub = n.subscribe("chatter",1000,&QNode::chatter_callback,this);
    cmd_vel_pub = n.advertise<geometry_msgs::Twist>("cmd_vel",1000);
	start();
	return true;
}
void QNode::set_cmd_vel(char k,float linear,float angular)
{
    // Map for movement keys
    //方向的map,
    //参考https://github.com/methylDragon/teleop_twist_keyboard_cpp/blob/master/src/teleop_twist_keyboard.cpp
    std::map<char, std::vector<float>> moveBindings
    {
      {'i', {1, 0, 0, 0}},
      {'o', {1, 0, 0, -1}},
      {'j', {0, 0, 0, 1}},
      {'l', {0, 0, 0, -1}},
      {'u', {1, 0, 0, 1}},
      {',', {-1, 0, 0, 0}},
      {'.', {-1, 0, 0, 1}},
      {'m', {-1, 0, 0, -1}},
      {'O', {1, -1, 0, 0}},
      {'I', {1, 0, 0, 0}},
      {'J', {0, 1, 0, 0}},
      {'L', {0, -1, 0, 0}},
      {'U', {1, 1, 0, 0}},
      {'<', {-1, 0, 0, 0}},
      {'>', {-1, -1, 0, 0}},
      {'M', {-1, 1, 0, 0}},
      {'t', {0, 0, 1, 0}},
      {'b', {0, 0, -1, 0}},
      {'k', {0, 0, 0, 0}},
      {'K', {0, 0, 0, 0}}
    };
    // Grab the direction data
    //通过传进来的字符串判断方向
    char key = k;
      int x = moveBindings[key][0];
      int y = moveBindings[key][1];
      int z = moveBindings[key][2];
      int th = moveBindings[key][3];

      geometry_msgs::Twist twist;
      twist.linear.x=x*linear;
      twist.linear.y=y*linear ;
      twist.linear.z=z*linear;

      twist.angular.x=0;
      twist.angular.y=0;
      twist.angular.z=th*angular;

      cmd_vel_pub.publish(twist);//发布这个话题
      //接口函数写好了，去mainWindow里调用
}

void QNode::chatter_callback(const std_msgs::String &msg)
{
    log(Info,"I recive: "+msg.data);
}

void QNode::run() {
	ros::Rate loop_rate(1);
	int count = 0;
	while ( ros::ok() ) {

		std_msgs::String msg;
		std::stringstream ss;
		ss << "hello world " << count;
		msg.data = ss.str();
		chatter_publisher.publish(msg);
		log(Info,std::string("I sent: ")+msg.data);
		ros::spinOnce();
		loop_rate.sleep();
		++count;
	}
	std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
	Q_EMIT rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}


void QNode::log( const LogLevel &level, const std::string &msg) {
	logging_model.insertRows(logging_model.rowCount(),1);
	std::stringstream logging_model_msg;
	switch ( level ) {
		case(Debug) : {
				ROS_DEBUG_STREAM(msg);
				logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Info) : {
				ROS_INFO_STREAM(msg);
				logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Warn) : {
				ROS_WARN_STREAM(msg);
				logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Error) : {
				ROS_ERROR_STREAM(msg);
				logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Fatal) : {
				ROS_FATAL_STREAM(msg);
				logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
				break;
		}
	}
	QVariant new_row(QString(logging_model_msg.str().c_str()));
	logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
	Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}

}  // namespace rosqt_gui
