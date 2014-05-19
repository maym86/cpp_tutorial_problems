// CppTutorialProblems.cpp : Defines the entry point for the console application.
// Michael May - Soulutions to the problems here http://www.cprogramming.com/challenge.html
//

#include "stdafx.h"
#include "TemperatureConverter.h"
#include "CountLines.h"
#include "FileSize.h"
#include "PermuteString.h"
#include "LinkedList.h"
int _tmain(int argc, _TCHAR* argv[])
{

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

