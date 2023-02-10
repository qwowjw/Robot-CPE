#include<Arduino.h>
#include<Wire.h>
#include<Infravermelho.h>

#define pinoA0 A0
Infravermelho infra(pinoA0);

void setup(){
    pinMode(pinoA0, INPUT);
    Serial.begin(9600);
}

void loop(){
    Serial.println(infra.lerCor());
}