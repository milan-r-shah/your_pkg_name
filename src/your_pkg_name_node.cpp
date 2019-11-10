#include "your_pkg_name.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "your_pkg_name");
    ros::NodeHandle nh;
    ros::NodeHandle pnh("~");

    YourPKGName node(nh, pnh);

    ros::Rate rate(1.0);

    while (ros::ok())
    {
        node.runOnce();
        ros::spinOnce();
        rate.sleep();
    }
    return 0;
}