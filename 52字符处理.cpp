#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a<91&&a>64){
		printf("%c",a+32);
	}
	else if(a<123&&a>96){
		printf("%c",a-32);
	}
	else{
		printf("%c",a);
	}
	return 0;
 } 
