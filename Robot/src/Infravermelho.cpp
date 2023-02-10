#include<Infravermelho.h>


Infravermelho::Infravermelho(int pinoA0){
    this->pinoA0 = pinoA0;
}

int Infravermelho::lerCor(){
    this->sensor = analogRead(this->pinoA0);
    return this->sensor;
}