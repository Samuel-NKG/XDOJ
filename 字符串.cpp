#include <stdio.h>
int length(char *p){
	int count =0;
	while(*p){
		p++;
		count++;
	}
	return count;
}
int main()
{
	char s[10000];
	gets(s);
	//printf("%d\n",sizeof(s)/sizeof(s[0]));
	printf("%d",length(s));
	return 0;
	
}
