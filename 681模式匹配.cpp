#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int shuzu[a];
	for(int b=0;b<a;b++){
		scanf("%d",&shuzu[b]);
	}
	int d=0;
	for(int c=0;c<a-2;c++){
		if(shuzu[c]==3&&shuzu[c+1]==5&&shuzu[c+2]==7){
			d++;
		}
	}
	printf("%d",d);
	return 0;
}
