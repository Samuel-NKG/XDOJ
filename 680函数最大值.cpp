#include<stdio.h>
int main()
{
	float a;
	float max=0.0;
	float shuzu[200000]={0};
	scanf("%f",&a);
	int c=0;
	for(double b=0.000;b<=10.00;b+=0.001){
		shuzu[c]=(a-b)*b*b;
		if(shuzu[c]>=max){
			max=shuzu[c];
			//printf("%f %f\n",b,shuzu[c]);
		}
		c++;
	}
	printf("%.2f\n",max);
	return 0;
 } 
