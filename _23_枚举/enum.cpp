#include <stdio.h>
#include <stdlib.h>

enum  A
{
	 Element1 = 1,
	 Element2 = 1,
	 Element3 = 1,
	 Element4,
	 Element5,
	 Element6,
	 Element7,
	
}a,b,c;


int main()
{
	a = Element7;
	b = a;
	printf ("Element1 = %d \n",Element1);
	printf ("Element2 = %d \n",Element2);
	printf ("Element3 = %d \n",Element3);
	printf ("Element4 = %d \n",Element4);
	printf ("Element5 = %d \n",Element5);
	printf ("Element7 = %d \n",b);
	printf ("Element7 = %d \n",a);
	
	system("pause");
}

