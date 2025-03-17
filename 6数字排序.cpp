#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int number[1001];
	int x;
	for(a=0;a<n;a++){
		scanf("%d",&x);
		number[a]=x;
	}
	int b=0;
	int sum[1001];
	for(b=0;b<n;b++){
		sum[b]=number[b]%10+((number[b]-number[b]%10)/10)%10+((number[b]-number[b]%100)/100)%10+((number[b]-number[b]%1000)/1000)%10+((number[b]-number[b]%10000)/10000)%10;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(sum[j]<sum[j+1]){
				int p=number[j];
				number[j]=number[j+1];
				number[j+1]=p;
				int q=sum[j];
				sum[j]=sum[j+1];
				sum[j+1]=q;
			}
			
			else if(sum[j]==sum[j+1]){
				if(number[j]>number[j+1]){
				int s=number[j];
				number[j]=number[j+1];
				number[j+1]=s;
				int k=sum[j];
				sum[j]=sum[j+1];
				sum[j+1]=k;
				}
			}
			 
		}
	}
	for(int t=0;t<n;t++){
		printf("%d %d\n",number[t],sum[t]);
	}
}
	
