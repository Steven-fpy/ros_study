# My_ros_study
my ros study_01


## 220927 시작
- topic_tutorial 패키지 생성
- my-publisher, my_subscriber 노드 생성
- 빌드
- 실행

## 220928
- topic_tutorial 패키지에 python scripts 추가
- py_publisher.py, py_subscriber.py 노드 생성
- 빌드
- 실행

- topic_2nd 패키지 생성
- second_pub, second_sub, py_2nd_pub, py_2nd_sub 노드 생성
- 빌드
- 실행

- 과제 1

## 220929
- [msg_tutorial](./msg_tutorial) 
    - msg_tutorial 패키지 생성
    - msg 디렉토리 Mymsg.msg 생성
    - msg_publisher, msg_subscriber, py_msg_pub.py,py_msg_sub.py 노드 생성
    - 빌드
    - 실행
    - cr 경로 생성 ailas -->> 

- [service_tutorial] (./service_tutorial)
    - service_tutorial 패키지 생성
    - srv 디렉토리에 AddTwoInts.srv 생성
    - my_client.cpp, my.server.cpp, py_client.py, py_server.py 생성
    - 빌드
    - 실행 

## 220930
- [과제 2 yh_star](/.yh_star)
    - yh_star 패키지 생성
    - yh_star_pub, yh_star_sub,yh_star_sub.py 노드생성
    - 빌드
    - 실행

- [과제 3 yh_service](./yh_service)
    -yh_service 패키지 생성
    -yh_server, yh_client, yh_server.py, yh_client.py 노드 생성
    - 빌드
    - 실행

## 221004
### [param_tutorial](./param_tutorial/)
- param_tutorial 패키지 생성
- calculate_server, calculate_client, calculate_client.py, calculate_server.py 노드 생성
- 빌드
- 실행
-[파라미터 서버 활용](#parameter-server)

-[과제 4 yh_dual](./yh_dual)

-[과제 5 yh_difference](./yh_difference)

-[과제 6 yh_check](미완성)

## ROS 명령어
### roscore
- ROS MASTER를 실행
- 노드를 켜기 전에 가장 먼저 실행
''' bash
    roscore
'''

### rosrun

- 노드를 실행한다.
- rosrun 패키지이름 노드이름
''' bash
    rosrun<패키지이름><노드이름>
'''

### carkin_create_pkg
- 현재 위치한 작업공간에 패키지를 생성한다.
- catkin_create_pkg 패키지이름 의존성
''' bash
    catkin create pkg <패키지이름> <의존성1> <의존성2>
'''

''' bash
    catkin_create_pkg topic_tutorial roscpp
    rospy std_msgs
'''

# msg_tutorial
직접 작성한 Mymsg 메시지로 통신하는 패키지

### Publisher Node
- name :
- topic :
- msg :
- 노드 설명

## msg 만드는 법
1. 패키지안에 ☆★  msg  ★☆ 디렉토리를 만든다.
2. .msg 확장자의 파일을 만든다.
3. 안에 내용을 작성한다.
4. CMakelists.txt에서 설정한다.
5. 빌드시 생성된다.

### Parameter Server
- ROS Mater에서 실행되고, 변수들을 담고 있는 서버
- ros::setParam(), ros::getParam(), rospy.set_param(), rospy.get_param() 등의 함수로 사용
- commanf line에서 rosparam으로 사용 가능
- rosparam list
    - 파라미터 서버의 모든 파라미터를 출력
'''bash
stvn@ubuntu:~$ rosparam get <파라미터 이름>
'''
- rosparam set <파라미터 이름> [파라미터 값]
    - 파라미터의 값을 지정함
'''bash
stvn@ubuntu:~$ rosparam set <파라미터 이름> [파라미터 값]
'''
