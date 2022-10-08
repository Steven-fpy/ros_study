#include "ros/ros.h"
#include "yh_star/YhStarMsg.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "yh_star_pub");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<yh_star::YhstarMsg>("yh_star_topic",100);

    ros::Rate loop_rate(2/3);

    yh_star::YhStarMsg msg;
   
    msg.data = 1;


    while (ros::ok())
    {
        msg.stamp = ros::Time::now();
        pub.publisher(msg);
        msg.data++;
        loop_rate.sleep();
    }
}
