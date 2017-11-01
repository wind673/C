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
		
		printf("请输入姓名: ");		
		scanf("%s",p ->name); 
		
		if(p ->name[0] == 'O'&&p ->name[1] == 'K')
		{  
			free(p);
			break; 
		}
		else  
		{
			printf("请输入学号: ");	
			scanf("%d",&p ->ID); 
			
			printf("请输入4门课程的成绩（每门成绩用空格分开）:\n ");	
			scanf("%d %d %d %d",&p ->grade[0],&p ->grade[1],&p ->grade[2],&p ->grade[3]);
			 
		}
	}
}		




void Average_Output(void) //输出每门课的平均分 
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
	
	printf("\n\n---------------- 全班平均分 ------------------\n"); 
	printf("课程1的平均分是: %d \n",average_grade[0]);  
	printf("课程2的平均分是: %d \n",average_grade[1]);  
	printf("课程3的平均分是: %d \n",average_grade[2]);  
	printf("课程4的平均分是: %d \n",average_grade[3]);  
	printf("----------------------------------------------\n\n"); 
	
}

void Flunk_Find(void) //找出不及格的学生 
{	
	Type_Student *Temp = &student_Head;
	printf("\n\n----------------- 不及格学生 -----------------\n"); 
	while(1)
 	{
		if(Temp ->next != NULL) 
		{
			Temp = Temp ->next;	  
			if(Temp ->next == NULL) break; 
		 	if(Temp ->grade[0] < 60||Temp ->grade[1] < 60||Temp ->grade[2] < 60||Temp ->grade[3] < 60) 
			{
			 	printf("不及格的学生学号：%d \n",Temp ->ID);   
			 	printf("不及格的学生的全部成绩：%d %d %d %d \n",Temp ->grade[0],Temp ->grade[1],Temp ->grade[2],Temp ->grade[3]);   
			 	printf("不及格的学生平均成绩：%6.2f \n",(Temp ->grade[0]+Temp ->grade[1]+Temp ->grade[2]+Temp ->grade[3])/4.0f);  
		 	}
		 	  
	 	}
	 	else break;
	}
	 
	printf("----------------------------------------------\n\n"); 
	  
}	

void Excellent_Find(void) //找出90分以上的学生 
{	
	Type_Student *Temp = &student_Head;
	printf("\n\n--------------- 90分以上的学生 ----------------\n"); 
	while(1)
 	{
		if(Temp ->next != NULL) 
		{
			Temp = Temp ->next;	  
			if(Temp ->next == NULL) break; 
		 	if((Temp ->grade[0] + Temp ->grade[1] + Temp ->grade[2] + Temp ->grade[3] )/4 >= 90)
			{
			 	printf("平均分90分以上的学生学号：%d \n",Temp ->ID);    
		 	}
		 	  
	 	}
	 	else break;
	}
	 
	printf("-----------------------------------------------\n\n"); 
	  
}	
	
int main()
{ 
	printf(" \n\n\n下面开始输入成绩，输入完成请在姓名处 输入“OK”即可 \n\n\n");
	StudentInfo_Input();  
	Average_Output(); //输出每门课的平均分 
	Flunk_Find(); //找出不及格的学生 
	Excellent_Find(); //找出90分以上的学生 
	
	while(1);	
}

































