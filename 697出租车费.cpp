#include<stdio.h>
int main()
{
	float a,c;
	int b;
	scanf("%f %d",&a,&b);
	if(a<=3){
		c=10.0;
	}
	else if(a>3&&a<=10){
		c=10.0+(a-3.0)*2.0;
	}
	else if(a>10){
		c=24.0+3.0*(a-10.0);
	}
	int d=b/5;
	int e=2*d;
	printf("%.1f",e+c);
	return 0;
}
