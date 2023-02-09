#include<Arduino.h>
#include<Wire.h>
#include<SensorCor.h>

#include<MotorDC.h>

#include<Move.h>

#define s0  50
#define s1  51
#define s2  53
#define s3  52
#define IN1 7
#define IN2 6
#define IN3 8
#define IN4 9
#define EN_dir 5
#define EN_esq 10
#define out  A0
int velocidade =200;
int * pont_velocidade = &velocidade;
void setup(){
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    
}
MotorDC motor_esquerda(IN1,IN2, EN_esq);
MotorDC motor_direita(IN3,IN4, EN_dir);

void loop(){

   Move::andar_frente(motor_direita, motor_esquerda, velocidade);
   delay(2000);
   Move::parar(motor_direita, motor_esquerda);
      delay(2000);
   Move::andar_tras(motor_direita, motor_esquerda, velocidade);
      delay(2000);
   Move::parar(motor_direita, motor_esquerda);
    delay(2000);
     
}