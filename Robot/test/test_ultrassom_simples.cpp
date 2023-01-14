#include <Arduino.h>
#include <Wire.h>
#include<SensorUltrassom.h>

int trig =9;
int echo =8;
#define trigger 9
#define echo 8
SensorUltrassom sensorUltrassom(trigger, echo);//pin 9 
void setup(){
    Serial.begin(9600);
    
}
void moda(){
    valarray<int>lst1;
    lst1.push_back(sensorUltrassom.distancia());
    if( lst1.max_size() >=6){
        lst1.pop_front();
    }
    if (sensorUltrassom.distancia() < 2*(lst1.sum()/5)){
        Serial.println(sensorUltrassom.distancia());
    }
    
    /* exemplo demonstrado em python
    def filtro_moda(x:int,ultimos5:list):
    ultimos5.pop()
    ultimos5.insert(0,x)
    return 1 if sum(ultimos5)>=(len(ultimos5)//2) else 0
    
    # y(x[n]) = alguma coisa usando x e y(x[n-1])
    def filtro_media_recursivo(x,ultimoy):
    return ultimoy*.8+x*.23
    */
    
}
void loop(){
    Serial.println(sensorUltrassom.distancia()); // return curent distance in serial  
    delay(200);
    //Serial.println(sensorUltrassom.distancia());   
    
}
