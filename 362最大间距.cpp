#include<stdio.h>
int main()
{
	int a;
	int b=1;
	int number[100];
	while (b<=10){
		scanf("%d",&a);
		number[b]=a;
		b++;
	} 
	int c=1;
	int min=number[1];
	for(c=1;c<=10;c++){
		if(min>number[c]){
			min=number[c];
		}
		else{
			min=min;
		}
	}
	int d=1;
	int max=number[1];
	for(d=1;d<=10;d++){
		if(max<number[d]){
			max=number[d];
		}
		else{
			max=max;
		}
	}
	printf("%d",max-min);
 } 
