from setuptools import find_packages, setup
import os

package_name = 'image_service_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('lib', 'python3.10', 'site-packages', package_name), ['image_service_pkg/model.pth']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sheepster',
    maintainer_email='sheepster@todo.todo',
    description='Python package providing nodes for image service using custom interfaces.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'image_service_server = image_service_pkg.image_service_server:main',
            'image_service_client = image_service_pkg.image_service_client:main',
        ],
    },
)
