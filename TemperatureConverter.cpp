// Based on the problem http://www.cprogramming.com/challenges/celsius_converter_table.html with the limits removed so it's more useful (I know how to check bounds)
#include "stdafx.h"
#include "TemperatureConverter.h"


void TemperatureConverter::ConvertFahrenheitToCelsius()
{
	cout << "Fahrenheit to Celsius"  << endl;
	cout << "Please give in a lower limit: " ;
	cin >> lower;
	cout << "Please give in a upper limit: " ;
	cin >> upper;
	cout << "Please give in a step: ";
	cin >> step;
	
	cout << "Celsius		Fahrenheit" << endl;
	cout << "-------		----------" << endl;
	for(float c = lower; c <= upper; c+=step)
	{	
		cout << c << "		" << CelsiusToFahrenheit(c) << endl;
	}
	cout << endl << endl;
}

void TemperatureConverter::ConvertCelsiusToFahrenheit()
{
	cout << "Celsius to Fahrenheit"  << endl;
	cout << "Please give in a lower limit, limit: " ;
	cin >> lower;
	cout << "Please give in a upper limit: " ;
	cin >> upper;
	cout << "Please give in a step: ";
	cin >> step;
	
	cout << "Fahrenheit		Celsius" << endl;
	cout << "----------		-------" << endl;
	for(float f = lower; f <= upper; f+=step)
	{	
		cout << f << "		" << FahrenheitToCelsius(f) << endl;
	}
	cout << endl << endl;
}

float TemperatureConverter::FahrenheitToCelsius(float f)
{
	return (f  -  32)  *  5/9;
}


float TemperatureConverter::CelsiusToFahrenheit(float c)
{
	return c  *  9/5 + 32;
}


