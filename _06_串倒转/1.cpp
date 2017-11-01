#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "01234567";
	printf("str = %s \n\n\n",str);
	char *reverse = strrev(str);
	printf("str = %s \n",str);
	printf("reverse = %s \n",reverse);
	
	
}

 
