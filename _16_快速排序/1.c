#include <stdio.h>
//快速排序算法
static void quick_sort(float num[], int l, int r)  
{  
    int i, j;
	float x;  
    if (l < r)  
    {  
        i = l;  
        j = r;  
        x = num[i];  
        while (i < j)  
        {  
            while(i < j && num[j] > x)   
                j--; /* 从右向左找第一个小于x的数 */  
            if(i < j)   
                num[i++] = num[j];  
      
  
            while(i < j && num[i] < x)   
                i++; /* 从左向右找第一个大于x的数 */  
            if(i < j)   
                num[j--] = num[i];  
  
        }  
        num[i] = x;  
        quick_sort(num, l, i-1); /* 递归调用 */  
        quick_sort(num, i+1, r);  
    }  
} 



int main()
{
	int i = 0;
	float num[10] = {3.5,6.6,1.2,0.5,12.3};
	quick_sort(num,0,9);
	
	for(i = 0;i < 10;i ++)
		printf("%0.2f ",num[i]);
	
	return 0;
}
