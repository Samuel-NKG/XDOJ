#include<stdio.h>
int main()
{
	int n;
	int shuzu[101];
	scanf("%d",&n);
	for(int a=0;a<n;a++){
		scanf("%d",&shuzu[a]);
	}
	int paixu[101];
	for(int a=0;a<n;a++){
		paixu[a]=a+1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(shuzu[j]>shuzu[j+1]){
				int p=shuzu[j];
				shuzu[j]=shuzu[j+1];
				shuzu[j+1]=p;
				int q=paixu[j];
				paixu[j]=paixu[j+1];
				paixu[j+1]=q;
			}
		}
	}
	int cha=shuzu[0]-shuzu[1];
	int b=0;
	for(b=0;b<n-1;b++){
		if(shuzu[b]-shuzu[b+1]!=cha){
			break;
		}
	}
	//printf("%d\n",b);
	if(b==n-1){
		for(int c=0;c<n;c++){
			printf("%d ",paixu[c]);
		}
	}
	else{
		int max=shuzu[1]-shuzu[0];
		int min=shuzu[1]-shuzu[0];
		for(int c=1;c<n;c++){
			if(max<shuzu[c]-shuzu[c-1]){
				max=shuzu[c]-shuzu[c-1];
			}
			if(min>shuzu[c]-shuzu[c-1]){
				min=shuzu[c]-shuzu[c-1];
			}
		}
		printf("%d %d",max,min);
	}
	return 0;
 } 
