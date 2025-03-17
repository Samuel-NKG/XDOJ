#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float p=(a+b+c)/2.0;
	float e=p*(p-a)*(p-b)*(p-c);
	float f=sqrt(e);
	printf("%.2f",f);
	return 0;
 } 
