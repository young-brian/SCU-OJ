#include <stdio.h>
void SR(char x1,char x2,int b[99][99],int c)
{
	int lie=0;
	int d[999];
	for(lie=0;lie<c;lie++)
	{
		d[lie]=b[x1-'1'][lie];//对char类型做的计算都是asc码的加减 若真正做到+- 要将+-的数带上‘’（使其取asc码） 
	}
	for(lie=0;lie<c;lie++)
	{
		b[x1-'1'][lie]=b[x2-'1'][lie];
		b[x2-'1'][lie]=d[lie];
	}
}
void SC(char y1,char y2,int b[99][99],int r)
{
	
	int hang=0;
	int d[999][1];
	for(hang=0;hang<r;hang++)
	{
		d[hang][1]=b[hang][y1-'1'];
	}
	for(hang=0;hang<r;hang++)
	{
		b[hang][y1-'1']=b[hang][y2-'1'];
		b[hang][y2-'1']=d[hang][1];
	}
}
void DR(char x,int b[99][99],int c,int* r)
{
	int hang,lie;
	for(hang=x-'1';hang<*r;hang++)
	{
		for(lie=0;lie<c;lie++)
		{
			b[hang][lie]=b[hang+1][lie];
		}
	}
	(*r)--; //*的优先级特别低 需要括号 
}
void DC(char x,int b[99][99],int* c,int r)
{
	int hang,lie;
	for(lie=x-'1';lie<*c;lie++)
	{
		for(hang=0;hang<r;hang++)
		{
			b[hang][lie]=b[hang][lie+1];
		}
	}
	(*c)--; 
}
void IR(char x,int b[99][99],int c,int* r)
{
	int hang,lie;
	for(hang=(*r)-1;hang>=x-'1';hang--)
	{
		for(lie=0;lie<c;lie++)
		{
			b[hang+1][lie]=b[hang][lie];
		}
	}
	for(lie=0;lie<c;lie++)
	{
		b[x-'1'][lie]=0;
	}
	(*r)++;
}
void IC(char y,int b[99][99],int* c,int r)
{
	int hang,lie;
	for(lie=(*c)-1;lie>=y-'1';lie--)
	{
		for(hang=0;hang<r;hang++)
		{
			b[hang][lie+1]=b[hang][lie];
		}
	}
	for(hang=0;hang<r;hang++)
		{
			b[hang][y-'1']=0;
		}
	(*c)++;
}



int main()
{
	int row,col,count=0;
	int r,c;
	scanf("%d %d",&row,&col);
	int a[99][99];
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			scanf("%d",&a[r][c]);
		}	
	}
    //输入二维数组 
	int n,cnt=0;
	scanf("%d",&n);//操作次数 
	getchar();
	while(cnt<n)
	{
		int i=0;
		char z[999];
		do
		{
			z[i]=getchar();
			i++;
		}while(z[i-1]!='\n');
		if(z[0]=='S'&&z[1]=='R')
		{
			SR(z[3],z[5],a,col);
		}
		if(z[0]=='S'&&z[1]=='C')
		{
			SC(z[3],z[5],a,row);
		}
		if(z[0]=='D'&&z[1]=='R')
		{
			DR(z[3],a,col,&row);
		}
		if(z[0]=='D'&&z[1]=='C')
		{
			DC(z[3],a,&col,row);
		}
		if(z[0]=='I'&&z[1]=='R')
		{
			IR(z[3],a,col,&row);
		}
		if(z[0]=='I'&&z[1]=='C')
		{
			IC(z[3],a,&col,row);
		}
		cnt++;
 	} 
//	for(r=0;r<row;r++)
//	{
//		for(c=0;c<col;c++)
//		{
//			if(a[r][c]!=0)
//			{
//				printf("%d ",a[r][c]);
//			}				
//		}
//		printf("\n");
//    } 
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	 //打印二维数组 
	
	
	return 0;
}
