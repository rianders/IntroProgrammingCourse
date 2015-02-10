/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 #include "HelloLibrary.h"

void setup() {                
  // initialize the digital pin as an output.
  // Pin PIN_LED1 has an LED connected on most Arduino and compatible boards:
  pinMode(PIN_LED1, OUTPUT);     
}


void loop() {
  printHelloLibrary();
  startBlink(100);
}