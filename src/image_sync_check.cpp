#include <ros/ros.h>
#include <image_transport/image_transport.h>


int main(){
	ros::NodeHandle nh;
	image_transport::ImageTransport image_left(nh);
	image_transport::Subscriber sub = image_left.subscribe("stereo/left/image_raw", 1, leftCallback);
	image_transport::Publisher pub = image_left.advertise("out_image_base_topic", 1);
	
	
	
	
}

void leftCallback(const sensor_msgs::ImageConstPtr& msg){
	
	
}

void rightCallback(){
	
	
}


