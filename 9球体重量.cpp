#include<stdio.h>
int main ()
{
	int a,b=0;
	scanf("%d %d",&a,&b);
	float c=(a/20.0)*(a/20.0)*(a/20.0)*4.0/3.0*3.1415926*7.86;
	float d=(b/20.0)*(b/20.0)*(b/20.0)*4.0/3.0*3.1415926*19.3;
	printf("%.3f %.3f",c,d);
	return 0;
}
