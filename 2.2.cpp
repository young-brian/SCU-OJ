#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char a[9999],b[9999];
	int i=0,cnt=0;
	while(cnt<n)
	{
		i=0;
		do
		{
			a[i]=getchar();
			i++;
		}while(a[i-1]!='\n');
		a[i-1]='\0';
		i-=1;
//		printf("%d\n",i);
//		printf("%c",a[i-1]);
		int t=i;
		int j;
		for(j=0;j<i;j++)
		{
			b[j]=a[t-1];
			t--;
		} 
//		printf("%s\n",b);
	//	printf("%d",strcmp(a,b));
		if(strcmp(a,b)==0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		cnt++;
	}
	
	return 0;
}
