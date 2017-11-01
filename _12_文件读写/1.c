#include <stdio.h>
#define PI 3.1415926


int main()
{
 	FILE *fp1;//定义文件流指针，用于打开读取的文件  
	fp1 = fopen("d:\\a.txt","wb");//只读方式打开文件a.txt 
	char text[1024] = {"我是谢玉伸"};
	fputs(text,fp1);//将内容写到fp2所指向文件中
	fclose(fp1);//关闭文件a.txt，有打开就要有关闭 
	
 	return 0;
}
