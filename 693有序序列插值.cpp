#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int number[10000];
	for(int a=0;a<=n;a++){
		scanf("%d",&number[a]);
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<n-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
			}
		}
	}
	for(int b=0;b<=n;b++) {
		printf("%d ",number[b]);
	}
	return 0;
 } 
