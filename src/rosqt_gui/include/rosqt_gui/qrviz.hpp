#ifndef QRVIZ_HPP
#define QRVIZ_HPP

#include <QObject>
#include <ros/ros.h>
#include <QDebug>
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool_manager.h>
#include <rviz/tool.h>
#include <QVBoxLayout>

class qrviz
{
public:
    qrviz(QVBoxLayout *layout);
    void Set_FixedFrame(QString Frame_name);
    void Display_Srid( int Cell_Count , QColor color, bool enable);
private:
    rviz::RenderPanel *render_panel;
    rviz::VisualizationManager* manager_;
    rviz::Display* Grid_ = NULL;
signals:

};

#endif // QRVIZ_HPP
