#include<stdio.h>
#include<string.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
 } 
int main()
{
	int a=1;
	int b=0;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d ",a,b);
	return 0;
}
