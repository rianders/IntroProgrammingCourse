
#include <math.h>
#include "hellostruct.h"
/*
#define MORNING 0
#define AFTERNOON 1
#define EVENING 2
#define NIGHT 3
*/
//enum TOD {MORNING, AFTERNOON, EVENING, NIGHT};
//enum TOD timeofday;


position PosA;
position PosB;

void setup()
{
  Serial.begin(9600);
  PosA.xx = 0;
  
}

void loop()
{
  Serial.print("PosA.xx: ");
  Serial.print(PosA.xx++);
  Serial.print(" PosA.yy: ");
  Serial.print(PosA.yy--);
  Serial.print(" Dist: ");
  Serial.println(sqrt( pow((PosB.xx - PosA.xx), 2) + pow((PosB.yy - PosA.yy), 2))  );

  delay(250);
}