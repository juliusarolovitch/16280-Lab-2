import os
import cv2
import torch
import numpy as np
from cv_bridge import CvBridge
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from image_service_interfaces.srv import ReturnImage
from torchvision.models.detection.faster_rcnn import fasterrcnn_resnet50_fpn, FastRCNNPredictor

class ImageServiceServer(Node):
    def __init__(self):
        super().__init__('image_service_server')
        self.srv = self.create_service(ReturnImage, 'return_image_service', self.handle_service)
        self.get_logger().info('Service server ready.')
        
        self.bridge = CvBridge()
        self.device = torch.device('cuda') if torch.cuda.is_available() else torch.device('cpu')
        
        num_classes = 5  
        self.model = fasterrcnn_resnet50_fpn(pretrained=False, min_size=64, max_size=64)
        in_features = self.model.roi_heads.box_predictor.cls_score.in_features
        self.model.roi_heads.box_predictor = FastRCNNPredictor(in_features, num_classes=num_classes + 1)
        
        model_path = "/home/sheepster/ros2_ws/src/image_service_pkg/image_service_pkg/model.pth"
        checkpoint = torch.load(model_path, map_location=self.device)
        self.model.load_state_dict(checkpoint['model_state_dict'] if 'model_state_dict' in checkpoint else checkpoint)
        
        self.model.to(self.device)
        self.model.eval()
        self.get_logger().info('Model loaded and set to evaluation mode.')
        
        self.labels = {1: "blue", 2: "green", 3: "pink", 4: "red", 5: "yellow"}
        self.label_colors = {
            "blue": (255, 0, 0),
            "green": (0, 255, 0),
            "pink": (255, 105, 180),
            "red": (0, 0, 255),
            "yellow": (0, 255, 255)
        }
        
    def handle_service(self, request, response):
        self.get_logger().info(f"Received request with string: '{request.some_string}'")
        
        cv_image = self.bridge.imgmsg_to_cv2(request.image, desired_encoding='bgr8')
        
        image_tensor = torch.from_numpy(cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)).permute(2,0,1).float() / 255.0
        image_tensor = image_tensor.to(self.device)
        images = [image_tensor]
        
        with torch.no_grad():
            predictions = self.model(images)

        self.get_logger().info(f"Predictions: {predictions}")

        for box, label, score in zip(predictions[0]['boxes'], predictions[0]['labels'], predictions[0]['scores']):
            if score < 0.05:  
                continue
            x_min, y_min, x_max, y_max = box.int().cpu().numpy()
            class_label = self.labels.get(label.item(), "unknown")
            color = self.label_colors.get(class_label, (255, 255, 255))
            cv2.rectangle(cv_image, (x_min, y_min), (x_max, y_max), color, 2)
            cv2.putText(cv_image, f"{class_label}: {score:.2f}", (x_min, y_min - 5),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.5, color, 2)
        
        response.image = self.bridge.cv2_to_imgmsg(cv_image, encoding='bgr8')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ImageServiceServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
