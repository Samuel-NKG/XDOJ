#include<stdio.h>
int main()
{
	int a;
	int sum=0; 
	scanf("%d",&a);
	int b=0;
	for(b=0;b<=a;b++){
		sum+=b;
	}
	printf("%d",sum);
	return 0;
 } 
