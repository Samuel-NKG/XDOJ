#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int number[100];
	int b=1,c=10;
	for(b=1;b<10;b++){
		if(a%c==a){
			break;
		}
		c*=10;
	}
	int d=0,sum=0;
	while(d<=b){
		number[d]=a%10;
		sum+=a%10;
		a=a/10;
		d++;
	}
	int e=0,g=b-1;
	while(e<b){
		if(number[e]!=number[g]){
		printf("no");
			break;
		}
		e++;
		g--;
		}
	if(e==b){
		printf("%d",sum);
	}
	return 0;
 } 
