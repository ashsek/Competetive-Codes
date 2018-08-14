#include"ros/ros.h"
#include"std_msgs/Int8.h"
#include<sstream>

using namespace std;

int main(int argc, char **argv)
{
	ros::init(argc,argv,"send");
	ros::NodeHandle n;
	ros::Publisher pub1 = n.advertise<std_msgs::Int8>("nnumber",1000);
	ros::Rate loop_rate(2);
	std_msgs::Int8 msg;

	while(ros::ok())
	{
		
		pub1.publish(msg);
		ROS_INFO("%d",msg.data);
		loop_rate.sleep();
		msg++;
	}
return 0;	
}


