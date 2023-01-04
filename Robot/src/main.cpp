//Programa : Controle 2 motores DC usando Ponte H L298N
//Autor : Renato QW
#include <Arduino.h>
#include <Wire.h>
//Definicoes pinos Arduino ligados a entrada da Ponte H
#define IN4 A8
#define IN3 A9
#define IN2 8
#define IN1 7
void setup()
{
//Define os pinos como saida
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
Serial.begin(3000);
}

void loop()
{
//Gira o Motor A no sentido horario
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);

delay(5000);
/*
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
delay(2000);
*/
}