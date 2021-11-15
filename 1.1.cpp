#include <stdio.h>
int main(){
	int n,i=1,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("%d\n",sum);
    i=1,sum=0;
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("%d\n",sum);
    i=1,sum=0;
	do{
	sum+=i;
	i++;	
	}while(i<=n);
	printf("%d\n",sum);
	return 0;
}
