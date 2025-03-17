#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int shuzu[a];
	for(int b=0;b<a;b++){
		scanf("%d",&shuzu[b]);
	}
	int b=a/2;
	int d=0;
	int sz[a];
	if(a%2==1){
		for(int c=b+1;c<a;c++){
			sz[d]=shuzu[c];
			d++;
		}
		sz[d]=shuzu[d];
		d++; 
		for(int e=0;e<b;e++){
			sz[d]=shuzu[e];
			d++;
		}
	}
	else if(a%2==0){
		for(int c=b;c<a;c++){
			sz[d]=shuzu[c];
			d++;
		}
		for(int e=0;e<b;e++){
			sz[d]=shuzu[e];
			d++;
		}
	}
	for(int f=0;f<a;f++){
		printf("%d ",sz[f]);
	}
	return 0;
 } 
