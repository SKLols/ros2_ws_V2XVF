//
// Created by rosk on 30.08.19.
//

#include "rclcpp/rclcpp.hpp"
#include "algorithm"
#include "iostream"
#include "cstdint"
#include "cstring"
#include "random"
#include "sensor_msgs/msg/nav_sat_fix.hpp"
#include "sensor_msgs/msg/nav_sat_status.hpp"
#include "v2xvf_interfaces/msg/map_object.hpp"
#include "boost/uuid/uuid.hpp"
#include "boost/uuid/uuid_generators.hpp"
#include "boost/uuid/uuid_io.hpp"
#include "etsi_its_msgs/msg/cam.h"
#include "rclcpp/logging.hpp"

class CamReceiver
{
    public:
        CamReceiver(rclcpp::NodeHandle nh, rclcpp::NodeHandle nh_private, rclcpp::Publisher publisher);
        void receiveCam(const etsi_its_msgs::CAMPtr& cam);

    private:
        rclcpp::NodeHandle m_nh;
        rclcpp::NodeHandle m_nh_private;
        rclcpp::Subscriber m_sub;
        rclcpp::Publisher m_publisher;
        std::map<uint32_t, std::string> m_cams_received;
};
