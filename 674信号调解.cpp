#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int shuzu[100];
	for(int b=0;b<2*a;b++){
		scanf("%d",&shuzu[b]);
	}
	int jl1[100];
	for(int c=0;c<2*a;c+=2){
		jl1[c]=(shuzu[c]-4)*(shuzu[c]-4)+(shuzu[c+1]-4)*(shuzu[c+1]-4);
	}
	int jl2[100];
	for(int d=0;d<2*a;d+=2){
		jl2[d]=(shuzu[d]+4)*(shuzu[d]+4)+(shuzu[d+1]+4)*(shuzu[d+1]+4);
	}
	for(int e=0;e<2*a;e+=2){
		if(jl1[e]>jl2[e]){
			//printf("%d ",e); 
			printf("2 ");
		}
		else if(jl1[e]<jl2[e]){
			//printf("%d ",e);
			printf("1 ");
		}
		else{
			continue;
		}
	}
	return 0;
 } 
