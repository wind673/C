#include <stdio.h>
unsigned char *ch = NULL;
void fun(unsigned char *p)
{
	ch = p;

}
int main()
{ 
	fun("Hello World!!!");		
	printf("%s",ch);
	 
return 0;
}

 
