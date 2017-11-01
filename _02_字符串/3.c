#include <stdio.h> 
int main()
{ 
	unsigned int i; 
	
	for(i = 0;i<256;i++)
	{
		if(i%30 == 29) printf("\n");
		printf("%c ",i);
	}
 
while(1);
}

 
