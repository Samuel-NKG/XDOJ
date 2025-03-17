#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int number[100];
	int num[100];
	int jishu[100];
	int x;
	for(int b=0;b<a;b++){
		scanf("%d",&x);
		number[b]=x;
		num[b]=x;
	}
	for(int d=0;d<a;d++){
		jishu[d]=d;
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1-i;j++){
			if(num[j]>num[j+1]){
				int p=num[j];
				num[j]=num[j+1];
				num[j+1]=p;
				int q=jishu[j];
				jishu[j]=jishu[j+1];
				jishu[j+1]=q;
			}
		}
	}
	int max=jishu[a-1];
	int min=jishu[0];
	if(min==a-1&&max==0){
			int y=number[0];
			number[0]=number[min];
			number[min]=y;
		for(int c=0;c<a;c++){
			printf("%d ",number[c]);
		}
	}
	else{
		int s=number[0];
		number[0]=number[min];
		number[min]=s;
		int t=number[a-1];
		number[a-1]=number[max];
		number[max]=t;
		for(int z=0;z<a;z++){
			printf("%d ",number[z]);
		}	
	}
	return 0;
}
