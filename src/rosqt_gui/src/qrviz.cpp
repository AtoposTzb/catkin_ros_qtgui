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
    //初始化render_panel 实现放大缩小等操作
    render_panel->initialize(manager_->getSceneManager(), manager_);

    //初始化rviz控制对象
    manager_->initialize() ;
    manager_->startUpdate() ;//初始化render_panel需要放在startUpdate()前面,开始更新显示
    manager_->removeAllDisplays();


}

void qrviz::Set_FixedFrame(QString Frame_name)
{
    manager_->setFixedFrame(Frame_name);
    qDebug()<<manager_->getFixedFrame();
}

void qrviz::Display_Srid(int Cell_Count, QColor color, bool enable)
{
    if(Grid_ != NULL)//保持图层的唯一性
    {
        delete Grid_;
        Grid_ = NULL;
    }
    Grid_=manager_->createDisplay("rviz/Grid", "myGrid" , enable);
    //设置cell Count
    Grid_->subProp("Plane Cell Count")->setValue(Cell_Count);//Plane Cell Count属性设置需要用空格隔开，才能正常显示放大缩小
    //设置颜色
    Grid_->subProp("Color")->setValue(color);
    ROS_ASSERT(Grid_ != NULL);
}
//TF坐标变换显示接口
void qrviz::Display_TF(bool enable)
{
    if(TF_ != NULL)//保持图层的唯一性
    {
        delete TF_;
        TF_ = NULL;
    }
    TF_ = manager_->createDisplay("rviz/TF", "myTF" , enable);
    ROS_ASSERT(TF_ != NULL);
}

void qrviz::Display_LaserScan(QString laser_topic, bool enable)
{
    if(LaserScan_ != NULL)//保持图层的唯一性
    {
        delete LaserScan_;
        LaserScan_ = NULL;
    }
    LaserScan_ = manager_->createDisplay("rviz/LaserScan", "myLaser" , enable);
    LaserScan_->subProp("Topic")->setValue(laser_topic);//属性设置
    ROS_ASSERT(LaserScan_ != NULL);
}
