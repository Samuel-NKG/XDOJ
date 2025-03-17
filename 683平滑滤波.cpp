#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int shuzu[n+1];
	for (int a=0;a<n;a++){
		scanf("%d",&shuzu[a]);
	}
	int sl[n];
	for(int b=1;b<n-1;b++){
		sl[b]=(shuzu[b-1]+shuzu[b]+shuzu[b+1])/3;
	}
	sl[0]=sl[1];
	sl[n-1]=sl[n-2];
	for(int c=0;c<n;c++){
		printf("%d ",sl[c]);
	}
	return 0;
 } 
