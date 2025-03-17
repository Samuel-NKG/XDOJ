#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	float c=a+b/60.0;
	if(0.0<=c&&c<=10.0){
		float d=100.0-5.0*c;
		printf("%.1f",d);
	}
	else if(10.0<c&&c<=30.0){
		float d=60.0-c;
		printf("%.1f",d);
	}
	else if(30.0<c&&c<=50.0){
		float d=45.0-c/2.0;
		printf("%.1f",d);
	}
	else{
		float d=20.0;
		printf("%.1f",d);
	}
	return 0;
	
 } 
