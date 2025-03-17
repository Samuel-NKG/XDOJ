#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d %d",&a,&b);
	c=a%400;
	e=a%100;
	d=a%4;
	if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
		printf("31");
	} 
	else if(b==4||b==6||b==9||b==11){
		printf("30");
	} 
	else{
		if(c==0){
			printf("29");
		}
		else{
			if(e==0){
				printf("28");
			}
			else{
				if(d==0){
					printf("29");
				}
				else{
					printf("28");
				}
			}
		}
	}
	return 0;
 } 
