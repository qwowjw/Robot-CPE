#include <Arduino.h>
#include <Wire.h>
#include<HCSR04.h>

const int pinoTrig = 10;
const int pinoEcho =9;
/*
Estamos declarando esses pinos apenas para não precisarmos ficar lembrando qual pino está conectada
em qual porta do arduino. 

*/

/*
  porque aonde realmente configuramos a porta é com o método pinMode()
  Possuímos o método digitalWrite() para setarmos como low ou high as portas digitais
  e possuímos o método analogWrite() para colocarmos valores das portas analógicas ou pwms.
*/
long duration;
int distance;
void setup() {
    pinMode(pinoTrig, OUTPUT);
    pinMode(pinoEcho, INPUT);
    Serial.begin(9600);
    delay(400);
    HCSR04 sensor(10,9);
    
  // put your setup code here, to run once:
}

HCSR04 sensor(10,9);
void loop() {
    
    Serial.print(sensor.dist());
  // put your main code here, to run repeatedly:
  
}