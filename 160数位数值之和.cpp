#include <stdio.h> 
int main()
{
	int a;
	scanf("%d",&a);
	int d=0;
	int sum=0;
	do{
		int c=a%10;
		d=10*d+c;
		a/=10;
	}while(a>0);
	do{
		int b=d%10;
		sum+=b;
		printf("%d ",b);
		d/=10;
	}while(d>0);
	printf("%d",sum);
}
