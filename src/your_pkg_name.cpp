#include "your_pkg_name.hpp"

YourPKGName::YourPKGName(ros::NodeHandle &nh, ros::NodeHandle &pnh)
{
    nh_ = nh;
    std::cout << "from Constructor \n";
}

YourPKGName::~YourPKGName()
{
    std::cout << "from Destructor \n";
}

void YourPKGName::runOnce()
{
    std::cout << "from runOnce() \n";
}