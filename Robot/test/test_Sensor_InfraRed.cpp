#include<Arduino.h>
//#include<Wire.h>
//#include<SensorCor.h>
int pinoLed = 12; //PINO DIGITAL UTILIZADO PELO LED  
int pinoSensor = 7; //PINO DIGITAL UTILIZADO PELO SENSOR
   
void setup(){  
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA  
  Serial.begin(9600); //DEFINE O PINO COMO SAÍDA
 
  digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO
}  
   
void loop(){
      Serial1.print("aaaaaaaaaaaa");
      Serial.println("funciona pfvrrrr");

  if (digitalRead(pinoSensor) == LOW){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
        digitalWrite(pinoLed, HIGH); //ACENDE O LED
  }else{//SENÃO, FAZ
        digitalWrite(pinoLed, LOW); //apaga O LED
  }    
}