#include <stdio.h>
#include <string.h>
void nixu(char c[999],char d[999],int* len,char l[999],int cnt1)
{
	int k,z=(*len);
	for(k=0;k<*len;k++)
	{
		d[k]=c[cnt1-1];
		cnt1--;
	}
	d[k]=' ';
	strncat(l,d,k+1);
	*len=0;//数量归零 
}

int main()
{
	char a[999],b[999],c[999]="1";
	int i;
	int k=0,cnt=0;
	int* num=&k;
	for(i=0;i<999;i++)
	{
		a[i]=getchar();
		if('A'<=a[i]&&a[i]<='z')
		{
			(*num)++;//字符数 
		}
		if(a[i]<'A'||a[i]>'z')
		{
			if(a[i]!='\n')
			{
				nixu(a,b,num,c,cnt);
				c[i+1]=a[i];
			}	
		}
		if(a[i]=='\n')
		{
			nixu(a,b,num,c,cnt);
			break;
		}
		cnt++;//总字符数	
	}

	for(i=0;i<strlen(c);i++)
	{
		if(c[i]!='1')
		{
			printf("%c",c[i]);
		}
	}
	return 0;
}
