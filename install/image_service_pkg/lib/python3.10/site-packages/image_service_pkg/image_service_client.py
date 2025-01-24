import sys
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from image_service_interfaces.srv import ReturnImage
import cv2
from cv_bridge import CvBridge

class ImageServiceClient(Node):
    def __init__(self, image_path):
        super().__init__('image_service_client')
        self.cli = self.create_client(ReturnImage, 'return_image_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
        self.bridge = CvBridge()
        self.req = ReturnImage.Request()
        self.prepare_request(image_path)
        self.future = self.cli.call_async(self.req)
        self.future.add_done_callback(self.response_callback)

    def prepare_request(self, image_path):
        cv_image = cv2.imread(image_path)
        if cv_image is None:
            self.get_logger().error(f"Failed to read image from {image_path}")
            rclpy.shutdown()
            return
        image_msg = self.bridge.cv2_to_imgmsg(cv_image, encoding="bgr8")
        self.req.image = image_msg
        self.req.some_string = f"Image from {image_path}"

    def response_callback(self, future):
        try:
            response = future.result()
            received_image = response.image
            self.get_logger().info(f"Received response with image of size: {len(received_image.data)} bytes")
            cv_image = self.bridge.imgmsg_to_cv2(received_image, desired_encoding="bgr8")
            cv2.imshow("Received Image", cv_image)
            cv2.waitKey(3000)  
            cv2.destroyAllWindows()
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")
        finally:
            rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    if len(sys.argv) < 2:
        print("Usage: ros2 run image_service_pkg image_service_client <image_path>")
        return
    image_path = sys.argv[1]
    node = ImageServiceClient(image_path)
    rclpy.spin(node)

if __name__ == '__main__':
    main()
