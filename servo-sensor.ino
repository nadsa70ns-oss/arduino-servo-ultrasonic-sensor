#include <Servo.h>

// تعريف البنات
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

Servo myServo;

long duration;
float distance;

const int distanceThreshold = 10; // المسافة بالسم
const int servoAngleActive = 135;  // الزاوية عند اكتشاف جسم
const int servoAngleRest = 45;     // الزاوية الأصلية

void setup() {
  Serial.begin(9600);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  myServo.attach(servoPin);
  myServo.write(servoAngleRest);
  
  delay(500);
}

float getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  float dist = duration * 0.034 / 2;
  
  return dist;
}

void loop() {
  distance = getDistance();
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if (distance >= distanceThreshold && distance > 0) {
    myServo.write(servoAngleActive);
  } else {
    myServo.write(servoAngleRest);
  }
  
  delay(200);
}