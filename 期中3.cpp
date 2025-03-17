#include   <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a=m;
	for(a=m;a<n;a++){
		if(a==1){
			continue;
		}
		else if(a==2){
			printf("2");
		}
		else{
		for(int b=2;b<a;b++){
			if(a%b==0){
				break;
			}
			if(b==a-1){
				printf("%d ",a);
			}
		}
	}
	}
	return 0;
 } 
