#include<stdio.h>
int main()
{
	int shuzu[1000];
	for(int a=0;a<1000;a++){
		shuzu[a]=3*(a-1)*(a-1)+2*(a-1)+1;
	}
	int m;
	scanf("%d",&m);
	int d=m;
	int sumeven=0;
	int sumodd=0;
	for(int b=0;b<m;b++){
		if(shuzu[b]%2==0&&shuzu[b]>100){
			sumeven+=shuzu[b];
		}
		else{
			m++;
		}
	}
	for(int c=0;c<d-1;c++){
		if(shuzu[c]%2==1&&shuzu[c]>100){
			sumodd+=shuzu[c];
		}
		else{
			d++;
		}
	}
	printf("%d %d",sumeven,sumodd);
	return 0;
 } 
