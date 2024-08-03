#include <chrono>
#include <cstdlib>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "interfaces/srv/my_service.hpp"

using namespace std::chrono_literals; // For "1s"

class MinimalClient : public rclcpp::Node
{
  public:
    MinimalClient();
    void send_request(float x, float y, float z);

  private:
    rclcpp::Client<interfaces::srv::MyService>::SharedPtr client_;
};

// Create ROS2 service client node
MinimalClient::MinimalClient()
: Node("my_service_client") // Node name
{
  client_ = this->create_client<interfaces::srv::MyService>("my_service"); // Service name
}

void MinimalClient::send_request(float x, float y, float z)
{
  // Wait for service server to be available
  while (!client_->wait_for_service(1s))
  {
    if (!rclcpp::ok()) // ROS2 is not working properly
    {
      RCLCPP_ERROR(get_logger(), "Interrupted while waiting for the service. Exiting.");
      return;
    }
    RCLCPP_INFO(get_logger(), "Server not available, trying again...");
  }

  auto request = std::make_shared<interfaces::srv::MyService::Request>();
  request->point.x = x;
  request->point.y = y;
  request->point.z = z;

  // Send request and wait for response
  auto response = client_->async_send_request(request);
  if (rclcpp::spin_until_future_complete(shared_from_this(), response) == rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(get_logger(), "Response: %ld", response.get()->status);
  }
  else
  {
    RCLCPP_ERROR(get_logger(), "Failed to call service my_service");
  }
}


int main(int argc, char **argv)
{
  // Initialize ROS2
  rclcpp::init(argc, argv);

  // Create ROS2 service client node
  auto minimal_client = std::make_shared<MinimalClient>();
  minimal_client->send_request(1.0, 2.0, 3.0);

  // Shutdown ROS2
  rclcpp::shutdown();
  return 0;
}