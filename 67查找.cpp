#include<stdio.h> 
int main()
{
	int a,c;
	scanf("%d %d",&a,&c);
	int b=0;
	int number[100];
	int x;
	while(b<a){
		scanf("%d",&x);
		number[b]=x;
		b++;
	}
	int d=0,e=0;
	while(d<a){
		if(c==number[d]){
			printf("%d ",d);
			e++;
		   }
		d++;
	}
	if(e==0){
		printf("-1");
	}
}

