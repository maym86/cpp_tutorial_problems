#include "stdafx.h"
#include "CountLines.h"

using namespace std;

int CountFileLines(char* fileName)
{
	ifstream infile;

	infile.open(fileName);
	if(!infile)
	{
		cout<<"File "<< fileName <<" does not exist";
		return 0;
	}

	int count = 0;
	while(!infile.eof())
	{	
		getline(infile, string());
		count++;
	}

	return count;
}


