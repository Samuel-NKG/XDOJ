#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=2;
	if(a==1){
		printf("%d",a);
	} 
	else{
	for(b=2;b<=a;b++){
		if(a%b==0){
			printf("%d",b);
			break; 
			}
		}
	}
 } 
