#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int odd=0,even=0;
	for(int a=1;a<=n;a++){
		if(a%2==1){
			odd+=a;
		}
		else{
			even+=a;
		}
	}
	printf("%d %d",odd,even);
	return 0;
 } 
