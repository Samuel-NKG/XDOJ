#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int sz[100][100];	
	int e=1;
	for(int d=0;d<n;d++){
		e*=2;
	}
	for(int c=0;c<e;c++){
		scanf("%d",&sz[0][c]);
	}
	for(int f=1;f<=m;f++){
		int h=e/2;
		for(int g=0;g<h;g++){
			sz[f][g]=sz[f-1][g]+sz[f-1][e-g-1];
			//printf("%d ",sz[f][g]);
			//printf("%d ",sz[f-1][g]);
			//printf("%d ",sz[f-1][e-g-1]);
		}
		e=e/2;
	}
    for(int i=0;i<e;i++){
    	printf("%d ",sz[m][i]);
	}
	return 0;
 } 
