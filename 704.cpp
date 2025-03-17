#include <stdio.h>
#include <string.h>
int main()
{
	char s[51];
	gets(s);
	int n=strlen(s);
	int sum=0;
	int r=0;
	for(int i=0;i<n;i++){
		if(s[i]<58&&s[i]>47){
			sum+=s[i]-48;
			r+=1;
		}
		else if(s[i]<71&&s[i]>64){
			sum+=s[i]-55;
			r+=1;
		}
		else if(s[i]<103&&s[i]>96){
			sum+=s[i]-87;
			r+=1;
		}
		else{
			sum+=0;
		}
	}
	if(r==0){
		printf("NO");
	}
	else{
		printf("%d",sum);
	}
	return 0;
}
