#include <stdio.h>
int main()
{
	int a=1;
	int er[21];
	er[0]=1;
	for(a=1;a<21;a++){
		er[a]=2*er[a-1];//将2的次方填入数组（2的n次方为num[n]） 
	}
	int b;
	scanf("%d",&b);
	if(b%2==1){
		printf("-1");//奇数全都是-1输出 
	}
	else{
		while(b>=0){
		for(int c=20;c>0;c--){
			if(b-er[c]>=0&&b-er[c+1]<=0){
				printf("%d ",er[c]);
				b-=er[c];//找到范围内最大的二次方数，减去，重复运算 
				}
			}
		}
	}
	return 0;
 } 
