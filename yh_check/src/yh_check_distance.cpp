#include "ros/ros.h"
#include "yh_check/YhCheck.h"

int main(int argc, const char** argv) 
{
    ros::init(argc, argv,"yh_check_distance");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<yh_check::YhCheck>("check_distance",10)

    ros::Rate loop_rate(2);

    yh_check::YhCheck msg;
    int cnt = 0;

    while (ros::ok())
    {
        msg.stamp = ros::Time::now();
        msg.data = cnt;
        ROS_INFO("send msg : %d", msg.stamp.sec);
        ROS_INFO("send msg : %d", msg.stamp.nsec);

    }


    return 0;
}