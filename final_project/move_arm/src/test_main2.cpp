
#include <ros/ros.h> 
#include <move_arm/move_arm.h>

using namespace std;

int main(int argc, char** argv) {
    ros::init(argc, argv, "move_arm"); //node name
    ros::NodeHandle nh;
    MoveArm Movearm(&nh);


    while (ros::ok()) {

        ros::Duration(0.1).sleep();
    }

    return 0;
}

