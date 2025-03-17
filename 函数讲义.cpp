#include <stdio.h>
int swap(int ,int );
void sum(int ,int );//原型声明  可以不含变量名称，但要包含参数的类型 
//没有参数的话括号内默认为int，输入float会爆炸
//括号内不能嵌套定义 （函数内不能再一次定义函数，但是可以添加另一个函数的声明） 
int main(void)//main也是一个函数，return 0返回是有意义的，返回0表示程序正常结束，返回其他值大部分表示程序错误 
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
void sum(int begin,int end)//void意思是没有返回值，int的意思是有返回值 
{
	int i;
	int sum=0;
	for (i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}

