#include "ros/ros.h"
#include "std_msgs/String.h"
#include"mainwindow.h"
#include<QApplication>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "main_node");
  ros::NodeHandle nh;

//  ROSCONSOLE_AUTOINIT;

  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
