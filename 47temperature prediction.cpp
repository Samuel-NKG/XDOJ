#include<stdio.h>
int main()
{
	int a=0;
	int b; 
	scanf("%d %d",&a,&b);
	float c=a+b/60.0;
	float d=(4*c*c)/(c+2)-20;
	printf("%.2f",d);
	return 0;
}
