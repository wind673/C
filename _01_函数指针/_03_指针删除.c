#include<stdio.h>
int main()
{
 
	int *p = (int*)malloc(sizeof(int));  
	*p = 1234;  
										
	printf("p_a = %d                 ",p);
	printf("a = %d \n",*p);            
	free(p);  							
	printf("p_a = %d                 ",p);
	printf("a = %d \n\n\n",*p); 
	p =NULL;
	
	p = (int*)malloc(sizeof(int)); 
	*p = 666;
	printf("p_a = %d                 ",p);
	printf("a = %d \n",*p);            
	free(p);  							
	printf("p_a = %d                 ",p);
	printf("a = %d \n",*p);  
	 
	 
	      									
} 











