#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int e=a/b;
	int f=a%b;
	if(e==c and f==d){
		printf("yes");
	}
	else{
		printf("%d %d",e,f);
	}
	return 0;
 } 
