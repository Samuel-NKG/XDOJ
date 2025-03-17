#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=1,d=1,e=1,f=1,g=1,h=1;
	for(c=1;c<=a;c++){d*=c;}
	for(e=1;e<=b;e++){f*=e;}
	for(g=1;g<=(a-b);g++){h*=g;}
	printf("%.2f",1.0*(d/f/h));
 } 
