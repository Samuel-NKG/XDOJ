#include<stdio.h>
int main() 
{
	int a;
	scanf("%d",&a);
	int b=0,c=0;
	int num[20][20]={0};
	for(b=0;b<a;b++){
		for(c=0;c<a;c++){
			scanf("%d",&num[b][c]);
		}
	}
	int d=2;
	int number[20]={0};
	for(int e=0;e<a;e++){
		for(int f=0;f<a;f++){
			number[d]+=num[e][f];
		}
		d++;
	}
	for(int h=0;h<a;h++){
		for(int k=0;k<a;k++){
			number[d]+=num[k][h];
		}
		d++;
	}
	for(int f=0;f<a;f++){
		number[0]+=num[f][f];
	}
	for(int g=0;g<a;g++){
		number[1]+=num[g][a-g-1];
	}
	for(int i=0;i<2*a+2;i++){
		for(int j=0;j<2*a+1-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
			}
		}
	}
	for(int l=2*a+1;l>=0;l--){
		printf("%d ",number[l]);
	}
	return 0;
}
