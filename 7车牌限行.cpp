#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d=c%10;
	if(a>5){
		printf("%d no",d);
	}
	else{
		if(b<200){
			printf("%d no",d);
		}
		else if(b>=200&&b<400){
			if(a==1) {
				if(d==1||d==6){
					printf("%d yes",d);
				}
				else{
					printf("%d no",d);
				}
			}
			if(a==2) {
				if(d==2||d==7){
					printf("%d yes",d);
				}
				else{
					printf("%d no",d);
				}
			}
			if(a==3) {
				if(d==3||d==8){
					printf("%d yes",d);
				}
				else{
					printf("%d no",d);
				}
			}
			if(a==4) {
				if(d==4||d==9){
					printf("%d yes",d);
				}
				else{
					printf("%d no",d);
				}
			}
			if(a==5) {
				if(d==5||d==0){
					printf("%d yes",d);
				}
				else{
					printf("%d no",d);
				}
			}
			}
		else{
			if(a==1||a==3||a==5){
				if(d==1||d==3||d==5||d==7||d==9)
				{
					printf("%d yes",d);
				}
				else{
					printf("%d no",d);
				}
			}
			else{
				if(d==2||d==4||d==6||d==8||d==0)
					{
					printf("%d yes",d);
				}
				else{
					printf("%d no",d);
				}
			}
			}
		}
	}
