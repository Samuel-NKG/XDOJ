#include<stdio.h>
#include<string.h>
int main()
{
	char m[4];
	char s[51];
	gets(m);
	gets(s);
	int a=strlen(m);
	int b=strlen(s);
	int j=0;
	for(int d=0;d<b;d++){
		int e=d;
		for(int c=0;c<a;c++){
			int h=0;
			if(m[c]==s[e]){
				h++;
				e++;
			}
			else{
				break;
			}
			if(c==a-1){
				j++;
			}
		}
	}
	printf("%d",j);
	return 0;
}
