#include<stdio.h>
int main()
{
	float a;
	scanf("%f",&a);
	float b=0.6*a;
	float c=0.4*a+50;
	if(b>=c){
		printf("%.2f\n%.2f\nB",b,c);
	}
	else{
		printf("%.2f\n%.2f\nA",b,c);
	}
	return 0;
 } 
