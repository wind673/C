#include <stdio.h>
int main()
{ 

	int *p = NULL,*endp=NULL,*headp=NULL;
	int i,flag,lenth=0;
	char temp;
	headp = (int *)malloc(sizeof(int));//����ͷ��ַ
	*headp = 0;
	lenth = 0;flag = 0;
	
	while(temp!='K')
	{

		
		p = (int *)malloc(sizeof(int));//�������ݵ�ַ
		scanf("%d%c",p,&temp);//��ȡ���������
		if(temp != 'K')
		{
			lenth++;
		//	*p = temp - 48;
			printf("%d,%d  %d\n",*p,lenth,flag);
			
		}

		if(temp == 'K') 
		{
		//	endp = p;//��¼ĩ��ַ
			flag = 1;
		}
		
	}

//	rank(headp+1,lenth);
//	for(i = 1; i<lenth;i++)
//	cout<<*(p+i)<<endl;



system("pause");
return 0;
}
