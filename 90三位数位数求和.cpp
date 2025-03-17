#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a%10;
	int c=(a%100-b)/10;
	int d=(a%1000-b-c)/100;
	int e=b+c+d;
	printf("%d",e);
	return 0;
 } 
