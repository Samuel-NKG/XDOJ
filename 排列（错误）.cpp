#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int number[n];
	int b=1;
	int x;
	for(b=1;b<=n;b++){
		scanf("%d",&x);
		number[b]=x;
	}
	int c=1;
	int min=number[1];
	for(c=1;c<=n;c++){
		if(min>number[c]){
			min=number[c];
		}
		else{
			min=min;
		}
	}
	int d=1;
	int max=number[1];
	for(d=1;d<=n;d++){
		if(max<number[d]){
			max=number[d];
		}
		else{
			max=max;
		}
	}
	int e=min;
	int num[n];
	int q=1,w=1;
	for(e=min;e<=max;e++){
		if(e=number[q]){
			num[w]=number[q];
			q++;
			w++;	
		}
	}
	int r=1;
	while(r<=n){
		printf("%d",num[r]);
		r++;
	}
}
