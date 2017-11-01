#include<stdio.h>

typedef union 
{
	float _float;
	unsigned int _u32;	
	unsigned char _u8[4];
}Union32;


int main()
{
	Union32 u32;
	u32._u32 = 255;
	
 	printf("_u8[0]:%d\n",u32._u8[0]);
	printf("_u8[1]:%d\n",u32._u8[1]);
	printf("_u8[2]:%d\n",u32._u8[2]);
	printf("_u8[3]:%d\n",u32._u8[3]);
	
	while(1);
	return 0;    									
} 











