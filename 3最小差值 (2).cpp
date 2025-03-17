#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	int number[100];
	int x;
	for(b=0;b<a;b++){
		scanf("%d",&x);
		number[b]=x;
	}
	int c=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
				c++;
			}
		}
	}
	int paixu[100];
	int d=0,e=0;
	for(d=0;d<a-1;d++){
		paixu[d]=number[e+1]-number[e];
		e++;
	}
	for(int o=0;o<a-1;o++){
		for(int q=0;q<a-2-o;q++){
			if(paixu[q]>paixu[q+1]){
				int w=paixu[q];
				paixu[q]=paixu[q+1];
				paixu[q+1]=w;
			}
		}
	}
	printf("%d",paixu[0]);
	 
}
