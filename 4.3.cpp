#include <stdio.h>
void buble(int cnt,int d[])
{
	int i,j;
	for(i=0;i<cnt-1;i++)
		{
			for(j=0;j<cnt-1-i;j++)
			{
				if(d[j]>d[j+1])
				{
					int t; 
					t=d[j+1];
					d[j+1]=d[j];
					d[j]=t;
				}
			}
		}//ð�������� (��С����
}
 
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int cnt=0;
	for(cnt=0;cnt<n;cnt++)
	{
		int cntji=0,cntou=0; 
		int a[999],ji[999],ou[999];
		int i;
		char c; 
		for(i=0;i<99;i++)
		{
			scanf("%d",&a[i]);
			c=getchar();
			if(c=='\n')
			{
				if(a[i]%2==1||a[i]==1)
					{	
						ji[cntji]=a[i];
						cntji++;
					}
					else
					{
						ou[cntou]=a[i];	
						cntou++;
					}
				break;
			}
			else
			{
				if(a[i]%2==1||a[i]==1)
				{	
					ji[cntji]=a[i];
					cntji++;
				}
				else
				{
					ou[cntou]=a[i];	
					cntou++;
				}
			}
		}//����һ��������¼����������ż������ 	
		buble(cntji,ji);//�������� 
		buble(cntou,ou);//ż������ 
		int k;
		for(k=0;k<cntji;k++)
		{
		printf("%d ",ji[k]);
		}
		for(k=0;k<cntou;k++)
		{
		printf("%d ",ou[k]);
		}
		printf("\n");
	}
	return 0;
}
