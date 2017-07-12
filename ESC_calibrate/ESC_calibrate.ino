/*
  ESC Calibrate
ESC data pin attached to Digital Pin 10 on the arduino.
A potentiometer/a Joystick input attached to Analog Pin A0 on the Arduino.

Compile and upload the code.Then hold the joystick/potentiometer at its max position and connect the external power source to the ESC.
You will hear a few beeps then put the potentiometer/joystick in its lowest position.This will set the endpoints on the ESC.

  This example code is in the public domain.

  modified 20 March 2017
  by Hrithik Bansal
  www.hrithikbansal.com
 */


#include<Servo.h>           //Include The servo library for the functions used

Servo esc;                  //Declare the ESC as a Servo Object

void setup() 
{
esc.attach(9);           //Attach the ESC to Digital Pin 10
 Serial.begin(9600);      //Begin Reading/Open Serial Monitor
}

void loop() 
{   
  for (int i=0;i<180;i++){//Delay determines your resolution/smoothness and responsiveness of Motor to the movement of Potwntiometer/Joystick.
esc.write(i);
  delay(1000);
  Serial.println(i);
  }
   for (int i=180;i>0;i--){//Delay determines your resolution/smoothness and responsiveness of Motor to the movement of Potwntiometer/Joystick.
esc.write(i);
  delay(1000);
  Serial.println(i);
  }//The state of ESC will be the same as the state/position of Joystick
}

