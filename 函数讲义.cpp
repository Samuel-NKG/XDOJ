#include <stdio.h>
int swap(int ,int );
void sum(int ,int );//ԭ������  ���Բ����������ƣ���Ҫ�������������� 
//û�в����Ļ�������Ĭ��Ϊint������float�ᱬը
//�����ڲ���Ƕ�׶��� �������ڲ�����һ�ζ��庯�������ǿ��������һ�������������� 
int main(void)//mainҲ��һ��������return 0������������ģ�����0��ʾ����������������������ֵ�󲿷ֱ�ʾ������� 
{
	int a=1;
	int b=2;
	swap(a,b);
	sum(15,25);
	//printf("%d %d\n",a,b);
	return 0;
}
int swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	printf("%d %d\n",a,b);
}
void sum(int begin,int end)//void��˼��û�з���ֵ��int����˼���з���ֵ 
{
	int i;
	int sum=0;
	for (i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d��%d�ĺ���%d\n",begin,end,sum);
}

