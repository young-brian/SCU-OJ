#include <stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	while(a!=0&&b!=0&&c!=0&&d!=0&&e!=0){
	int cnt=0,next=e,i=b-a,q=b/a;
	int u=d+e,v=u+e,w=v+u,x=v+w,y=x+w,z=y+x;
	if(b-a==i&&c-b==i&&d-c==i&&e-d==i&&i!=0){
		printf("case one\n");
		for(cnt=0;cnt<4;cnt++){
			next+=i;
			printf("%d ",next);
		}
		printf("%d\n",next+i);
	}
	else if(c/b==q&&d/c==q&&e/d==q&&q!=1){
		printf("case two\n");
		for(cnt=0;cnt<5;cnt++){
			next*=q;
			printf("%d ",next);
		}
		printf("\n");
	}

	else if(a+b==c&&b+c==d&&c+d==e){
		printf("case three\n");
		printf("%d %d %d %d %d\n",u,v,w,x,y,z);
	}
	else if(a==b&&b==c&&c==d&&d==e){
		printf("case one\n");
		printf("%d %d %d %d %d\n",a,b,c,d,e);
		printf("case two\n");
		printf("%d %d %d %d %d\n",a,b,c,d,e);
	}
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
}
	return 0;
}
