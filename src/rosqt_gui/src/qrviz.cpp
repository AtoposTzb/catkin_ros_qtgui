#include "../include/rosqt_gui/qrviz.hpp"

/*
两个类，如何在mainW类中显示呢，链接两个类：
通过构造函数，在初始化对象时传入一个layout指针(QVBoxLayout *layout)，通过这个指针添加widget
*/

//创建rviz panel
qrviz::qrviz(QVBoxLayout *layout)
{
    render_panel = new rviz::RenderPanel();
    //向layout添加
    layout->addWidget(render_panel);
    //创建rvi z控制对象
    manager_ = new rviz::VisualizationManager(render_panel);
    ROS_ASSERT(manager_ != NULL);//解决闪退BUG
    //初始化rviz控制对象
    manager_->initialize() ;
    manager_->startUpdate() ;
    manager_->removeAllDisplays();
    //初始化render_panel 实现放大缩小等操作
    render_panel->initialize(manager_->getSceneManager(), manager_);

}

void qrviz::Set_FixedFrame(QString Frame_name)
{
    manager_->setFixedFrame(Frame_name);
    qDebug()<<manager_->getFixedFrame();
}
