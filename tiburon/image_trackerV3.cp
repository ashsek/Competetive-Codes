#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc.hpp>
#include<stdlib.h>
#include<algorithm>
#include"std_msgs/Int32MultiArray.h"

using namespace std;
using namespace cv;

//image_transport::Publisher *pub_track;

sensor_msgs::ImagePtr msg_track;
image_transport::Publisher pub_track;
int l_h=0,hi_h =0 ,l_s =0,hi_s=0 ,l_v=0 ,hi_v=0;//

void morphclose(Mat &frame)
{
Mat ele=getStructuringElement(MORPH_RECT,Size(5,5),Point(-1,-1));
morphologyEx(frame,frame,MORPH_CLOSE,ele);
morphologyEx(frame,frame,MORPH_OPEN,ele);
}

void moment(Mat img,Mat &oframe)
{
  Mat canny_output;
  vector<vector<Point> > contours;
  vector<Vec4i> hierarchy;
  Canny( img, canny_output, 120, 120*2, 3 );
  findContours(canny_output, contours, hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE, Point(0, 0) );
  
  if(!contours.empty())
  {
  vector<double> areas(contours.size());
  for(int i=0;i<contours.size();++i)
  {    areas[i]=contourArea(contours.at(i),0);}
  
  Moments m;
  double max=*max_element( areas.begin(), areas.end() ); 
  for(int i=0;i<areas.size();++i)
  if(max==areas[i])
  {
       m=moments(contours[i],false);
       Point2f ma=Point2f(m.m10/m.m00,m.m01/m.m00); 
       circle(oframe,ma,4,Scalar(0,0,255),-1);
       drawContours(oframe,contours,i,Scalar(0,255,0),2,8,hierarchy,0,Point());
       break;
  }
  }
  
}


	void imageCallback(const sensor_msgs::ImageConstPtr& msg){
		
		Mat oframe,frame,tframe;
		namedWindow("Final");
		
	try
	   {
	    oframe = cv_bridge::toCvShare(msg, "bgr8")->image;
	   }
	catch (cv_bridge::Exception& e)
	   {
	     ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
	   }
	cvtColor(oframe,frame,COLOR_BGR2HSV);
        inRange(frame,Scalar(l_h,l_s,l_v),Scalar(hi_h,hi_s,hi_v),tframe);
	morphclose(tframe);
	medianBlur(tframe,tframe,2*5 + 1); //here 5 is the kernel size for bluring
	moment(tframe,oframe);
	imshow("Final",oframe);
	waitKey(20);
	msg_track = cv_bridge::CvImage(std_msgs::Header(), "bgr8", oframe).toImageMsg();
	pub_track.publish(msg_track);	
	
	}

        void hsvCallBack(const std_msgs::Int32MultiArray::ConstPtr& msg)//
        {
           /* hi_h = msg->data.at(0);
            l_h = msg->data.at(1);
            cout<<hi_h<<" "<<l_h<<endl;
            hi_s = msg->data.at(2);
            l_s = msg->data.at(3);
            cout<<hi_s<<" "<<l_s<<endl;
            hi_v = msg->data.at(4);
            l_v = msg->data.at(5);
            cout<<hi_v<<" "<<l_v<<endl;
        */
            cout<<1;
        }

	


int main(int argc, char **argv)
{
	
	ros::init(argc, argv, "image_tracker");
	ros::NodeHandle nh;
	image_transport::ImageTransport it(nh);
	image_transport::Subscriber sub_track = it.subscribe("camera/image", 1,imageCallback);
	image_transport::Publisher pub_track = it.advertise("object_track", 1);
	ros::Subscriber sub_hsv = nh.subscribe("HSV", 1000,hsvCallBack);
	
	
	
	//Publisher pub(nh);//
	//pub.msg_track = cv_bridge::CvImage(std_msgs::Header(), "bgr8", oframe).toImageMsg();//
	//pub.publish_image();//
        ros::spin();
return 0;
}
