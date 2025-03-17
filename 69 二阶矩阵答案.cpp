#include <stdio.h>
int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	int o[100][100];
	int i,j;
	for(i=0;i<100;i++)
	for(j=0;j<100;j++)
	o[i][j]=0;//初始化一下不容易出错，并且给后面的判断带来便利，防止越界
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&o[i][j]);
	int len,T,max;
	for(i=0;i<m;i++)
	{
		max=0;T=0;len=0;//一定要加len=0！原因见下
		for(j=0;j<n;j++)
		{
			if(o[i][j]==0)
			{				
				continue;
			}
			else if(o[i][j]==1&&o[i][j+1]==1)
			{
				len++;
			}
			else
			{
				len++;
				if(len>max)
				{
					max=len;
					T=j;
					len=0;//这意味着只有扫完最长连续1以后len才会被归零，但如果上一行最后一个连
                            //续1不是最长的，len就不会被归零，所以应该在开头再归零一次
				}			
			}		
		}
		if(max==0)
		{
			printf("%d %d\n",-1,-1);
		}
		else
		{
			printf("%d %d\n",T-max+1,T);
		}
		
	} 
	return 0;
}
