#ifndef SENSOR_COR_H
class SensorCor{
    public:
        SensorCor(int S2, int S3, double OUT);
        ~SensorCor();
        void ler_cor(int S2, int S3, double OUT);
    private:
        int S2;int S3; double OUT;
        double vermelho,azul,verde;

};
#endif
