#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num[100][100];
	int sum=0;
	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			scanf("%d",&num[a][b]);
		}
	}
	for(int c=0;c<n;c++){
		sum+=num[c][c];
	}
	for(int d=0;d<n;d++){
		sum+=num[d][n-1-d];
	}
	int e=n/2;
	if(n%2==1){
		sum-=num[e][e];
	}
	printf("%d",sum);
	return 0;
 } 
