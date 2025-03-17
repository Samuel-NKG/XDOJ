#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	char de[100]={};
	int j=0;
	for(int b=0;b<a;b++){
		int c;
		scanf("%d",&c);
		int shuzu[20][20];
		for(int d=0;d<c;d++){
			for(int e=0;e<c;e++){
			    scanf("%d",&shuzu[d][e]);
			}
		}
		int h=0;
		for(int f=1;f<c;f++){
			for(int g=0;g<f;g++){
			    if(shuzu[f][g]==0){
			    	h++;
				}
			}
		}
		if(2*h==c*(c-1)){
			de[b]={'YES'};
		}
		else{
			de[b]={'NO'};
		}
		j++;
	}
	for(int i=0;i<j;i++){
		printf("%c",de[i]);
	}
}
