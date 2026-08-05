# Arduino Servo + Ultrasonic Sensor Project

An Arduino project that controls a servo motor based on readings from an ultrasonic distance sensor (HC-SR04).

## 📋 How It Works
If the sensor detects an object at a distance of 10 cm or more, the servo moves to a set angle. If the object gets closer than that, the servo returns to its resting position.

## 🧰 Components
- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90)
- Jumper Wires

## 🔌 Wiring

**HC-SR04:** VCC→5V | GND→GND | Trig→Pin 9 | Echo→Pin 10

**Servo:** GND (brown)→GND | VCC (red)→5V | Signal (yellow)→Pin 6

## 📷 Setup Photo
![Setup Photo](images/setup_photo.jpg)

## 🎥 Demo Video
[Watch here](video_link)

## 💻 Code
The code is in [`servo_sensor_project.ino`](servo_sensor_project.ino)

## ⚙️ Usage
1. Wire the components as shown above
2. Open `servo_sensor_project.ino` in Arduino IDE
3. Select the correct board (Arduino UNO) and port
4. Upload the code and open Serial Monitor at 9600 baud to view distance readings
