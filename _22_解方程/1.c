#include <stdio.h>

#define N_MAX 10000
#define M_MAX 10000

int main()
{ 
	int m,n;
	float result_m = 0,result_n = 0;
	
	for( m = 0; m < M_MAX ; m ++ ) 
	for( n = 0; n < N_MAX ; n ++ ) 
	{	
		if( (n + m) == 10 )         
		if( m * ( m - n ) == 1 ) 
		result_m = m,result_n = n;
	}
	
	printf("m = %f   n = %f   \n",result_m,result_n);
	system("pause"); 
	return 0;
}






