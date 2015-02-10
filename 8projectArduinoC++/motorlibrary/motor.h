
/*
*
 * Motor Library  Header file
 *
 */
#ifndef motor_h
#define motor_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#include "pins_arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#endif


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


void goForward(int speed);
void goBackward(int speed);
void goLeft(int speed);
void goRight(int speed);
void stop();

#endif