#include<stdio.h>

int main()
{
 	unsigned int temp = 0,AD9851_Data = 0xaa;
	unsigned char LByte,word = 0x0f;
	
	LByte = (AD9851_Data & 0x00ff); //¼ÇÂ¼µÍ8Î»
	temp = ((unsigned int)word << 8)|LByte; 
	AD9851_Data = temp;
 	
 	printf("0x%x",AD9851_Data);
}
