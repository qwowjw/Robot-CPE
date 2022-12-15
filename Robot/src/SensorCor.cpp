#include<SensorCor.h>
#include<Arduino.h>
SensorCor::SensorCor(int S2, int S3, double OUT){
    /* Explicação PINOS:
        pinos S2, S3 são pinos de seleção para ligar a matriz 
        correspondente de cada cor. pino OUT é a frequência que recebemos com aquela matriz
        que escolhemos.
    
    
    */
    this ->S2 = S2;
    this ->S3 = S3;
    this ->OUT = OUT;
}

void SensorCor::ler_cor(int S2, int S3, double OUT){
        /*
        Setar um tempo para cada um deles, eai assim eu adicionar em uma lista talvez, e depois comparar
        para ver qual é a maior frequencia.
        */
       if(S2 && S3 ==0){
        /* aqui estamos ligando o painel apenas para ler o vermelho. */
            while(true){
                analogRead(OUT);
            }
       }
       else if(S2 ==0 && S3 ==1){
        /* aqui estamos lendo azul.*/

       }
       else if(S2==1 && S3==1){
        /* aqui estamos lendo o verde.*/

       }
       
       
    }
