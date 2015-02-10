/*
* IR Blink
*/
#define IRLED 5

void setup() {                
  // initialize the digital pin as an output.
  // Pin PIN_LED1 has an LED connected on most Arduino and compatible boards:
  pinMode(IRLED, OUTPUT);     
}

void loop() {
  digitalWrite(IRLED, HIGH);   // set the LED on
  delay(100);              // wait for a second
  digitalWrite(IRLED, LOW);    // set the LED off
  delay(100);              // wait for a second
}