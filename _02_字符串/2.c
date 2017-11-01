#include <stdio.h> 
int main()
{ 
	unsigned char ch[20] = "Œ“ « 123"; 
	int i = 0;
	printf("for     ",ch[0]);
	for(i=0;i<20;i++)  printf("%d ",ch[i]);
	printf("\n--------------------------------\n\n",ch[0]);
	
	
	printf("ch[0] = %c \n",ch[0]);
	printf("*ch =  %s \n",ch);
	printf("\n\n\n OK!!!"); 
while(1);
}

 
