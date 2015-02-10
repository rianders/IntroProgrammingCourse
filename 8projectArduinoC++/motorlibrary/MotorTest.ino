#include <SoftPWMServo.h>
#include "motor.h"

void setup()
{
  // Set up motor 1  
  pinMode(M1EN12, OUTPUT);
  digitalWrite(M1EN12, 1);
  pinMode(M1A1, OUTPUT);
  digitalWrite(M1A1, LOW);
  pinMode(M1A2, OUTPUT);
  digitalWrite(M1A2, LOW);

  // Set up motor 2
  pinMode(M1EN34, OUTPUT);
  digitalWrite(M1EN34, 1);
  pinMode(M1A3, OUTPUT);
  digitalWrite(M1A3, LOW);
  pinMode(M1A4, OUTPUT);
  digitalWrite(M1A4, LOW);
/*
  //Test Movement
  delay(2000);

  // Motor 1 on forward
  digitalWrite(M1A1, HIGH);
  digitalWrite(M1A2, LOW);
  delay(1000);

  // Motor 1 on backwards
  digitalWrite(M1A1, LOW);
  digitalWrite(M1A2, HIGH);
  delay(1000);
  // All motors off
  digitalWrite(M1A1, LOW);
  digitalWrite(M1A2, LOW);

  // Motor 2 on forward
  digitalWrite(M1A3, HIGH);
  digitalWrite(M1A4, LOW);
  delay(1000);

  // Motor 2 on backward
  digitalWrite(M1A3, LOW);
  digitalWrite(M1A4, HIGH);
  delay(1000);

  //all forward
  // Motor 1 on forward
  digitalWrite(M1A1, HIGH);
  digitalWrite(M1A2, LOW);


  // Motor 2 on forward
  digitalWrite(M1A3, HIGH);
  digitalWrite(M1A4, LOW);
  delay(1000);

  //all backwards
  // Motor 1 on backwards
  digitalWrite(M1A1, LOW);
  digitalWrite(M1A2, HIGH);

  // Motor 2 on backward
  digitalWrite(M1A3, LOW);
  digitalWrite(M1A4, HIGH);
  delay(1000);

  //test stopping
  // Motor 1 on backwards
  digitalWrite(M1A1, LOW);
  digitalWrite(M1A2, HIGH);
  delay(500);
  stop();
  // Motor 2 on backward
  digitalWrite(M1A3, LOW);
  digitalWrite(M1A4, HIGH);
  delay(500);
  stop();
*/
  delay(2000);
  goForward(255);
  delay(1000);

  goBackward(255);
  delay(1000);
  
  goLeft(255);
  delay(1000);
  
  goRight(255);
  delay(1000);
  

  stop();

}


void loop()
{



}




