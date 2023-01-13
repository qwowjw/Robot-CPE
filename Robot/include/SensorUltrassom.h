#include <Arduino.h>

class SensorUltrassom
{
public:
	SensorUltrassom(int trigger, int echo);			//initialisation class SensorUltrassom (trig pin , echo pin)
	~SensorUltrassom();							//destructor
	float distancia();
	float distancia_filtro();

private:
	void init(int out, int echo); //for constructor
	int trigger;							   //out pin
	int echo;		
	float dist;					   //echo pin list
};
