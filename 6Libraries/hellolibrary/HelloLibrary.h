/*
*
 * HelloLibrary Header file
 *
 */
#ifndef HelloLibrary_h
#define HelloLibrary_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#include "pins_arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#endif

void printHelloLibrary();
void startBlink(int duration);

#endif

