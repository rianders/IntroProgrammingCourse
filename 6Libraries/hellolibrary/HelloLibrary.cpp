/*
*
 * HelloLibrary Implementation file
 *
 */
#include "HelloLibrary.h"


void printHelloLibrary() 
{
  Serial.println("Hellow Librar"); 
}

void startBlink(int duration)
{
  digitalWrite(PIN_LED1, HIGH);   // set the LED on
  delay(duration);              // wait for a second
  digitalWrite(PIN_LED1, LOW);    // set the LED off
  delay(duration);              // wait for a second
}


