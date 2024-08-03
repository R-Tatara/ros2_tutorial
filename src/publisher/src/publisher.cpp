#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher();

  private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    void timer_callback();
    size_t count_;
};

// Create ROS2 publisher node
MinimalPublisher::MinimalPublisher()
: Node("my_publisher"), // Node name
  count_(0)
{
  publisher_ = this->create_publisher<std_msgs::msg::String>(
    "my_topic", // Topic name to publish
    10);     // Queue size

  timer_ = this->create_wall_timer(
    2s, // Interval
    std::bind(
      &MinimalPublisher::timer_callback, // Callback function to call
      this));                            // Pointer to the current instance
}

// Callback function
void MinimalPublisher::timer_callback()
{
  auto message = std_msgs::msg::String();
  message.data = "Number: " + std::to_string(count_++);
  RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
  publisher_->publish(message);
}

int main(int argc, char * argv[])
{
  // Initialize ROS2
  rclcpp::init(argc, argv);

  // Keep the node spinning
  rclcpp::spin(std::make_shared<MinimalPublisher>());

  // Shutdown ROS2
  rclcpp::shutdown();
  return 0;
}