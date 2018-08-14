#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <std_msgs/Int32.h>
using namespace cv;
using namespace std;

// the '//' lines are added for the signal control

int sig = 1; //

void pubCallBack(const std_msgs::Int32::ConstPtr& msg) //
{   
  sig = msg->data;
}


int main(int argc, char** argv)
{
  ros::init(argc, argv, "image_publisher");
  ros::NodeHandle nh;

  image_transport::ImageTransport it(nh);
  image_transport::Publisher pub = it.advertise("camera/image", 1);
  ros::Subscriber sub = nh.subscribe("control", 1000, pubCallBack); //
	
  VideoCapture cap(0);
  Mat image;
  sensor_msgs::ImagePtr msg;


  while (nh.ok()) {

    cap>>image;
    msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg();
    ros::spinOnce();
        if(sig == 1) //
	    pub.publish(msg);

  }
}
