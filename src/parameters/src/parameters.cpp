#include <chrono>
#include <functional>
#include <string>

#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class MinimalParameter : public rclcpp::Node //todo
{
  public:
    MinimalParameter();

  private:
    void timer_callback();
    rclcpp::TimerBase::SharedPtr timer_;
};

// Create ROS2 parameter node
MinimalParameter::MinimalParameter()
: Node("my_parameter_node") // Node name
{
  this->declare_parameter("my_param", "default"); // Set default value

  timer_ = this->create_wall_timer(
    2000ms, // Interval
    std::bind(
      &MinimalParameter::timer_callback, // Callback function to call
      this));                            // Pointer to the current instance
}

// Callback function
void MinimalParameter::timer_callback()
{
  // Get parameter
  std::string param = this->get_parameter("my_param").as_string();
  RCLCPP_INFO(this->get_logger(), "my_param: %s", param.c_str());

  // Set parameter
  std::vector<rclcpp::Parameter> all_new_parameters{rclcpp::Parameter("my_param", "hoge")};
  this->set_parameters(all_new_parameters);
}

int main(int argc, char ** argv)
{
  // Initialize ROS2
  rclcpp::init(argc, argv);

  // Keep the node spinning
  rclcpp::spin(std::make_shared<MinimalParameter>());

  // Shutdown ROS2
  rclcpp::shutdown();
  return 0;
}