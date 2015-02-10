/*
*g++  ./1HelloWorld/helloCC.cc -o ./1HelloWorld/helloCC.out
*/

#include <iostream>
using namespace std;
#include <stdio.h>

int myVal = 100;

int main() {
int height;    
cout << "enter your height: ";
cin >> height;
cout << "My height: " << height*3 << endl;
cout << "Hello World\n";
cout << "Common c++ names: .cpp, .cc, .c++ " << endl;
cout << "My val = " << myVal << endl;
printf("My val: %d\n", myVal);    
 return 0;   
}