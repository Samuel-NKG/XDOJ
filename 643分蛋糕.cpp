#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int cake[n+10];
	for(int a=0;a<n;a++){
		scanf("%d",&cake[a]);
	}
	int sum=0;
	int jishu=0;
	for(int b=0;b<n;b++){
		sum+=cake[b];
		if(sum>=k){
			jishu++;
			sum=0;
		}
	}
	if(sum!=0) {
		printf("%d",jishu+1);	
	}
	else{
		printf("%d",jishu);
	}
	return 0;
 } 
