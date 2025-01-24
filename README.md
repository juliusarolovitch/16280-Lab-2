Note: before the package can be built, the model path will need to be updated in src/image_service_pkg/image_service_pkg/image_servce_server.py and src/image_service_pkg/setup.py

Open a shell in the ros2 workspace and run:
'''bash
colcon build --packages-select image_service_pkg
'''

After the build, run:
'''bash
source install/setup.bash
'''

Then, launch the service server:
'''bash
ros2 run image_service_pkg image_service_server
'''

Then, in another shell:
'''bash
source install/setup.bash
'''

And then:
'''bash
ros2 run image_service_pkg image_service_client <image_path>
'''
