#include <stdio.h>
#include<math.h>
int main()
{
	int m;
	scanf("%d",&m);
	long long int a[999]={m};
	int i;
	for(i=1;i<m+1;i++)
	{
		scanf(" %lld",&a[i]);
	}
	long long int max=a[1];
	for(i=2;i<m+1;i++)
	{
		if(fabs(a[i])>fabs(max))
		{
			max=a[i];
		}
	}
	printf("%lld",max);
	return 0;
}
