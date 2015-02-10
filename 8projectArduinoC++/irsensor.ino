#define IR_PIN 3

void setup() 
{
  pinMode(PIN_LED1, OUTPUT);  
  pinMode(IR_PIN, INPUT);   
}


void loop()
{
  int val = digitalRead(IR_PIN); //Read IR sensor store val
  digitalWrite(PIN_LED1, !val);   
}
