#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	int c=a;
	for(b=0;c>0;b++){
		c=c/10;
	}
	int d=a*a-a;
	int f=1;
	for(int e=0;e<b;e++){
		f=f*10;
	}
	if(d%f==0){
		printf("%d 1",a);
	}
	else{
		printf("%d 0",a);
	}
	return 0;
 } 
