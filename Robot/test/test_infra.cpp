#include<Arduino.h>
#include<Wire.h>
#include<Infravermelho.h>

#define pinoA0 A0
#define pinoD0 8
Infravermelho infra(pinoA0, pinoD0);

void setup(){
    pinMode(pinoA0, INPUT);
    pinMode(pinoD0, INPUT);
    Serial.begin(9600);
}

void loop(){
    infra.lerCor();
}