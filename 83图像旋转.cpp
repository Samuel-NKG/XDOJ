#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);//n «–– 
	int num[100][100];
	for(int a=0;a<n;a++){
		for(int b=0;b<m;b++){
			scanf("%d",&num[a][b]);
		}
	}
	for(int c=0;c<m;c++){
		for(int d=n-1;d>-1;d--){
			printf("%d ",num[d][c]);
		}
		printf("\n");
	}
	return 0;
 } 
