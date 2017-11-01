#include<stdio.h>
int main()
{
   int m=1,N,i=2;
   int a[9999]={0,1,1};
    scanf("%d",&N);
    while(i<=N)
    {
     a[i]=a[i-1]+a[i-2];
     i++;
    }
    printf("%d\n",a[i-1]);
    return 0;
    
}
