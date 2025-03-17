#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int shuzu[31];
	for(int b=0;b<a;b++){
		scanf("%d",&shuzu[b]);
	}
	int d=0;
	for(int c=0;c<a-2;c++){
		if(shuzu[c]+shuzu[c+1]>shuzu[c+2]&&shuzu[c+2]+shuzu[c+1]>shuzu[c]&&shuzu[c]+shuzu[c+2]>shuzu[c+1]){
			d++;
		}
	}
	printf("%d",d);
	return 0;
}
