#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int number[21];
	for(int b=0;b<a;b++){
		scanf("%d",&number[b]);
	}
	int sum=0;
	for(int c=0;c<a;c++){
		for(int d=0;d<7;d++){
			sum+=number[c]%10;
			number[c]=number[c]/10;
		}
	}
	printf("%d",sum%10);
	return 0;
 } 
