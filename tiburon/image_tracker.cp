#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc.hpp>
#include<stdlib.h>
#include<algorithm>
#include"sample_qt_app/Combined.h"


using namespace std;
using namespace cv;




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




class Controller {
	private:
	
	image_transport::ImageTransport it;	
	image_transport::Subscriber sub_track;
	image_transport::Publisher pub_track;
	ros::NodeHandle nh;	
        ros::Subscriber sub_hsv;
        int l_h ,hi_h ,l_s ,hi_s ,l_v ,hi_v ;
        public:
        sensor_msgs::ImagePtr msg_track;

	Controller(ros::NodeHandle _nh):nh(_nh),it(_nh){
	
	pub_track = it.advertise("object_track", 1);
	sub_track = it.subscribe("camera/image", 1,&Controller::imageCallback,this);
        sub_hsv = nh.subscribe("HSV", 1000, &Controller::hsvCallBack,this);
         l_h =0;
         hi_h = 0;
         l_s =0;
         hi_s = 0;
         l_v =0;
         hi_v = 0;
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
	
	msg_track = cv_bridge::CvImage(std_msgs::Header(), "bgr8", oframe).toImageMsg();
	pub_track.publish(msg_track);	
	waitKey(1);
	}

        void hsvCallBack(const sample_qt_app::Combined::ConstPtr& msg)
        {
	  
	    hi_h = msg->Hmax;
            l_h = msg->Hmin;
            
            hi_s = msg->Smax;
            l_s = msg->Smin;
            
            hi_v = msg->Vmax;
            l_v = msg->Vmin;
            
        
            ROS_INFO("%d %d",msg->Hmax,msg->Hmin);
	  
        }

	

};


int main(int argc, char **argv)
{
	
	ros::init(argc, argv, "image_tracker");
	ros::NodeHandle nh2;
	Controller c(nh2);

        ros::spin();
return 0;
}
