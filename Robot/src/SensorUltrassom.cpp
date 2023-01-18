#include<SensorUltrassom.h>
#include<math.h>
////////////////////////////////////consttruct/destruct
void SensorUltrassom::init(int trigger, int echo)
{
	this->trigger = trigger;
	this->echo = echo;
	pinMode(this->trigger, OUTPUT);
	digitalWrite(this->trigger, LOW);
	float ultimas_distancias[3]={0,0,0};
}
SensorUltrassom::SensorUltrassom(int trigger, int echo) { this->init(trigger, echo); }

SensorUltrassom::~SensorUltrassom()
{
	~this->trigger;
	~this->echo;
}

/*
Como ele funciona? Bom, ele tem esse pino Trigger que irá ligar o sensor, eai no inicio ele está em 0, depois vai para 1 10 microsegundos depois,
ele irá cair para 0 e então no próprio sensor,ele conta 8 clocks, e então a gente usa a função pulseIn, para podemrmos medir o tempo que algum sinal 
ficou em um valor, seja ele 1 ou 0, no caso, para o echo, queremos medir quanto tempo ele ficou em 1, que com esse tempo, nós conseguimos fazer um cálculo
para dar a distância em centimetros.

	CONFIGURAÇÂO PINOS:
	o trigger pode ser tanto em um digital quanto em um analógico,
	mas acredito que o pino echo precisa ser analógico.ou né pwm
*/

/*
float SensorUltrassom::distancia_filtro(){
	digitalWrite(this->trigger, HIGH);
	delayMicroseconds(10);
	digitalWrite(this->trigger, LOW);
	float ultimas_distancias[3];
	int cont =0;
	while(cont<=3){
		float tempoEcho = pulseIn(this->echo, HIGH);
		this->dist = tempoEcho/58.8235;
		ultimas_distancias[cont]= this->dist;
		cont++;
	}
	cont =0;	
	float media = (ultimas_distancias[0]+ultimas_distancias[1]+ultimas_distancias[2])/3;
	float valor1 =ultimas_distancias[0];
	float valor2 =ultimas_distancias[1];
	float valor3 =ultimas_distancias[2];
	float dp= (pow((valor1-media),2) + pow((valor2-media),2) + pow((valor3-media),2))/3;
	Serial.println(dp);
	dp = pow(dp, 0.5);
	//Serial.println(dp);
	if (dp<=10){
		this->dist = dp;
		return this->dist;	
	}
	ultimas_distancias[0]=0;ultimas_distancias[0]=0;ultimas_distancias[0]=0;
	delay(100);
}
*/
float SensorUltrassom::distancia(){
	digitalWrite(this->trigger, LOW);
	delayMicroseconds(2);
	digitalWrite(this->trigger, HIGH);
	delayMicroseconds(10);
	digitalWrite(this->trigger, LOW);
	float tempoEcho = pulseIn(this->echo, HIGH);
	this->dist = tempoEcho/58.8235;
	return this->dist;
}