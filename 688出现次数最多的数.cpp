#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	int number[a]={0};
	int x;
	for(b=0;b<a;b++){
		scanf("%d",&x);
		number[b]=x;
	}
	int d;
	int jishu[10001]={0};
	for(int c=0;c<a;c++){
			d=number[c];
			jishu[d]++;
	} 
	int paixu[10001]={0};
	for(int e=0;e<10001;e++){
		paixu[e]=jishu[e];
	}
	for(int k=0;k<10001;k++){
		for(int l=0;l<10001-1-k;l++){
			if(paixu[l]<paixu[l+1]){
				int n=paixu[l];
				paixu[l]=paixu[l+1];
				paixu[l+1]=n;
			}
		}
	}
	int u;
	for(int f=0;f<10001;f++){
		if(jishu[f]==paixu[0]){
			u=f;
			break;
		}
	}
	printf("%d",u);
	return 0;
}
