#include <stdio.h>
void shuixianhua(int sta,int end)
{
	int i,d,z=-1;
	for(i=sta;i<=end;i++)
	{
		int l;
		l=i;
		int sum=0;
		while(l>0)
		{
			d=l%10;
			l/=10;
			sum+=d*d*d;
		}
		if(sum==i)
		{
			printf("%d ",i);
			z=0;
		}	
	}
	if(z==-1)
	{
		printf("%d\n",z);
	}
	if(z==0)
	{
		printf("\n");
	}
}
int main()
{
	int t,m,n;
	scanf("%d",&t);
	int cnt=0;
	for(cnt=0;cnt<t;cnt++)
	{
		scanf("%d %d",&m,&n);
		shuixianhua(m,n);
	}
	return 0;
}
