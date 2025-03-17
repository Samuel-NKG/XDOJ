#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num[100][100];
	int a=0,b=0;
	for(a=0;a<n;a++){
		for(b=0;b<n;b++){
			scanf("%d",&num[a][b]);
		}
	}
	int d=0;
	int c=0;
	while(c<2*n-1){
		while(d<=c){
			if(c-d<n&&d<n){
				printf("%d ",num[c-d][d]);
				d++;
			}
			else{
				d++;
			}
		}
		c++;
		while(d>=0){
			if(c-d<n&&d<n){
				printf("%d ",num[c-d][d]);
				d--;
			}
			else{
				d--;
			}
		}
		d++;
		c++;
	}
	return 0;
 } 
