#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "interfaces/srv/my_service.hpp"

class MinimalServer : public rclcpp::Node
{
  public:
    MinimalServer();

  private:
    rclcpp::Service<interfaces::srv::MyService>::SharedPtr server_;
    void service_callback(
      const std::shared_ptr<interfaces::srv::MyService::Request> request,
            std::shared_ptr<interfaces::srv::MyService::Response> response) const;
};

// Create ROS2 service server node
MinimalServer::MinimalServer()
: Node("my_service_server") // Node name
{
  server_ = this->create_service<interfaces::srv::MyService>(
    "my_service", // Service name
    std::bind(
      &MinimalServer::service_callback, // Callback function to call
      this,                             // Pointer to the current instance
      std::placeholders::_1,            // First argument
      std::placeholders::_2));          // Second argument
}

// Service callback function
void MinimalServer::service_callback(
  const std::shared_ptr<interfaces::srv::MyService::Request> request,
        std::shared_ptr<interfaces::srv::MyService::Response> response) const
{
  RCLCPP_INFO(this->get_logger(), "Received point: x=%f, y=%f, z=%f", request->point.x, request->point.y, request->point.z);

  response->status = 1;
  RCLCPP_INFO(this->get_logger(), "Sending status: %ld", response->status);
}

int main(int argc, char **argv)
{
  // Initialize ROS2
  rclcpp::init(argc, argv);

  // Keep the node spinning
  rclcpp::spin(std::make_shared<MinimalServer>());

  // Shutdown ROS2
  rclcpp::shutdown();
  return 0;
}