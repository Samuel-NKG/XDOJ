#include <stdio.h> 
int main()
{
	int a;
	scanf("%d",&a);
	int b=a/100;
	int d=a%10;
	int c=(a-d)/10-10*b;
	//if(b>=c&&b>=d){
	//	if(c>=d){
			printf("%d %d %d",b,c,d);
	//	}
	//	else{
	//		printf("%d %d %d",b,d,c);
	//	}
	//}
	//else if(c>b&&c>=d){
	//	if(b>=d){
	//		printf("%d %d %d",c,b,d);
	//	}
	//	else{
	//		printf("%d %d %d",c,d,b);
	//	}
	//}
	//else if(d>b&&d>c){
	//	if(c>=b){
	//		printf("%d %d %d",d,c,b);
	//	}
	//	else{
	//		printf("%d %d %d",d,b,c);
	//	}
	//}
	return 0;
}
