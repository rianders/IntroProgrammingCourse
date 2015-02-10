/*
*
 * struct Header file
 *
 */
#ifndef hellostruct_h
#define hellostruct_h


#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#include "pins_arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#endif

struct position {
	int xx;
	int yy;
};

#endif
