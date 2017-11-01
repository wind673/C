#include <stdio.h>

int A(char x)
{
		
	return x*1000;
}

 
int main()
{
	int x;
	typedef unsigned int(Creatfun)(char);  
	Creatfun *p = A; 
	x = p(3);
	printf("p = %d \n",x);  
		
} 
