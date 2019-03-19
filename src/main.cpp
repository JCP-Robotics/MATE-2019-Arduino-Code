#include <Arduino.h>

//defines the pin numbers of the speed pin for each motor. Write to these with PWM.
#define motor1Speed 2
#define motor2Speed 3
#define motor3Speed 4
#define motor4Speed 5
#define motor5Speed 6

//defines the pin numbers for the direcional pins for each motor.
#define motor1A 23
#define motor1B 25

#define motor2A 27
#define motor2B 29

#define motor3A 31
#define motor3B 33

#define motor4A 35
#define motor4B 37

#define motor5A 39
#define motor5B 41

//declares a variable for motor speed. This can be changed later based on controller inputs.
int speed = 255;

int controllerInput;

void setup() {
  //sets all of the needed pins as outputs
  pinMode(motor1Speed,OUTPUT);
  pinMode(motor2Speed,OUTPUT);
  pinMode(motor3Speed,OUTPUT);
  pinMode(motor4Speed,OUTPUT);
  pinMode(motor5Speed,OUTPUT);

  pinMode(motor1A,OUTPUT);
  pinMode(motor1B,OUTPUT);
  
  pinMode(motor2A,OUTPUT);
  pinMode(motor2B,OUTPUT);

  pinMode(motor3A,OUTPUT);
  pinMode(motor3B,OUTPUT);

  pinMode(motor4A,OUTPUT);
  pinMode(motor4B,OUTPUT);

  pinMode(motor5A,OUTPUT);
  pinMode(motor5B,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  controllerInput = Serial.read();

  switch (controllerInput)
  {
    case 0:
      //forward
      break;
    
    case 1:
      //backwards
      break;

    case 2:
      //left
      break;

    case 3:
      //right
      break;

    case 4:
      //clockwise rotation
      break;

    case 5:
      //counterclockwise rotation
      break;

    case 6:
      //up
      break;

    case 7:
      //down
      break;
  
    case 8:
      //nuetral/no motor movement
      
    default:
      break;
  }
}

void motorForward(int speed, int speedPin, int pinA, int pinB){
  analogWrite(speedPin, speed);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
}

void motorReverse(int speed, int speedPin, int pinA, int pinB){
  analogWrite(speedPin, speed);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
}