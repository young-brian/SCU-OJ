#include <stdio.h>
#include <string.h>
void gougu(int a,int b,int c)
{
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[3];
	int cnt=0;
	while(cnt<n)
	{
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		if(a[0]+a[1]>a[2]&&a[0]+a[2]>a[1]&&a[1]+a[2]>a[0]&a[0]>0&a[1]>0&a[2]>0)
		{
			gougu(a[0],a[1],a[2]); 
		}
		else
		{
			printf("No");
		}
		cnt++;
	}
	return 0;
}
