#pragma once
#ifndef YOUR_PKG_NAME
#define YOUR_PKG_NAME
#include <ros/ros.h>

class YourPKGName
{
public:
    YourPKGName(ros::NodeHandle &nh, ros::NodeHandle &pnh);
    ~YourPKGName();
    void runOnce();

private:
    ros::NodeHandle nh_;
};
#endif