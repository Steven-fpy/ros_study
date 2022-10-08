#!/usr/bin/python
# -*- coding:utf-8 -*-
import rospy
from std_msgs.msg import Int32

def my_talker():
    rospy.init_node("my_test_pub")
    pub = rospy.Publisher("p_count",Int32,queeu_size=100)
    
    loop_rate = rospy.Rate(4)
    
    msg = Int32()
    msg.data = 0
    
    while not rospy.is_shutdown():
        pub.publish(msg)
        loop_rate.sleep()
        msg.data += 1
        
if __name__ == "__main__":
    try:
        my_talker()
    except rospy.ROSInterruptException:
        pass
        
