#include <stdio.h>
int isprimeandji(int x)
	{
	int ret=1;
	if((x%2)!=0)
	{
	int i;
	for(i=2;i<x-1;i++)
	{
		if(x%i==0)
		{
			ret=0;
			break;//找到一个就行 
		}
		else ret=1;
	}
	}
	else 
	{
		ret=0;
	}	
	return ret;
	}
int main()
{
	int x;
	scanf("%d",&x);
	if(x>6&&x%2==0)
	{
		int a=0,b=0;
		{
			for(a=2;a<=x/2;a++)
			{
				if(isprimeandji(a))
				{
					b=x-a;
					if(isprimeandji(b))
					{
						printf("%d %d\n",a,b);
					}
				}
			}
		}
	}
	else
	{
		printf("ERROR");
	}

	return 0;
}
