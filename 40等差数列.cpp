#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	int number[100];
	int x;
	for(b=0;b<a;b++){
		scanf("%d",&x);
		number[b]=x;
	}
	int c=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
				c++;
			}
		}
	}
	int d=number[1]-number[0];
	int e=0;
	while(e<a-1){
		if(number[e+1]-number[e]==d){
			e++;
		}
		else{
			break;
		}
	}
	if(e==a-1){
		printf("%d",d);
	}
	else{
		printf("no");
	}
}
