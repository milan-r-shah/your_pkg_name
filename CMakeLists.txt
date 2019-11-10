cmake_minimum_required(VERSION 2.8.3)
project(your_pkg_name)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include/your_pkg_name
  CATKIN_DEPENDS roscpp rospy std_msgs
)

include_directories(
  include/your_pkg_name
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/your_pkg_name.cpp src/your_pkg_name_node.cpp)
target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
)