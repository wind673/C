#include<stdio.h>



#define diff	 ((int)(0.1*1000))
#define gap	 	 ((int)(0.3*1000))

#define VALUE_0	 1.1
#define VALUE_1  3.6
#define VALUE_2	 5.5
#define VALUE_3	 7.4
#define VALUE_4	 10.1 

int main()
{
	int value[5] = {0};//mw
	int comb = 0;
	int sum_result[32] = {0};
	int result[32] = {0};
	int bit = 0;
	int cnt = 0;
	int i,j,k;
	int sure = 1;
	
	for(value[0] = 1000;	     value[0] < 11000;value[0] +=diff)
	for(value[1] = value[0]+diff;value[1] < 11000;value[1] +=diff)
	for(value[2] = value[1]+diff;value[2] < 11000;value[2] +=diff)
	for(value[3] = value[2]+diff;value[3] < 11000;value[3] +=diff)
	for(value[4] = value[3]+diff;value[4] < 11000;value[4] +=diff) 
	{ 	
		for(comb = 0;comb < 32;comb++)
		{ 
			sum_result[comb] = 0;
			for(bit = 0;bit < 5;bit ++)
			{ 
				if(comb & (0x01 <<bit)) 
				{ 
					sum_result[comb] += value[bit]; 
				} 	
			}     	
		} 			
		
		
//		if(value[0] == (VALUE_0*1000) - ((int)(VALUE_1*1000))%diff) 	 
		if(value[1] == (VALUE_1*1000) - ((int)(VALUE_1*1000))%diff) 	 
		if(value[2] == (VALUE_2*1000) - ((int)(VALUE_2*1000))%diff) 	 
		if(value[3] == (VALUE_3*1000) - ((int)(VALUE_3*1000))%diff) 	 
//		if(value[4] == (VALUE_4*1000) - ((int)(VALUE_4*1000))%diff) 
		if(value[0] <= 1100) 	 
		{
			sure = 0;
			for(i = 0;i < 32;i++)
			for(j = 0;j < 32;j++)
			{
				if(i!=j)
				{ 	 
					if(abs(sum_result[i]-sum_result[j]) < gap) sure = 1; 
				}
			}	
			
			if(sure == 0)
			{
				for(i = 0;i < 5;i++)
					printf("%5.2f\t",value[i]/1000.0f);
					
				printf("\n");   
			}  
		}
		 
	}
	
 	printf("\nFinish!!!\n");
	 
	while(1);
	return 0;    									
} 











