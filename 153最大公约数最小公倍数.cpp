#include<stdio.h>
int main()
{
	int a,b,min,c;
	scanf("%d %d",&a,&b);
	if(a<b){
		min=a;
	}
	else{
		min=b;
	}
	int i=1; 
	for(i=1;i<=min;i++){
		if (a%i==0){
			if(b%i==0){
				c=i;
			}
		}
	}
	int d=a*b/c;
	printf("���Լ��Ϊ��%d\n��С������Ϊ��%d",c,d);
	return 0;
}
