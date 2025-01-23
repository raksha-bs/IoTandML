# IoT and Machine Learning-based Smart Cane

## Overview
The **IoT and Machine Learning-based Smart Cane** is an assistive technology designed to enhance the mobility and safety of visually impaired individuals. This smart cane integrates IoT technology, machine learning algorithms, and various sensors to provide real-time navigation assistance, obstacle detection, and emergency response mechanisms.

## Features
- **Obstacle Detection**: Uses ultrasonic sensors to detect obstacles and alerts the user via buzzer and voice feedback.
- **Object Recognition**: Employs a high-definition camera with machine learning algorithms to recognize and identify objects.
- **GPS and GSM Integration**: Enables real-time location tracking and emergency notifications.
- **Fall Detection**: Detects sudden falls and automatically notifies caregivers.
- **Panic Button**: Allows users to trigger an emergency alert with their location.
- **Voice Feedback**: Provides auditory alerts via Bluetooth headphones for better accessibility.
- **Energy Efficient and Portable**: Designed for lightweight portability with a long-lasting battery.

## Hardware Components
- Raspberry Pi 4
- Ultrasonic Sensors
- Raspberry Pi Camera
- GSM Module
- GPS Module
- Accelerometer
- Buzzer
- Power Supply (USB Power Bank/Adapter)

## Software and Technologies Used
- **Programming Language**: Python
- **Machine Learning Framework**: OpenCV, TensorFlow (SSD MobileNetV3 for object detection)
- **Text-to-Speech**: pyttsx3
- **Hardware Communication**: GPIO libraries

## Installation and Setup
### 1. Clone the Repository
### 2. Install Dependencies
### 3. Connect the Hardware Components
Refer to the circuit diagram in the documentation for proper connections.

### 4. Run the Program

## Working Mechanism
1. **Obstacle Detection**: Ultrasonic sensors continuously scan the surroundings. If an obstacle is detected, a buzzer sound and voice feedback are triggered.
2. **Object Recognition**: The camera captures images and runs an object detection model to identify objects, providing voice feedback to the user.
3. **Fall Detection**: The accelerometer monitors movements. A sudden fall triggers an emergency alert.
4. **Emergency Response**: The panic button sends an SMS with the user's real-time location via the GSM module.

## Results
- Successfully detects obstacles within a 100cm range.
- Accurately identifies objects using the trained machine learning model.
- Sends emergency alerts and GPS coordinates reliably.

## Future Enhancements
- Improve battery life and optimize power consumption.
- Enhance machine learning models for better object recognition.
- Integrate additional sensors for enhanced safety features.

## Contributors
- **B S Shriraksha** (BNM Institute of Technology)
- **Lakshmi J** (BNM Institute of Technology)

