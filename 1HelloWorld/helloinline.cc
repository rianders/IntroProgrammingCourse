/*
* helloinline.cc
* Compile:
* gcc helloinline.cc -o helloinline.out
*/

#include <stdio.h>
/* Global values appear before main. */

#define PIN_TO_SERVO(p) ((p) - 2)

int foo; //foo is a global value

int main() {
    foo = 6; //assignments use the "=" to take the value on the right and assign it the variable on the left.
    printf("Hello World %d\n",foo); //print formated text with "printf"
    printf("Hello PIN_TO_SERVO(%d):  %d\n",foo, PIN_TO_SERVO(foo)); //print formated text with "printf"

    return 0; //return program completed properly.
}
