#include <iostream>
using namespace std;

class TemperatureConverter{
public:
	TemperatureConverter(){};
	
	void ConvertFahrenheitToCelsius();
	void ConvertCelsiusToFahrenheit();
private:
	float FahrenheitToCelsius(float f);
	float CelsiusToFahrenheit(float c);
	

	float lower;
	float upper;
	float step;

};