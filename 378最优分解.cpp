#include <stdio.h>
int main()
{
	int a=1;
	int er[21];
	er[0]=1;
	for(a=1;a<21;a++){
		er[a]=2*er[a-1];//��2�Ĵη��������飨2��n�η�Ϊnum[n]�� 
	}
	int b;
	scanf("%d",&b);
	if(b%2==1){
		printf("-1");//����ȫ����-1��� 
	}
	else{
		while(b>=0){
		for(int c=20;c>0;c--){
			if(b-er[c]>=0&&b-er[c+1]<=0){
				printf("%d ",er[c]);
				b-=er[c];//�ҵ���Χ�����Ķ��η�������ȥ���ظ����� 
				}
			}
		}
	}
	return 0;
 } 
