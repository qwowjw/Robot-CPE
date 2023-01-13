#include <Arduino.h>
#include <Wire.h>
#include<SensorUltrassom.h>

int trig =9;
int echo =8;
#define trigger 9
#define echo 8
SensorUltrassom sensorUltrassom(trigger, echo);//pin 9 
void setup(){
    Serial.begin(9600);
    
}
void loop(){
    Serial.println(sensorUltrassom.distancia()); // return curent distance in serial  
    delay(200);
    //Serial.println(sensorUltrassom.distancia());   
    
}