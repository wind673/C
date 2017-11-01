#include <stdio.h> 
typedef struct 
{
 	 enum Test1
		{
			enum1_1,
			enum1_2,
		}; 
		int Test3;
		
}type_Enum;
 
		
int main()
{
	int result;
  type_Enum StructEnum; 
  
  result = enum1_2;
  
  printf("result = %d \n",result);
  
  while(1);
 	return 0;
}
