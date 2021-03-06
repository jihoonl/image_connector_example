/*
  Image connector execution node. It intantiates image connector
 */
#include "image_connector/image_connector.hpp"

int main(int argc, char** argv)
{
  ros::init(argc,argv, "image_connector");

  ImageConnector ic("image","string");
  ROS_INFO("Initialised");
  ic.spin();
  ROS_INFO("Bye Bye");
}

