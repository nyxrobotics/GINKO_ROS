#include "main.h"

//#include <tf2_ros/transform_listener.h>
//#include <geometry_msgs/TransformStamped.h>
//#include <geometry_msgs/Twist.h>

//main here

int main(int argc, char **argv) {
	// Init ROS node
	ros::init(argc, argv, "foot_grounding_node");
	ros::NodeHandle node_handle_("~");

	//ノードハンドラを渡さないと、rosparamで受け取ろうとする名前空間がノード名の一層上になってしまい、launchの中でかけない。
	//参考:http://wiki.ros.org/roscpp_tutorials/Tutorials/AccessingPrivateNamesWithNodeHandle
	GinkoOdometry ginko_odom(node_handle_);
//	sleep(3);
	ros::Rate rate_(100); // 10 hz
	while (ros::ok()) {
		ginko_odom.odomLoop();
		ros::spinOnce();
		rate_.sleep();
	}
//	ros::spin();
	ros::shutdown();
	return 0;
}



