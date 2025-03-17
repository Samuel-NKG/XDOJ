#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int r=n*n;
	int j=0;
	int o=0;
	int s=0;
	for (int i=n;i<=r;i++){
		if(i%2==1){
			j++;
		}
		if(i%2==0){
			o++;
		}
		if(i%4==0&&i%3!=0){
			s++;
		}
	}
	printf("%d %d %d\n%d",j,o,s,j+o);
	return 0;
 } 
