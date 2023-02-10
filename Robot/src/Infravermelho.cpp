#include<Infravermelho.h>


Infravermelho::Infravermelho(int pinoA0, bool pinoD0){
    this->pinoA0= pinoA0;
    this->pinoD0= pinoD0;
}

int Infravermelho::lerCor(){
    this->sensor = analogRead(this->pinoA0);
}