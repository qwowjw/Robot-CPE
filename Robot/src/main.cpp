
#include<Arduino.h>
#include<Wire.h>
#define A0  8
#define D0 9

void setup()
{
  
  pinMode(A0,INPUT);
  pinMode(D0,INPUT);
  Serial.begin(9600);

}
  int analog;
  bool digital;
void loop()
{
  analog =analogRead(A0);
  digital =digitalRead(D0);
  Serial.print("Pino analógico: "+ analog);
  Serial.println("Pino digital: "+digital);


}


