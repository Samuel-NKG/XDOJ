#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int number[51];
	int sum=0;
	for(int b=0;b<a;b++){
		scanf("%d",&number[b]);
		sum+=number[b];
	}
	int jishu[51];
	for(int c=0;c<a;c++){
		jishu[c]=c;
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1-i;j++){
			if(number[j]>number[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
				int x=jishu[j];
				jishu[j]=jishu[j+1];
				jishu[j+1]=x; 
			}
		}
	}
	printf("%d %d %d %d %d",sum,number[a-1],jishu[a-1]+1,number[0],jishu[0]+1);
	return 0;
 } 
