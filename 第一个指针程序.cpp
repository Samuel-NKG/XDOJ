#include<stdio.h>
//#include<string.h>
void minmax(int a[],int ,int *b,int *c);
int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,12,8,21};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	return 0;
 } 
 
 void minmax(int a[],int len,int *min,int *max)//a[]是一个指针，长了个数组的外表 
 {
 	int i;
 	*min=*max=a[0];
 	for(i=1;i<len;i++){
 		if(a[i]<*min){
 			*min=a[i];
		 }
		 if(a[i]>*max){
		 	*max=a[i];
		 }
	 }
 }
