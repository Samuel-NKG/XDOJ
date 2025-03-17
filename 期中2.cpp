#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	float num[b];
	for(b=0;b<a;b++){
		scanf("%f",&num[b]);
	}
	for(int c=0;c<a;c++){
		printf("%.2f ",(num[c]-32)*5/9*1.0);
	}
 } 
