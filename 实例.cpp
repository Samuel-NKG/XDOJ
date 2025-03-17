#include<stdio.h>
void force(int *a,int *b,int *c){
	*c=(*a+*b)/2;
}
int main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	force(&a,&b,&c);
	printf("%d",c);
	return 0;
}
