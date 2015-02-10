#include <SoftPWMServo.h> 

#define M1EN12  7
#define M1EN34  8

#define M1A1    2
#define M1A2    0
#define M1A3    1
#define M1A4    3

#define M2EN12  9
#define M2EN34  10

#define M2A1    5
#define M2A2    6
#define M2A3    11
#define M2A4    4

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

  //Speed test 
  SoftPWMServoPWMWrite(M1EN12, 0);
  SoftPWMServoPWMWrite(M1EN34, 0);
  delay(20);
  digitalWrite(M1A1, 1);
  digitalWrite(M1A2, 0);
  digitalWrite(M1A3, 1);
  digitalWrite(M1A4, 0);

  for (int ii = 0; ii < 256; ii++)
  {
    SoftPWMServoPWMWrite(M1EN12, ii);
    SoftPWMServoPWMWrite(M1EN34, ii);
    delay(10);  
  }

  for (int ii = 255; ii >= 0; ii--)
  {
    SoftPWMServoPWMWrite(M1EN12, ii);
    SoftPWMServoPWMWrite(M1EN34, ii);
    delay(10);  
  }


  // All motors off
  digitalWrite(M1A1, LOW);
  digitalWrite(M1A2, LOW);
  digitalWrite(M1A3, LOW);
  digitalWrite(M1A4, LOW);
}


void loop()
{

}



