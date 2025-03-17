#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int shuzu[30];
	int sum;
	for(int a=0;a<n;a++){
		scanf("%d",&shuzu[a]);
		sum+=shuzu[a];
	}
	int ave=sum/n;
	int sume=0;
	for(int b=0;b<n;b++){
		sume+=(shuzu[b]-ave)*(shuzu[b]-ave);
	}
	printf("%d",sume/n);
	return 0;
}
