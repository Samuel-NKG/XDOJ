#include <stdio.h>
#include <string.h>
//int hanshu(int *a,int *b);
 int hanshu(int *a,int *b,int *c)
 {
 	//*a=80; 
	//*c=*a+*b;
	return 160; 
 }
 int main()
{
	int i=6;
	int d;
	d=hanshu(&i,&i,&d);
	printf("%d",d);
	return 0;
 } 
