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
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
			}
		}
	}
	int c=0;
	int sum=0;
	while(c<a) {
		if(number[c]==number[c+1]||number[c]==number[c-1]){
			c++;
			continue;
		}
		sum+=number[c];
		c++;
	}
	printf("%d",sum);
}
