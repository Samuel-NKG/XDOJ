#include<stdio.h>
int main()
{
	int a,z;
	scanf("%d %d",&a,&z);
	int b=0;
	int number[100];
	int x;
	for(b=0;b<a;b++){
		scanf("%d",&x);
		number[b]=x;
	}
	int y=0;
	int num[100];
	int p;
	for(y=0;y<z;y++){
		scanf("%d",&p);
		num[y]=p;
	}
	int u=a,e=0;
	while(u<=a+z-1&&e<z){
		number[u]=num[e];
		u++&&e++; 
	}
	int c=0;
	for(int i=0;i<a+z;i++){
		for(int j=0;j<a+z-1-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
				c++;
			}
		}
	}
	int r=0;
	for(r=0;r<a+z;r++){
		printf("%d ",number[r]);
	}
}
