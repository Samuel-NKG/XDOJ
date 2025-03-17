#include<stdio.h>
int main()
{
	int a=0;
	int num[100];
	for(a=0;a<10;a++){
		scanf("%d",&num[a]);
	}
	int c=9;
	for(c=9;c>-1;c--){
		printf("%d ",num[c]);
	}
	return 0;
 } 
