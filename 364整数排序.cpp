#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	int number[100];
	int mark[100]; 
	int x;
	for(b=0;b<a;b++){
		scanf("%d",&x);
		number[b]=x;
		mark[b]=b;
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
				int q=mark[j];
				mark[j]=mark[j+1];
				mark[j+1]=q;
			}
		}
	}
	printf("%d %d %d",a,number[a-1],mark[a-1]);
	return 0;
}
