#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int shuzu[100000];
	for(int b=0;b<a;b++){
		 scanf("%d",&shuzu[b]);
	}
	for(int c=0;c<a;c++) {
		 if(shuzu[c]==shuzu[c+1]){
		 	for(int d=c;d<a-2;d++){
		 		shuzu[d]=shuzu[d+2];
			}
			a=a-2;
			c=0;
		 }
	}
	if(a==0){
		printf("NULL");
	}
	else{
		for(int e=0;e<a;e++){
			printf("%d ",shuzu[e]);
		}
	}
	return 0;
 } 