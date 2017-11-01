#include<stdio.h>  
#include<conio.h>
#include<windows.h>

#define PASSWORD        1234   //密码设置 
#define PASSWORD_LENTH  4	   //密码长度  

int main()
{
	unsigned int my_password = PASSWORD;
	char KeyGets,Receive_password[PASSWORD_LENTH] = {0};
	unsigned char _t = 0;//计数 
	unsigned char ProcessGrade = 0;//程序进程 
	
	system("cls");//清屏 
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
	
		if( ProcessGrade == 1 ) //密码判断程序 
		{
			
			_t = PASSWORD_LENTH;
			while(1) 
			{
				_t --;
				if( Receive_password[_t] != '0' + my_password%10 ) ProcessGrade = 2; //密码错误 
				my_password /= 10;//移位
				if(_t == 0) break;
			}
			if( ProcessGrade == 1 ) ProcessGrade = 3;//密码正确 
			my_password = PASSWORD;
		}
		
		if(ProcessGrade == 2) //密码错误程序 
		{   
			ProcessGrade = 0;//清除标志    
			system("cls");                                   
			printf("The password is error ! \n");   
			printf("Please re-enter your password:\n");   
		}
		
		if (ProcessGrade == 3) //密码正确程序 
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








