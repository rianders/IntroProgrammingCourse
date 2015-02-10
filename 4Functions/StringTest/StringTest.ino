
char heartbuffer[100] = "helloworld\0";


void setup() {
  Serial.begin(9600); 
  Serial.println("start");
}

void printArray(char myString[], int max)
{
  for (int nn = 0; nn < max; nn++)
  {
    Serial.print(myString[nn]);
  }
}

void printEachChar(char myString[])
{
  int nn = 0;
  while (myString[nn] != '\0')
  {
        Serial.print(myString[nn]);
        nn++;
  } 
}

void loop() 
{
  Serial.print("init: hello: ");
  Serial.println(heartbuffer);
  strncpy(heartbuffer, "123456789a\0bcdefghijk", 100);
  printEachChar(heartbuffer);
  Serial.println();
  Serial.print("buffer: ");
  Serial.println(heartbuffer);
  printArray(heartbuffer, 100);
  Serial.println();
  Serial.print("update: " );
  strncpy(heartbuffer, "hello", 100);
  Serial.println(heartbuffer);
  printArray(heartbuffer, 100);
  Serial.println();
  delay(333);
}







