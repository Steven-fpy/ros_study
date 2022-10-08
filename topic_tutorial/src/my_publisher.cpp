#include "ros/ros.h"//로스헤더
#include "std_msgs/String.h" //메시지 헤더


int main(int argc, char** argv)
{
    ros::init(argc, argv, "my_publisher");//노드이름 초기화
    ros::NodeHandle nh; // ros 시스템과 통신을 위한 노드핸들선언
    //퍼블리셔 선언
    //패키지('std_msgs')의 메시지 파일('String')을 이용한 퍼블리셔('pub')를 만든다.
    //토픽은 ('my_topic')이며, 퍼블리셔큐(queue) 사이즈는 ('100')이다.
    //큐(queue) : 줄서는 것 nh.advertise << 퍼블리셔를 만드는 함수
    ros::Publisher pub = nh.advertise<std_msgs::String>("my_topic", 100);

    ros::Rate loop_rate(10); //루프 주기를 1000Hz로 설정한다.(0.001초)
    std_msgs::String msg;      //String은 string data이다.

    msg.data = "Hello Man~!";//msg의 data에 ""의 내용을 넣는다.

    while (ros::ok())//켜져있는동안 True이다.
    {
        pub.publish(msg); //pub이 msg를 퍼블리시한다.
        loop_rate.sleep(); // 위에서 정한 주기에 따라 sleep 한다.
    }

    return 0;
}