#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a%2;
	int c=a%3;
	int d=a%5;
	if(b==0&&c!=0&&d!=0){
		printf("Nice");
	}
	else if(c==0&&b!=0&&d!=0){
		printf("Good");
	}
	else if(d==0&&b!=0&&c!=0){
		printf("Best");
	}
	else{
		printf("Bad");
	}
	return 0;
 } 
