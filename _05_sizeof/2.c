#include <stdio.h>

int main()
{
	char p[10] = "12345"; 
	char *sp = p;
	int s[10] = {1,2,3,4,5,6,7}; 
	printf("12345\n\n");   
			
	printf("sizeof(p) %d\n",sizeof(p));   
	printf("sizeof(sp) %d\n",sizeof(sp)); 
	printf("sizeof(s) %d\n",sizeof(s)); 
	
	printf("\n--------------------------- \n",sizeof(s)); 
	
	printf("strlen(p) %d\n",strlen(p));  
	printf("strlen(sp) %d\n",strlen(sp));  
	printf("strlen(s) %d\n",strlen(s));  
								
	while(1);	
	return 0;	
}





