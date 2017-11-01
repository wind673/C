#include <stdio.h>
#include <string.h>

int main()
{
	char s[32]="Golden Global View";
	
	memset(s,'G',6);
	printf("%s\n",s);
	
	getchar();
	
	return 0;
}
