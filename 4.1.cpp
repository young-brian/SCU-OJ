#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d",&n);  // ��n������
    for (i=0;i<n;i++)
	{
    	int a,b,c,d;
    	scanf("%d %d %d %d",&a,&b,&c,&d);
    	int t;
    	if(a>b)
    	{
    		t=b;
    		b=a;
    		a=t;
		}
		if(b>c)
		{
			t=b;
			b=c;
			c=t;
		}
		if(c>d)
		{
			t=d;
			d=c;
			c=t;
		}
		if(a>b)
    	{
    		t=b;
    		b=a;
    		a=t;
		}
		if(b>c)
		{
			t=b;
			b=c;
			c=t;
		}
		if(a>b)
    	{
    		t=b;
    		b=a;
    		a=t;
		}
		printf("%d %d %d %d\n",a,b,c,d);
        // ����4������������4���������򣬲�������
        // �뽫�������д���������ʹ��ѭ�����
    }
    return 0;
}


