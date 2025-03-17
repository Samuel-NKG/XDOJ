#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int shuzu[1001];
	for(int a=0;a<n;a++){
		scanf("%d",&shuzu[a]);
	}
	int max=1;
	int tj[1001];
	int c=1;
	for(int b=0;b<n-1;b++){
		if(shuzu[b]==shuzu[b+1]){
			c++;
			if(c>max){
				max=c;
			}
		}
		else{
			c=1;
		}
	}
	printf("%d",max);
	return 0;
 } 
