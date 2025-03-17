#include<stdio.h>
struct gp{
	int num;
	int total;
	float price;
};
int main()
{
	int a;
	scanf("%d",&a);
	gp n[a];
	for(int b=0;b<a;b++){
		scanf("%d %d %f",&n[b].num,&n[b].total,&n[b].price);
	}
	int tj[a];
	int bz[a];
	for(int b=0;b<a;b++){
		tj[b]=n[b].num;
		bz[b]=b;
	}
	for(int q=0;q<a;q++) {
		for(int p=0;p<a-q-1;p++){
			if(tj[p]>tj[p+1]){
				int n=tj[p];
				tj[p]=tj[p+1];
				tj[p+1]=n;
				int m=bz[p];
				bz[p]=bz[p+1];
				bz[p+1]=m;
			}
		}
	}
	for(int b=0;b<a;b++){
		printf("%d %d %.2f\n",n[bz[b]].num,n[bz[b]].total,n[bz[b]].price);
	}
	return 0;
 } 
