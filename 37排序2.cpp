#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	int num[100];
	int x;
	for(b=0;b<a;b++){
		scanf("%d",&x);
		num[b]=x;
	}
	int d=0,e=0,f=0;
	int ou[100];
	int ji[100];
	for(d=0;d<a;d++){
		if(num[d]%2==0){
			ou[e]=num[d];
			e++;
		}
		else{
			ji[f]=num[d];
			f++;
		}
	}
	int c=0;
	for(int i=0;i<e;i++){
		for(int j=0;j<e-1-i;j++){
			if(ou[j]<ou[j+1]){
				int p=ou[j];
				ou[j]=ou[j+1];
				ou[j+1]=p;
				c++;
			}
		}
	}
	int g=0;
	for(int s=0;s<f;s++){
		for(int h=0;h<f-1-s;h++){
			if(ji[h]<ji[h+1]){
				int q=ji[h];
				ji[h]=ji[h+1];
				ji[h+1]=q;
				g++;
			}
		}
	}
	int i=e,k=0;
	for(i=e;i<e+f;i++){
		ou[i]=ji[k];
		k++;
	}
	int m=0;
	for(m=0;m<e+f;m++){
		printf("%d ",ou[m]);
	}
}
