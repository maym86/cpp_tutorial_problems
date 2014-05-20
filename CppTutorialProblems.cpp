// CppTutorialProblems.cpp : Defines the entry point for the console application.
// Michael May - Soulutions to the problems here http://www.cprogramming.com/challenge.html
//

#include "stdafx.h"
#include "TemperatureConverter.h"
#include "CountLines.h"
#include "FileSize.h"
#include "PermuteString.h"
#include "LinkedList.h"

#include "DecimalToBinary.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cout << DecimalToBinary(120) << endl;

	cout << BinaryToDecimal(DecimalToBinary(120)) << endl;

	LinkedList list;
	for(int i = 0; i< 10; i++)
		list.Push(i);
	
	list.Pop(1);
	list.Pop(9);
	
	list.Print();
	list.PrintReversed();

	list.InPlaceReversal();
	list.Print();

	
	PermuteString(string("cat"),0);

	cout << GetFileSizeBytes("ReadMe.txt") << endl;
	cout << CountFileLines("ReadMe.txt") << endl;
	
	TemperatureConverter t;
	t.ConvertFahrenheitToCelsius();
	t.ConvertCelsiusToFahrenheit();

	return 0;
}

