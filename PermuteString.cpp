#include "stdafx.h"
#include "PermuteString.h"

void SwitchLetters(string &str, int pos1, int pos2) 
{
	char temp = str[pos1];
	str[pos1] = str[pos2];
	str[pos2] = temp;
}

//Recursive function 
void PermuteString(string str, int pos)
{
	//if last letter
	if(pos == str.length() - 1)
	{
		cout << str << endl;
	}

	for(int i = pos; i < str.length(); i++ )
	{
		//For length of string 
		SwitchLetters(str, pos, i);
		PermuteString(str, pos + 1);
	}
}