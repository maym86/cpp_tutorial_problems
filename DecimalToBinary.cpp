#include "stdafx.h"
#include "DecimalToBinary.h"


string DecimalToBinary(unsigned int decimal)
{
	if ( decimal == 0 ) return "0";
    if ( decimal == 1 ) return "1";
	
	if(decimal % 2 == 0) 
		return DecimalToBinary(decimal/2) + "0";
	
	return DecimalToBinary(decimal/2) + "1";
}

int BinaryToDecimal(string binary)
{
	if(binary.length() == 1)
		return binary[0]-48;
	
	int decimal = (binary[0]-48) * pow(2, binary.length()-1);
	decimal += BinaryToDecimal(binary.substr(1, binary.length()));
	return decimal;	
}