#include "main.h"

//main here
int main(int argc, char **argv) {
	// Init ROS node
	ros::init(argc, argv, "battle_planner_node");
	ros::NodeHandle node_handle_("~");
	//ノードハンドラを渡さないと、rosparamで受け取ろうとする名前空間がノード名の一層上になってしまい、launchの中でかけない。
	//参考:http://wiki.ros.org/roscpp_tutorials/Tutorials/AccessingPrivateNamesWithNodeHandle
	BattlePlanner battle_planner(node_handle_);
	while (ros::ok()) {
		battle_planner.mainLoop();
		ros::spinOnce();
	}
	ros::shutdown();
	return 0;
}



