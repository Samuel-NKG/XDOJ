# include<stdio.h>
int main()
{
	int a,b;
	int min;
	scanf("%d %d",&a,&b);
	if(a==0){
		printf("%d",b);
	}
	else if(b==0){
		printf("%d",a);
	}
	else{
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	int ret;
	int i;
	for(i=1;i<=min;i++){
		if (a%i==0){
			if(b%i==0){
				ret=i;
			}
		}
	
	}printf("%d",ret);
}
 } 
