#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int shuzu[102];
	for (int b=0;b<n;b++){
		scanf("%d",&shuzu[b]);
	}
	int baocun[100]={0};
	for(int c=0;c<n-1;c++){
		for(int d=1;d<=shuzu[c];d++){
			if(shuzu[c]%d==0&&shuzu[c+1]%d==0){
				baocun[c]=shuzu[c]*shuzu[c+1]/d;
			}
		}
	}
	int sum=0;
	for(int e=0;e<n;e++){
		sum+=baocun[e];
	}
	printf("%d",sum);
	return 0;
}
