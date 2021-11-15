#include <stdio.h>
#include <string.h>
void stringcheck(char a[],int j){
	if(j==3&&a[0]=='S'&&a[1]=='C'&&a[2]=='U'){
		printf("YES\n");
	}
	else if(j%2==0||j<3){
		printf("NO\n");
	}
	else if(j>=3){
		if(a[j/2-1]=='S'&&a[j/2]=='C'&&a[j/2+1]=='U'){
		int i,k=1;
		for(i=0;i<(j/2-1);i++){//AASCUAA
			if(a[i]!='A'){
				k=0;
				break;
			}
		}
			for(i=j/2+2;i<j;i++){
			if(a[i]!='A'){
				k=0;
				break;
			}
		}
		if(k){
			printf("YES\n");	
		}
		else{
			printf("NO\n");
		}
	
		}
		else{
		printf("NO\n");
		}
	
	}
}
int main(){
	int n,cnt=0,j=0;
	scanf("%d",&n);
	getchar();
	char a[101];
	while (cnt<n){
		int i;
		for(i=0;i<100;i++){
			a[i]=getchar();
			if(a[i]=='\n'){
				a[i]='\0';
				break;
			}
		}
			j=strlen(a);
			stringcheck(a,j);
		cnt++;
	}
	
	
	return 0;
}
