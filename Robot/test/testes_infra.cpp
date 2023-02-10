
#include<Arduino.h>
#include<Wire.h>

const int pinIRd = 8;
#define pinIRa A0
const int pinLED = 9;
int IRvalueA ;
int IRvalueD = 0;

void setup()
{
  
  pinMode(pinIRd,INPUT);
  pinMode(pinIRa,INPUT);
  pinMode(pinLED,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  
  IRvalueA = analogRead(pinIRa);
  IRvalueD = digitalRead(pinIRd);
  
  Serial.print("Analog Reading=");
  Serial.print(IRvalueA);
  Serial.print("\t Digital Reading=");
  Serial.println(IRvalueD);
  
}


