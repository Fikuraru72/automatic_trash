#include <Servo.h>
const int trigPin2 = 5; // SABUN
const int echoPin2 = 4; // SABUN
Servo myservo;

long duration;
int distance;
long distancemm;

void setup() {
pinMode(trigPin2, OUTPUT); // SABUN ULTRA
pinMode(echoPin2, INPUT); // SABUN ULTRA 
myservo.attach(8);
}

void loop() {
  digitalWrite(trigPin2, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin2, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin2, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin2, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance1: ");
Serial.println(distance   );
delay(0);

// SERVO1
if(distance<30)
{
  myservo.write(0);
  delay(3000);
  }
  else
  {
    myservo.write(4000);
    delay(0);
    }
  }
