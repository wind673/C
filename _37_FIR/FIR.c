#include <stdio.h>
#include "StrToFiles.c"

int Matlab_Data(float *num,unsigned num_N)
{
	char Str[1000] = {0};
	char temp[100] = {0}; 
	int i = 0;
	
	for(i = 0;i < num_N;i ++)
	{
		sprintf(temp,"%f\t",num[i]);	
		strcat(Str,temp);
	}
	StrToFiles("Data.txt",Str);
}


int main()
{
	float result[10] = {1,2,3};
	
	Matlab_Data(result,10);
	 
	
	return 0;	
}

 


