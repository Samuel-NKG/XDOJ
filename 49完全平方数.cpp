#include<stdio.h> 
#include<math.h> 
int main()
{
	int a;
	scanf("%d",&a);
	float c=sqrt(a);
	int b=c;
	if (b==c){
		printf("%d",b);
	}
	else{
		printf("no");
	}
	return 0;
}
