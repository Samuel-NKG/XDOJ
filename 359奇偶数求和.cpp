#include <stdio.h>
int main()
{
	int b=1;
	int sum1=0;
	while(b<=100){
		if(b%2==1){
			sum1+=b;
		}
		b++; 
	}
	printf("%d",sum1);
	int c=1;
	int sum2=0;
	while(c<=100){
		if(c%2==0){
			sum2+=c;
		}
		c++; 
	}
	printf("\n%d",sum2);
}
