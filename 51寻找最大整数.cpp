#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	if(max<d){
		max=d;
	}
	printf ("%d",max);
 } 
