#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a/b;
	int d=a%b;
	if(d==0){
		printf("yes");
	}
	else{
		printf("%d %d",c,d);
	}
	return 0;
 } 
