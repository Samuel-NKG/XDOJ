#include<stdio.h>
int main()
{
	int n;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	double average,sum;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum +=arr[i];
		if(arr[i]>=0&&arr[i]<=50){
		c1++;
	}else if(arr[i]>=51&&arr[i]<=100){
		c2++;
	}else if(arr[i]>=101&&arr[i]<=150){
		c3++;
	}else if(arr[i]>=151&&arr[i]<=200){
		c4++;
	}else if(arr[i]>=201&&arr[i]<=300){
		c5++;
	}else if(arr[i]>300){
		c6++;
	}
	}
	average=sum/n;
	printf("%.2f\n",average);
	printf("%d %d %d %d %d %d",c1,c2,c3,c4,c5,c6);
	return 0;
}
