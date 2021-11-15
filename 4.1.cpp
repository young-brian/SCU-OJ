#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d",&n);  // 有n组数据
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
        // 读入4个整数，对这4个整数排序，并输出结果
        // 请将排序代码写在这里，不能使用循环语句
    }
    return 0;
}


