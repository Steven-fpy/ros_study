#include "ros/ros.h"
#include "yh_difference/YhDifference.h"

bool difference(yh_difference::YhDifference::Request& req,
                yh_difference::YhDifference::Response& res)

{
    res.result = abs(req.a - req.b);
    ROS_INFO("a:%d, b:%d, result=%d", req.a, req.b, res.result);
        return true;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv,"yh_difference_server");
    ros::NodeHandle nh;
    ros::ServiceServer yh_server = nh.advertiseSrvice("difference",difference);
    
    ros::spin();
    
    return 0;

}