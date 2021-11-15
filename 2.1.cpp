#include <stdio.h>
#include <string.h>
int main()
{
	int m;
	scanf("%d",&m);
	getchar();
	char a[200];
	int i=0;
	do
	{
		a[i]=getchar();
		i++;
	}while(a[i-1]!='\n');//输入字符串
	a[i-1]='\0';//处理换行符 
	//printf("%s",a);
	char b[200];
	strcpy(b,a);
//	printf("%d\n",strlen(a));
	for(i=0;i<m;i++)
	{
		b[i]=a[strlen(a)-m+i];
	}
	for(i=m;i<strlen(a);i++)
	{
		b[i]=a[i-m];
	}
	printf("%s",b);
	return 0;
 } 
