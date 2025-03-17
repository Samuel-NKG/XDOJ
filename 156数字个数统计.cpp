#include<stdio.h>
int main()
{
	int b;
	int a=100; 
	for(a=100;100<=a&&a<=500;a++){
		if(a%7==0||a%11==0){
			if(a%77!=0){
			b++	;}
		}
	}
	printf("%d",b);
	return 0;
 } 
