#include <Arduino.h>
#include <Wire.h>
#include<HCSR04.h>

const int pinoTrig = 10;
const int pinoEcho =9;
long duration;
int distance;
void setup() {
    pinMode(pinoTrig, OUTPUT);
    pinMode(pinoEcho, INPUT);
    Serial.begin(9600);
    HCSR04 sensor(10,9);
  // put your setup code here, to run once:
}

HCSR04 sensor(10,9);
void loop() {
    
    Serial.print(sensor.dist());
  // put your main code here, to run repeatedly:
  
}