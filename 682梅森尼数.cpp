#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int c=1;
	for(int d=0;d<a;d++){
		c*=2;
	} 
	int e=c-1;
	//printf("%d ",e);
	int b=2;
	int f;
	if(e==1){
		printf("%d 0",e);
	} 
	else{
		for(b=2;b<=e;b++){
			if(e%b==0){
				f=b;
				break; 
				}
			}
		if(f==e){
			printf("%d 1",e);
		}
		else{
			printf("%d 0",e);
		}
	}
 } 
