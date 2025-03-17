#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int num[a][b];
	int xs[100]={0};
	for(int c=0;c<a;c++){
		for(int d=0;d<b;d++){
			scanf("%d",&num[c][d]);
		}
	}
	for(int e=0;e<16;e++){
		for(int f=0;f<a;f++){
			for(int g=0;g<b;g++){
				if(num[f][g]==e){
					xs[e]++;
				}
			}
		}
	}
	for(int f=0;f<16;f++){
		if (xs[f]!=0) {
			printf("%d %d\n",f,xs[f]);
		}
		else{
			continue;
		}
	}
	return 0;
} 
