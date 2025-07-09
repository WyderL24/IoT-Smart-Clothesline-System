#include <Servo.h>

const int rainSensorPin = A0;     // Rain sensor analog output
const int threshold = 600;        // Adjust depending on sensitivity
const int servoPin = 9;

Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  myServo.write(0); // Clothesline extended
  pinMode(rainSensorPin, INPUT);
}

void loop() {
  int rainValue = analogRead(rainSensorPin);
  Serial.print("Rain Sensor Value: ");
  Serial.println(rainValue);

  if (rainValue < threshold) {
    myServo.write(0);  // No rain → extend
  } else {
    myServo.write(90); // Rain → retract
  }

  delay(1000);
}
