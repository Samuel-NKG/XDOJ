#include<stdio.h>
#include<string.h>
int main()
{
	char a[21];
	char b[21];
	gets(a);
	gets(b);
	int a1=strlen(a);
	int b1=strlen(b);
	int m=0;
	int d=0,e=0;
	for(int i=0;i<a1;i++){
		if(a[i]==b[0]){
			d=i;
			e=i;
			for(m=0;m<b1;m++){
				if(a[d]!=b[m]){
					break;
				}
				d++;
			}	
		}
		if(m==b1){
			break;
		}
	}
	//printf("%d %d",m,b1);
	if(m==b1){
		printf("%d",e+1);
	}
	else{
		printf("No!");
	}
	return 0;
 } 
