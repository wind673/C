#include<stdio.h>  
#include<conio.h>
#include<windows.h>

#define PASSWORD        1234   //�������� 
#define PASSWORD_LENTH  4	   //���볤��  

int main()
{
	unsigned int my_password = PASSWORD;
	char KeyGets,Receive_password[PASSWORD_LENTH] = {0};
	unsigned char _t = 0;//���� 
	unsigned char ProcessGrade = 0;//������� 
	
	system("cls");//���� 
	printf("Please input the password:\n"); 
	while(1)
	{
		if(ProcessGrade == 0)
		{
			KeyGets=getch();
			printf("%c",KeyGets);  
			Receive_password[_t++] = KeyGets;
			if( _t > PASSWORD_LENTH - 1) ProcessGrade = 1;  
		}
	
		if( ProcessGrade == 1 ) //�����жϳ��� 
		{
			
			_t = PASSWORD_LENTH;
			while(1) 
			{
				_t --;
				if( Receive_password[_t] != '0' + my_password%10 ) ProcessGrade = 2; //������� 
				my_password /= 10;//��λ
				if(_t == 0) break;
			}
			if( ProcessGrade == 1 ) ProcessGrade = 3;//������ȷ 
			my_password = PASSWORD;
		}
		
		if(ProcessGrade == 2) //���������� 
		{   
			ProcessGrade = 0;//�����־    
			system("cls");                                   
			printf("The password is error ! \n");   
			printf("Please re-enter your password:\n");   
		}
		
		if (ProcessGrade == 3) //������ȷ���� 
		{
			system("cls");
			printf("Correct Password \n"); 
			printf("Welcome Back ! \n"); 
			break;
		} 
		
	}
	
	system("pause");
	return 0; 
}








