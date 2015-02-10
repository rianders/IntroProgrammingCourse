
/*
*
 * Motor Library Implementation file
 *
 */
#include <SoftPWMServo.h>
#include "motor.h"

void goForward(int speed)
{
  //set up code for go forward
  SoftPWMServoPWMWrite(M1EN12, 0);
  SoftPWMServoPWMWrite(M1EN34, 0);
  delay(20);
  digitalWrite(M1A1, 1);
  digitalWrite(M1A2, 0);
  digitalWrite(M1A3, 1);
  digitalWrite(M1A4, 0);

  SoftPWMServoPWMWrite(M1EN12, speed);
  SoftPWMServoPWMWrite(M1EN34, speed);

}

void goBackward(int speed)
{
  
  SoftPWMServoPWMWrite(M1EN12, 0);
  SoftPWMServoPWMWrite(M1EN34, 0);
  delay(20);
  digitalWrite(M1A1, 0);
  digitalWrite(M1A2, 1);
  digitalWrite(M1A3, 0);
  digitalWrite(M1A4, 1);

  SoftPWMServoPWMWrite(M1EN12, speed);
  SoftPWMServoPWMWrite(M1EN34, speed);

}

void goLeft(int speed)
{

    //set up code for go forward
  SoftPWMServoPWMWrite(M1EN12, 0);
  SoftPWMServoPWMWrite(M1EN34, 0);
  delay(20);
  digitalWrite(M1A1, 0);
  digitalWrite(M1A2, 1);
  digitalWrite(M1A3, 1);
  digitalWrite(M1A4, 0);

  SoftPWMServoPWMWrite(M1EN12, speed);
  SoftPWMServoPWMWrite(M1EN34, speed);

  
  
}

void goRight(int speed)
{
  //set up code for go forward
  SoftPWMServoPWMWrite(M1EN12, 0);
  SoftPWMServoPWMWrite(M1EN34, 0);
  delay(20);
  digitalWrite(M1A1, 1);
  digitalWrite(M1A2, 0);
  digitalWrite(M1A3, 0);
  digitalWrite(M1A4, 1);

  SoftPWMServoPWMWrite(M1EN12, speed);
  SoftPWMServoPWMWrite(M1EN34, speed);

}
void stop()
{

  // All motors off
  digitalWrite(M1A1, LOW);
  digitalWrite(M1A2, LOW);
  digitalWrite(M1A3, LOW);
  digitalWrite(M1A4, LOW);

}

