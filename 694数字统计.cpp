#include<stdio.h>
int main()
{
	int shuzu[300];
	shuzu[0]=0;
	shuzu[1]=2;
	shuzu[2]=3;
	for(int a=3;a<300;a++){
		shuzu[a]=(a-1)*(a-1)+3*(a-2)+1;
	}
	int m,k;
	scanf("%d %d",&m,&k);
	int b=0,c=0,d=0;
	for(int e=1;e<=k;e++){
		if(shuzu[e]%m==0){
			b++;
		}
		else if(shuzu[e]%m==1){
			c++;
		}
		else{
			d++;
		}
	}
	printf("%d %d %d",b,c,d);
	return 0;
}
