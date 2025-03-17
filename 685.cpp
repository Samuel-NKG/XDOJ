#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	char s1[101];
	gets(s);
	int n=strlen(s);
	int n1=n;
	int b=0;
	for(int a=0;a<n;a++){
		if(s[a]=='*'){
			n1--;
			continue;
		}
		s1[b]=s[a];
		b++;
	}
	for(int i=0;i<n1;i++){
		for(int j=0;j<n1-1-i;j++){
			if(s1[j]>s1[j+1]){
				char p=s1[j];
				s1[j]=s1[j+1];
				s1[j+1]=p;
			}
		}
	}
	//printf("%d %d ",b,n1); 
	for(int c=0;c<n1;c++){
		printf("%c",s1[c]);
	}
	//printf("%d",n);
	return 0;
 } 
