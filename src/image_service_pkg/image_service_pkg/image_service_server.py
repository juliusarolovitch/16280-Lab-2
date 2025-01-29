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


def load(checkpoint_path, device='cuda'):
    model = fasterrcnn_resnet50_fpn(pretrained=False, max_size=256,min_size=256,num_classes=4)
    checkpoint = torch.load(checkpoint_path, map_location=device)
    model.load_state_dict(checkpoint['model_state_dict'])
    model.to(device)
    model.eval()
    return model



class ImageServiceServer(Node):
    def __init__(self):
        super().__init__('image_service_server')
        self.srv = self.create_service(ReturnImage, 'return_image_service', self.handle_service)
        self.get_logger().info('Service server ready.')
        
        self.bridge = CvBridge()
        self.device = torch.device('cuda') if torch.cuda.is_available() else torch.device('cpu')
        
        num_classes = 3  
        
        model_path = "/home/turtle/16280-Lab-2/src/image_service_pkg/image_service_pkg/model.pth"
        self.model = load(model_path, device=self.device)
        
        self.model.to(self.device)
        self.model.eval()
        self.get_logger().info('Model loaded and set to evaluation mode.')
        
        self.labels = {1: "blue", 2: "green", 3: "red"}
        self.label_colors = {
            "blue": (255, 0, 0),
            "green": (0, 255, 0),
            "red": (0, 0, 255)
        }
        
    def handle_service(self, request, response):
        self.get_logger().info(f"Received request with string: '{request.some_string}'")
        
        cv_image = self.bridge.imgmsg_to_cv2(request.image, desired_encoding='rgb8')
        
        image_tensor = torch.from_numpy(cv_image).permute(2,0,1).float() # / 255.0
        # image_tensor = image_tensor[:, :, [2, 1, 0]] 
        # image = image.cpu().permute(1, 2, 0).numpy()
        # image = image[:, :, [2, 1, 0]] 
        
        image_tensor = image_tensor.to(self.device)
        images = [image_tensor]
        
        with torch.no_grad():
            predictions = self.model(images)

        self.get_logger().info(f"Predictions: {predictions}")

        for box, label, score in zip(predictions[0]['boxes'], predictions[0]['labels'], predictions[0]['scores']):
            if score < 0.8:  
                continue
            x_min, y_min, x_max, y_max = box.int().cpu().numpy()
            class_label = self.labels.get(label.item(), "unknown")
            color = self.label_colors.get(class_label, (255, 255, 255))
            cv2.rectangle(cv_image, (x_min, y_min), (x_max, y_max), color, 2)
            cv2.putText(cv_image, f"{class_label}: {score:.2f}", (x_min, y_min - 5),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.5, color, 2)
        
        response.image = self.bridge.cv2_to_imgmsg(cv_image, encoding='rgb8')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ImageServiceServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
