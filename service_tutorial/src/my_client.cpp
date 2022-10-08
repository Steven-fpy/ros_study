#include "ros/ros.h"
#include "service_tutorial/AddTwoInts.h" 
                                        
#include <cstdlib> 

int main(int argc, char ** argv)
{
    ros::init(argc, argv, "my_client");
    
    
    if (argc !=3)
                 
    {            
        ROS_INFO("command: rosrun service_tutorial my_client arg1 arg2");
        ROS_INFO("arg1, arg2 : int32 number");
        return 1;
    }

    ros::NodeHandle nh;
    
    ros::ServiceClient my_client = nh.serviceClient<service_tutorial::AddTwoInts>("add_two_ints");

    service_tutorial::AddTwoInts srv;

    
    srv.request.a = atoi(argv[1]); 
    srv.request.b = atoi(argv[2]);

    if (my_client.call(srv))
    {
        ROS_INFO("send srv: srv.request.a=%d, srv.request.b=$d", srv.request.a, srv.request.b);
        ROS_INFO("receive srv: srv.response.result=%d", srv.response.result);
    }
    else
    {
        ROS_ERROR("Failed to call service");
        return 1;
    }


    return 0;
}
