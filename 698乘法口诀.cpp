#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int shuzu[200];
	shuzu[0]=a;
	shuzu[1]=b;
	int e=2;
	for(int d=0;d<100;d++){
		if(shuzu[d]*shuzu[d+1]<10){
			shuzu[e]=shuzu[d]*shuzu[d+1];
			e++;
		}
		else{
			int f=shuzu[d]*shuzu[d+1]/10;
			shuzu[e]=f;
			shuzu[e+1]=shuzu[d]*shuzu[d+1]%10;
			e+=2;
		}
	}
	for(int g=0;g<c;g++){
		printf("%d ",shuzu[g]);
	}
	return 0;
}
