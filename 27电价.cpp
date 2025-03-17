#include<stdio.h>
int main()
{
	float a;
	float b;
	scanf("%f",&a);
	if(a<=110){
		b=a*0.5;
	}
	else if(a>110&&a<=210){
		b=55.0+(a-110.0)*0.55;
	}
	else{
		b=55.0+100*0.55+(a-210.0)*0.7;
	}
	float c=100.0*b+0.5;
	int d=c;
	float e=d/100.0;
	printf("%.2f",e);
	return 0;
 } 
