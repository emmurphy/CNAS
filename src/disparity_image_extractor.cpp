#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <stereo_msgs/DisparityImage.h>

int main(){
	ros::NodeHandle nh;

	DisparityImage::Subscriber sub = nh.subscribe("stereo/disparity", 1, disparityCallback);
	
	image_transport::ImageTransport image_left(nh);
	image_transport::Publisher pub = image_left.advertise("stereo/disparity_image_raw", 1);
	
	
	
	
}

void disparityCallback(const stereo_msgs::DisparityImageConstPtr& msg){
	
	
}
