#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a/100;
	int c=a/50-2*b;
	int x=a%50;
	int d=x/20;
	int e=x/10-2*d;
	int z=a%10;
	int f=z/5;
	int g=a%5;
	printf("%d %d %d %d %d %d",b,c,d,e,f,g);
	return 0;
 } 
