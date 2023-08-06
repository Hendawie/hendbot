import os

import launch_ros
from launch_ros.actions.node import Node

from launch.actions.declare_launch_argument import DeclareLaunchArgument
from launch.launch_description import LaunchDescription
from launch.substitutions.launch_configuration import LaunchConfiguration


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="kinect_ros2",
                executable="kinect_ros2_node",
                name="kinect_ros2",
                namespace="kinect",
                output='screen',
                parameters=[{
                'image_size': [640,480],
                'camera_frame_id': 'kinect_depth'
                }]
    )
    ])