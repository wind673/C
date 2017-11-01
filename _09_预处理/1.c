#include <stdio.h>
#define ADD(x,y) (x+y) 
#define CONCAT(X,Y) prin##X##Y
 
 
int main()
{  
	printf("ADD(X,Y) = %d \n",ADD(3,5)); 
	CONCAT(t,f)("%s","CONCAT(prin,tf)\n");
	printf("\n");
}
 
