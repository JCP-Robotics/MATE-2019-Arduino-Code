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
    r = Serial.read() - '0';
    // print out the value read from serial
    Serial.println(r);
  }
}

