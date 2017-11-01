#include <stdio.h>


int main()
{
	char _char1,_char2,_char3;
	int _int1,_int2,_int3;
	unsigned char _uchar1,_uchar2,_uchar3; 
	unsigned *p = &_char1;
	
	printf("p = %d\n",p); 
	printf("_char = %d\n",&_char1); 
	printf("_char = %d\n",&_char2);
	printf("_char = %d\n",&_char3);
	printf("_int = %d\n",&_int1);
	printf("_int = %d\n",&_int2);
	printf("_int = %d\n",&_int3);
	printf("_uchar = %d\n",&_uchar1);
	printf("_uchar = %d\n",&_uchar2);
	printf("_uchar = %d\n",&_uchar3);
		
} 
