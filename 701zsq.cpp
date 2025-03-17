#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,sum3=0;
	float avg,s,sum1=0,sum2=0,a,b;
	float x[300];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&x[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum1+=x[i];
	}
	avg=sum1/n*1.0;
	for(i=1;i<=n;i++)
	{
		sum2+=pow(x[i]-avg,2);
	}
	s=sum2/(n-1);
	s=pow(s,0.5);
	a=avg-3*s;
	b=avg+3*s;
	for(i=1;i<=n;i++)
	{
		if(x[i]>b||x[i]<a)
		sum3++;
	}
	printf("%.4f %d",s,sum3);
	return 0;
}
