#ifndef MOTORDC_H
#define MOTORDC_H
class MotorDC{
    public:
        MotorDC(int pinoA,int pinoB,int pinoPwn, int pinEncoder, int pinoEnable);
        ~MotorDC();

        void andar_para_frente();

        void andar_para_tras();

        void parar();

    private:
        int pinoA;
        int pinoB;
        int pinoPwn;
        int pinoEncoder;
        int direcao;
        long unsigned int contadorEncoder;
};
#endif