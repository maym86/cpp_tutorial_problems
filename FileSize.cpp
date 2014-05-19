#include "stdafx.h"
#include "CountLines.h"

using namespace std;

int GetFileSizeBytes(char* fileName)
{
	ifstream infile;

	infile.open(fileName);
	if(!infile)
	{
		cout<<"File "<< fileName <<" does not exist";
		return 0;
	}

	long begin, end;
    
	//Get the position in the file
    begin = infile.tellg();
    infile.seekg (0, ios::end);
    end = infile.tellg();
    
    infile.close();
 
	return end-begin;
}
