#ifndef INFRAVERMELHO_H
#define INFRAVERMELHO_H
#include<Arduino.h>
#include<Wire.h>
class Infravermelho{
    public:
        Infravermelho(int pinoA0);
        int lerCor();
        int sensor;
    private:
        int pinoA0;
      
};
#endif
