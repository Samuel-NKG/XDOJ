#include<stdio.h>
int main()
{
	float x,r;
	scanf("%f %f",&x,&r);
	float shuzu[1001];
	shuzu[0]=x;
	for(int b=1;b<1000;b++){
		shuzu[b]=r*shuzu[b-1]*(1-shuzu[b-1]);
	}
	int c=0;
	for(int d=1;d<1000;d++){
		if(shuzu[d]-shuzu[d-1]<0.00001&&shuzu[d]-shuzu[d-1]>-0.00001){
			printf("%.4f 1",shuzu[d]);
			break;
		}
		c=d;	
	}
	if(c==999&&shuzu[999]-shuzu[998]>0.00001||shuzu[999]-shuzu[998]<-0.00001){
			printf("%.4f 0",shuzu[999]);
	}
	return 0;
 } 
