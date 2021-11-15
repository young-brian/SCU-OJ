#include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int cnt=0, k=0,z=0;
	char b[999];//字符 
	int c[999];//数量 
	for(cnt=0;cnt<m;cnt++)
	{
		scanf("%d%c",&c[cnt],&b[cnt]);
	}
	char a[999][999];
	int i,j;
	for(j=0;j<31;j++)
	{
		for(i=0;i<m*2-1;i++)
		{
			a[j][i]=' ';
		}
	}
	for(i=0;i<m*2-1;i++)
	{
		a[15][i]='-';
	}
	for(i=0;i<m*2-1;i++)
	{
		if(i%2==0)
		{
			if(c[k]>0||c[k]==0)
			{
				if(b[k]!=' '&&b[k]!='\n')
				{
					for(j=14;j>14-c[k];j--)
					{
						//printf("%c",b[k]); 
						a[j][i]=b[k];
					}
				}
				else
				{
					for(j=14;j>14-c[k];j--)
					{
						a[j][i]='+';
					}
				}
				
			}//correct
			if(c[k]<0)
			{
				if(b[k]!=' '&&b[k]!='\n')
				{
					for(j=16;j<16-c[k];j++)
					{
						a[j][i]=b[k];
					}
				}
				else
				{
					for(j=16;j<16-c[k];j++)
					{
						a[j][i]='+';
					}
				}
			}
			k++;
		}
	}
	for(j=0;j<31;j++)
	{
		z=0;//判断变量！--通常用于循环中判断 （双重判断） 
		for(i=0;i<m*2-1;i++)
		{
			if(a[j][i]!=' ')
			{
				z=1;
				break; 
			}
		}
		if(z)
		{
			for(i=0;i<m*2-1;i++)
			{
				printf("%c",a[j][i]);
			}
			printf("\n");
		}
	}
	return 0;
}

