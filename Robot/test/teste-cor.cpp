#include<Arduino.h>
#include<Wire.h>
#include<SensorCor.h>
#define s0  50
#define s1  51
#define s2  53
#define s3  52
#define out  A0

void setup(){
    pinMode(s0, OUTPUT);
    pinMode(s1, OUTPUT);
    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    pinMode(out, INPUT);
    
    Serial.begin(9600);
    digitalWrite(s0, HIGH);
    digitalWrite(s1, LOW);
}
SensorCor sensorCor(s2,s3,out, s1,s0);
void loop(){
    sensorCor.ler_cor();
}