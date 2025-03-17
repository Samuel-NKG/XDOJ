#include<stdio.h>
#include<string.h>
int main()
{
	char a[21];
	char b[21];
	int c;
	gets(a);
	gets(b);
	scanf("%d",&c);
	int a1=strlen(a);
	int b1=strlen(b);
	for(int i=0;i<c;i++){
		printf("%c",a[i]);
	}
	for(int i=0;i<b1;i++){
		printf("%c",b[i]);
	}
	for(int i=c;i<a1;i++){
		printf("%c",a[i]);
	}
	return 0;
 } 
