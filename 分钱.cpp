#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a/10;
	int e=0;
	int d=0;
for(a=a;a>=0;a-=5){
	for(b=a/10;b>=0;b--){
		for(d=0;d<=a;d++){
			if(a-(10*b+5*d+a%5)==0){
				//printf("%d %d",b,d);
				e++;
			}
		}
		d=0;
	}
}
	printf("%d",e);
	return 0;
 } 
