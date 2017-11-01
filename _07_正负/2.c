#include <stdio.h>

int main()
{
 	unsigned int num1,num2,num3;
 	num1 = 10;
 	num2 = 60;
 	num3 = 10 - 60;
 	printf("10 - 60\n\n\n");  
	printf("10-60 = %d\n",10-60);  
	printf("num1 - num2 = %d\n\n",num1 - num2);  
	
	printf("(unsigned int)(10-60) = %d\n",(unsigned int)(10-60));  
	printf("(unsigned int)(num1 - num2) = %d\n",(unsigned int)(num1 - num2)); 
	printf("(unsigned int)(num3) = %d\n",(unsigned int)(num3)); 
	
	
	if(num3 > 0) printf("num3 > 0\n"); 
		else printf("num3 < 0\n");
		
	if(10-60 > 0) printf("10-60 > 0\n"); 
	    else printf("10-60 < 0\n");  
	 
	if((unsigned int)(10-60)>0) printf("(unsigned int)(10-60)>0\n"); 
		else printf("(unsigned int)(10-60)<0\n");
		
	if((unsigned int)(num1 - num2)>0) printf("(unsigned int)(num1 - num2)>0\n"); 
		else printf("(unsigned int)(num1 - num2)<0\n");	 	 
		
	while(1);
	return 0;
}
