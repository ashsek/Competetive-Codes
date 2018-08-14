#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include<std_msgs/Int32MultiArray.h>


using namespace std;
using namespace cv;


int hi_h=85,hi_s=165,hi_v=255,l_h=21,l_s=90,l_v=129,ks=1;

class SubsnPub
{

ros::NodeHandle nh;
image_transport::ImageTransport it;
image_transport::Subscriber sub;
image_transport::Publisher pub;
ros::Subscriber settings;
sensor_msgs::ImagePtr msg4;
public:

void setparam(const std_msgs::Int32MultiArray::ConstPtr& arr);
void blurnmorph(Mat &frame);
void moment(Mat img,Mat &oframe);
void orimagecallback(const sensor_msgs::ImageConstPtr& msg3);
SubsnPub(ros::NodeHandle _nh);
};

void SubsnPub::blurnmorph(Mat &frame)
{
       Mat ele=getStructuringElement(MORPH_RECT,Size(5,5),Point(-1,-1));
       morphologyEx(frame,frame,MORPH_CLOSE,ele);
       morphologyEx(frame,frame,MORPH_OPEN,ele);
       GaussianBlur(frame,frame,Size(2*ks + 1, 2*ks + 1),0,0);
}


void SubsnPub::moment(Mat img,Mat &oframe)
{
  Mat canny_output;
  vector<vector<Point> > contours;
  vector<Vec4i> hierarchy;
  Canny( img, canny_output, 120, 120*2, 3 );
  findContours(canny_output, contours, hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE, Point(0, 0) );
  drawContours(oframe,contours,-1,Scalar(0,0,255),2,8,hierarchy,0,Point());
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
       drawContours(oframe,contours,i,Scalar(0,0,255),2,8,hierarchy,0,Point());
       break;
  }
  }
  
}

void SubsnPub::setparam(const std_msgs::Int32MultiArray::ConstPtr& arr)
{
 if(!arr->data.empty())
 {  hi_v=arr->data.at(0);
    l_v=arr->data.at(1);
    hi_s=arr->data.at(2);
    l_s=arr->data.at(3);
    hi_h=arr->data.at(4);
    l_h=arr->data.at(5);
	cout<<1;
 } 
}     

void SubsnPub::orimagecallback(const sensor_msgs::ImageConstPtr& msg3)
{
    Mat oframe=cv_bridge::toCvShare(msg3, "bgr8")->image;
    Mat frame;
    cvtColor(oframe,frame,COLOR_BGR2HSV);
    inRange(frame,Scalar(l_h,l_s,l_v),Scalar(hi_h,hi_s,hi_v),frame); 
    blurnmorph(frame);
    moment(frame,oframe);
    msg4 = cv_bridge::CvImage(std_msgs::Header(), "bgr8", oframe).toImageMsg();
    pub.publish(msg4);
    waitKey(1);
}

SubsnPub::SubsnPub(ros::NodeHandle _nh):nh(_nh),it(_nh)
{
   sub = it.subscribe("camera/image", 1, &SubsnPub::orimagecallback,this);
   pub= it.advertise("object_track",1);
   settings=nh.subscribe("HSV",1000,&SubsnPub::setparam,this);
}


int main(int argc,char **argv)
{
ros::init(argc,argv,"med2");
ros::NodeHandle nh;
SubsnPub s(nh);
ros::spin();
return 0;
}
    
