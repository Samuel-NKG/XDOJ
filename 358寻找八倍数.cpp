#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=1;
	while(b<=a){
		if(b%8==0){
			printf("%d ",b);
		}
		b++; 
	}
	
	int c=1;
	int sum=0;
	while(c<=a){
		if(c%2==0){
			sum+=c;
		}
		c++; 
	}
	printf("\n%d",sum);
 } 
