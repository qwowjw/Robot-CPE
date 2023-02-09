#include <Move.h>

using namespace std;
void Move::andar_frente(MotorDC motor_esquerda, MotorDC motor_direita, int velocidade){
    velocidade = velocidade - 10;
    motor_esquerda.andar_para_frente(velocidade);
    motor_direita.andar_para_frente(velocidade);

}

void Move::andar_tras(MotorDC motor_esquerda, MotorDC motor_direita, int velocidade){
    motor_direita.andar_para_tras(velocidade);
    motor_esquerda.andar_para_tras(velocidade);

}
void Move::parar(MotorDC motor_esquerda, MotorDC motor_direita){
    motor_direita.parar();
    motor_esquerda.parar();

}