#include <stdio.h>
#include <string.h>
int main(){
	char s[256]={0};
	int len;
	gets(s);
	len = strlen(s);
	int i,count = 0;
	int r[200],find = 1;
	for(i=0;i<len;i++){
		if(s[i] == '-'){
			r[count] = s[i+1];
			count++;
			find = 0;
			}
		}
	
	int t,j;
	for(i=0;i<count-1;i++){
		for(j=i+1;j<count;j++){
			if(r[i]>r[j]){
				t = r[i];
				r[i] = r[j];
				r[j] = t;
			}
		}
	}
	for(i=0;i<count;i++){
		if(r[i] != r[i+1]){
		printf("-%c ",r[i]);
		}
	}
	if(find!=0){
		printf("no");
	}
	//if(s) 
	return 0;
}
