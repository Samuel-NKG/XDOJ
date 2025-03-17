#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+'){
		printf("%d%c%d=%d",a,c,b,a+b);
	}
	else if(c=='-'){
		printf("%d%c%d=%d",a,c,b,a-b);
	}
	else if(c=='*'){
		printf("%d%c%d=%d",a,c,b,a*b);
	}
	else if(c=='/'){
		printf("%d%c%d=%d",a,c,b,a/b);
	}
	else if(c=='%'){
		printf("%d%c%d=%d",a,c,b,a%b);
	}
	return 0;
 } 
