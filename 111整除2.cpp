#include<stdio.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	int b=a%35;
	if(b==0){
		printf("yes");
	} 
	else{
		printf("no");
	}
	return 0;
}
