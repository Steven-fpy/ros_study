#include "ros/ros.h" //ROS헤더파일
#include "std_msgs/String.h" // std_msgs 패키지의 String메세지 헤더파일

void msgCallback(const std_msgs::String::ConstPtr& msg)
//c++에서 제공하는 포인터(ConstPtr&)
//msgCallback: 이벤트가 발생했을때 호출되는 함수.
{
    ROS_INFO("msg : %s" , msg->data.c_str());
    //msg에 data라는 녀석을 꺼내 쓴다 //c_str()은 c언어의 str타입을 쓰겠다는 의미
}

int main(int argc, char** argv)
{
    ros::init(argc,argv, "my_subsdriber"); //노드 이름 초기화
    ros::NodeHandle nh; //노드핸들선언

    //서브스크라이버 선언
    //패키지('std_msgs')의 메시지('String')를 이용한 서브스크라이버('sub')를 선언한다.
    //토픽은 ('my_topic')이며, 서브스크라이버큐(queue) 사이즈를 (100)으로 설정한다.
    //콜백함수는 ('msgCallback')이다.
    ros::Subscriber sub = nh.subscribe("my_topic", 100, msgCallback);
    //콜백 함수 호출을 위한 함수, 여기서는 메시지가 수신되기를 대기
    //수신되었을 경우 콜벡 함수를 호출한다.
    ros::spin();//무한반복문을 만난 것처럼 메시지 수신을 대기한다.

    return 0;
}
