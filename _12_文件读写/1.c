#include <stdio.h>
#define PI 3.1415926


int main()
{
 	FILE *fp1;//�����ļ���ָ�룬���ڴ򿪶�ȡ���ļ�  
	fp1 = fopen("d:\\a.txt","wb");//ֻ����ʽ���ļ�a.txt 
	char text[1024] = {"����л����"};
	fputs(text,fp1);//������д��fp2��ָ���ļ���
	fclose(fp1);//�ر��ļ�a.txt���д򿪾�Ҫ�йر� 
	
 	return 0;
}
