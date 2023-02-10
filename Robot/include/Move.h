#ifndef MOVE_H
#define MOVE_H
#include <MotorDC.h>
#include <Arduino.h>
#include <Wire.h>

class Move{
    public:
        Move();

        ~Move();

        static void  andar_frente(MotorDC motor_esquerda, MotorDC motor_direita, int velocidade);
        static void  andar_tras(MotorDC motor_esquerda, MotorDC motor_direita, int velocidade);
        static void  parar(MotorDC motor_esquerda, MotorDC motor_direita);
};


#endif