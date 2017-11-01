#include<stdio.h>




int main()
{ 
	printf("十六进制\n");
 	printf("0xAA00|0xBB = 0x%X \n",0xAA00|0xBB);
	printf("0xAABB/0xff = 0x%X \n",0xAABB/0xff);
	printf("0xAABB%%0xff =0x%X \n",0xAABB%0xff);
	
	printf("\n\n十进制\n");
 	printf("1234 = %d \n",1234);
	printf("1234/100 = %d \n",1234/100);
	printf("1234%%100   = %d \n",1234%100);
	
	while(1);
	return 0;    									
} 











