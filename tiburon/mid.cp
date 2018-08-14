#include"ros/ros.h"
#include"std_msgs/Int8.h"


void pub1CallBack(const std_msgs::Int8::ConstPtr& msg)
{

	ROS_INFO("recieved :%d",msg->data);
}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "mid");
	ros::NodeHandle n;
	ros::Subscriber recv1 = n.subscribe("nnumber", 1000, pub1CallBack);
	ros::spin();
	return 0;

}
