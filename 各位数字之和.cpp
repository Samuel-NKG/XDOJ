#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	scanf("%d",&a);
	b=a/100000000;
	c=a/10000000-10*b;
	d=a/1000000-100*b-10*c;
	e=a/100000-1000*b-100*c-10*d;
	f=a/10000-10000*b-1000*c-100*d-10*e;
	g=a/1000-100000*b-10000*c-1000*d-100*e-10*f;
	h=a/100-1000000*b-100000*c-10000*d-1000*e-100*f-10*g;
	i=a/10-10000000*b-1000000*c-100000*d-10000*e-1000*f-100*g-10*h;
	j=a%10;
	printf("%d",b+c+d+e+f+g+h+i+j);
	return 0;
 } 
