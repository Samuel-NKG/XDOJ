#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	int x;
	int num[100];
	for(b=0;b<a;b++){
		scanf("%d",&x);
		num[b]=x;
	}
	int shulie[100];
	int c=1,d=a,e=num[0];
	int q=1,w=a;
	while(c<=d-2){
		if(num[c]<e){
			shulie[q]=num[c];
			c++;
			q++;
		}
		else{
			shulie[w]=num[c];
			c++;
			w-=1;
		}
		if(num[d]<e){
			shulie[q]=num[d];
			q++;
			d-=1;
		}
		else{
			shulie[w]=num[d];
			w-=1;
			d-=1;
		}
	}
	int l=c+1;
	int shulie[l]=num[0];
	int g=1;
	for(g=1;g<=a;g++){
		printf("%d ",shulie[g]);
	}
 } 
