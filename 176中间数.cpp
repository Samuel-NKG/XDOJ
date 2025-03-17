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
	int e=0;
	for(int c=0;c<a;c++){
		e=0;
		for(int d=0;d<a;d++){
			if(number[c]<number[d]){
				e++;
			}
			else if(number[c]>number[d]){
				e--;
			}
		}
		if(e==0){
			printf("%d",number[c]);
			break;
		}
	} 
	if(e!=0){
		printf("-1");
	}
	return 0;
}
