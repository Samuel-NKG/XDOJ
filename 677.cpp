#include <stdio.h>
int main()
{
	int n;
	float x;
	scanf("%d %f",&n,&x);
	float shuzu[11];
	shuzu[0]=1.0;
	shuzu[1]=x;
	for(int a=2;a<n+1;a++){
		shuzu[a]=((2*a-1)*x*shuzu[a-1]-(a-1)*shuzu[a-2])/a*1.0;
		//printf("%d %f %f ",a,shuzu[a-1],shuzu[a-2]);
	}
	float sum=0;
	for(int b=1;b<n+1;b++){
		sum+=shuzu[b];
	}
	printf("%.4f",sum);
	return 0;
	
 } 
