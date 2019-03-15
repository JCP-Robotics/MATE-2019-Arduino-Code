#include <Arduino.h>

//defines the pin numbers of the speed pin for each motor. Write to these with PWM.
#define enA1 2
#define enA2 3
#define enA3 4
#define enA4 5
#define enA5 6

//defines the pin numbers for the direcional pins for each motor.
#define inA1 23
#define inB1 25

#define inA2 27
#define inB2 29

#define inA3 31
#define inB3 33

#define inA4 35
#define inB4 37

#define inA5 39
#define inB5 41

//declares a variable for motor speed. This can be changed later based on controller inputs.
int speed = 255;

int r = 1;

void setup() {
  //sets all of the needed pins as outputs
  pinMode(enA1,OUTPUT);
  pinMode(enA2,OUTPUT);
  pinMode(enA3,OUTPUT);
  pinMode(enA4,OUTPUT);
  pinMode(enA5,OUTPUT);

  pinMode(inA1,OUTPUT);
  pinMode(inB1,OUTPUT);
  
  pinMode(inA2,OUTPUT);
  pinMode(inB2,OUTPUT);

  pinMode(inA3,OUTPUT);
  pinMode(inB3,OUTPUT);

  pinMode(inA4,OUTPUT);
  pinMode(inB4,OUTPUT);

  pinMode(inA5,OUTPUT);
  pinMode(inB5,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
    if(Serial.read() == 0){
      //forward
    }
    if(Serial.read() == 1){
      //backward
    }
    if(Serial.read() == 2){
      //translate left
    }
    if(Serial.read() == 3){
      //translate right
    }
    if(Serial.read() == 4){
      //rotate clockwise
    }
    if(Serial.read() == 5){
      //rotate counterclockwise
    }
    if(Serial.read() == 6){
      //up
    }
    if(Serial.read() == 7){
      //down
    }
    if(Serial.read() == 8){
      //nuetral/motors off
    }
  }
  else{
    Serial.print("No serial communications detected");
  }
}

void motorForward(int speed, int enApin, int inApin, int inBpin){
  analogWrite(enApin, speed);
  digitalWrite(inApin, HIGH);
  digitalWrite(inBpin, LOW);
}

void motorReverse(int speed, int enApin, int inApin, int inBpin){
  analogWrite(enApin, speed);
  digitalWrite(inApin, LOW);
  digitalWrite(inBpin, HIGH);
}