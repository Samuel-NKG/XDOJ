#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a%10;
	int c=(a%100-b)/10;
	int d=(a%1000-b-c)/100;
	int e=(a%10000-b-c-d)/1000;
	int f=(a%100000-b-c-d-e)/10000;
	printf("%d %d %d %d %d",f,e,d,c,b);
	return 0;
	
 } 
