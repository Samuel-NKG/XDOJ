#include <stdio.h>
int main()

{
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	if(a>b) {
		int z=a;
		a=b;
		b=z;
	}
	int d=0;
	int e=0;
	int f=0;
	for(int c=a;c<=b;c++){
		if(c%3==0){
			d++;
		}
		if(c%4==0){
			e++;
		}
		if(c%10==5){
			f++;
		}
	}
	int g=e%d;
	int h=f%d;
	int i=f%e;
	int max=g;
	if(max<h){
		if(h<g){
			max=g;
		}
		else{
			max=h;
		}
	}
	else if(max<g){
		if(h<g){
			max=g;
		}
		else{
			max=h;
		}
	}                   
	printf("%d %d %d\n%d",d,e,f,max);
	return 0;
}
