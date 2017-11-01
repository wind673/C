#include <stdio.h>
#include <malloc.h>

typedef struct __Student 
{	
	char *name;
	unsigned long int ID;
	unsigned char grade[4];		
	unsigned char average;
	struct __Student *next;
		
}Type_Student;

Type_Student student_Head = {NULL,0,{0},0,NULL};
Type_Student *student_Temp = &student_Head;
unsigned long int average_grade[4] = {0};

 
void StudentInfo_Input(void)
{	 
	
	while(1)
	{ 
		Type_Student *p = (Type_Student*)malloc(sizeof(Type_Student)); 
		p ->next = NULL;	
		student_Temp ->next = p;  	
		student_Temp = p; 	
		
		printf("����������: ");		
		scanf("%s",p ->name); 
		
		if(p ->name[0] == 'O'&&p ->name[1] == 'K')
		{  
			free(p);
			break; 
		}
		else  
		{
			printf("������ѧ��: ");	
			scanf("%d",&p ->ID); 
			
			printf("������4�ſγ̵ĳɼ���ÿ�ųɼ��ÿո�ֿ���:\n ");	
			scanf("%d %d %d %d",&p ->grade[0],&p ->grade[1],&p ->grade[2],&p ->grade[3]);
			 
		}
	}
}		




void Average_Output(void) //���ÿ�ſε�ƽ���� 
{	
	Type_Student *Temp = &student_Head;
	average_grade[0] = 0; 
	average_grade[1] = 0;
	average_grade[2] = 0;
	average_grade[3] = 0;
	unsigned int cnt = 0; 
	
 	while(1)
 	{
		if(Temp ->next != NULL) 
		{
			Temp = Temp ->next;	  
			if(Temp ->next == NULL) break;
			
		 	average_grade[0] += Temp ->grade[0];   
		 	
		 	average_grade[1] += Temp ->grade[1];   
		 	
		 	average_grade[2] += Temp ->grade[2];   
		 	
		 	average_grade[3] += Temp ->grade[3]; 
		
		 	cnt ++;
	 	}
	 	else break;
	}
	average_grade[0]/= cnt;	
	average_grade[1]/= cnt;	
	average_grade[2]/= cnt;	
	average_grade[3]/= cnt;	
	
	printf("\n\n---------------- ȫ��ƽ���� ------------------\n"); 
	printf("�γ�1��ƽ������: %d \n",average_grade[0]);  
	printf("�γ�2��ƽ������: %d \n",average_grade[1]);  
	printf("�γ�3��ƽ������: %d \n",average_grade[2]);  
	printf("�γ�4��ƽ������: %d \n",average_grade[3]);  
	printf("----------------------------------------------\n\n"); 
	
}

void Flunk_Find(void) //�ҳ��������ѧ�� 
{	
	Type_Student *Temp = &student_Head;
	printf("\n\n----------------- ������ѧ�� -----------------\n"); 
	while(1)
 	{
		if(Temp ->next != NULL) 
		{
			Temp = Temp ->next;	  
			if(Temp ->next == NULL) break; 
		 	if(Temp ->grade[0] < 60||Temp ->grade[1] < 60||Temp ->grade[2] < 60||Temp ->grade[3] < 60) 
			{
			 	printf("�������ѧ��ѧ�ţ�%d \n",Temp ->ID);   
			 	printf("�������ѧ����ȫ���ɼ���%d %d %d %d \n",Temp ->grade[0],Temp ->grade[1],Temp ->grade[2],Temp ->grade[3]);   
			 	printf("�������ѧ��ƽ���ɼ���%6.2f \n",(Temp ->grade[0]+Temp ->grade[1]+Temp ->grade[2]+Temp ->grade[3])/4.0f);  
		 	}
		 	  
	 	}
	 	else break;
	}
	 
	printf("----------------------------------------------\n\n"); 
	  
}	

void Excellent_Find(void) //�ҳ�90�����ϵ�ѧ�� 
{	
	Type_Student *Temp = &student_Head;
	printf("\n\n--------------- 90�����ϵ�ѧ�� ----------------\n"); 
	while(1)
 	{
		if(Temp ->next != NULL) 
		{
			Temp = Temp ->next;	  
			if(Temp ->next == NULL) break; 
		 	if((Temp ->grade[0] + Temp ->grade[1] + Temp ->grade[2] + Temp ->grade[3] )/4 >= 90)
			{
			 	printf("ƽ����90�����ϵ�ѧ��ѧ�ţ�%d \n",Temp ->ID);    
		 	}
		 	  
	 	}
	 	else break;
	}
	 
	printf("-----------------------------------------------\n\n"); 
	  
}	
	
int main()
{ 
	printf(" \n\n\n���濪ʼ����ɼ�������������������� ���롰OK������ \n\n\n");
	StudentInfo_Input();  
	Average_Output(); //���ÿ�ſε�ƽ���� 
	Flunk_Find(); //�ҳ��������ѧ�� 
	Excellent_Find(); //�ҳ�90�����ϵ�ѧ�� 
	
	while(1);	
}

































