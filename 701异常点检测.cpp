#include <stdio.h> 
#include <math.h>
int main()
{
	int a;
	scanf("%d",&a);
	double shuzu[200];
	double sum=0;
	for (int b=0;b<a;b++){
		scanf("%lf",&shuzu[b]);
		sum+=shuzu[b];
	}
	double ave=sum/a*1.0;
	double summ=0;
	for(int c=0;c<a;c++){
		summ+=(shuzu[c]-ave)*(shuzu[c]-ave)*1.0;
	}
	double d=summ/(a-1)*1.0;
	double s=sqrt(d);
	printf("%.4lf ",s);
	int f=0;
	for (int e=0;e<a;e++) {
		if (shuzu[e]<ave-3*s||shuzu[e]>ave+3*s){
			f++;
		}
	}
	printf("%d",f);
	return 0;
}
