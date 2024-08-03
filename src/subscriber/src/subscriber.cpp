#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber();

  private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
    void topic_callback(const std_msgs::msg::String & msg) const;
};

// Create ROS2 subscriber node
MinimalSubscriber::MinimalSubscriber()
: Node("my_subscriber") // Node name
{
  subscriber_ = this->create_subscription<std_msgs::msg::String>(
    "my_topic", // Topic name to subscribe
    10,      // Queue size
    std::bind(
      &MinimalSubscriber::topic_callback, // Callback function to call
      this,                               // Pointer to the current instance
      std::placeholders::_1));            // First argument
}

// Callback function
void MinimalSubscriber::topic_callback(const std_msgs::msg::String & msg) const
{
  RCLCPP_INFO(this->get_logger(), "Subscribed: '%s'", msg.data.c_str());
}

int main(int argc, char * argv[])
{
  // Initialize ROS2
  rclcpp::init(argc, argv);

  // Keep the node spinning
  rclcpp::spin(std::make_shared<MinimalSubscriber>());

  // Shutdown ROS2
  rclcpp::shutdown();
  return 0;
}