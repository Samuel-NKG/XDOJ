#include <stdio.h>
int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	int o[100][100];
	int i,j;
	for(i=0;i<100;i++)
	for(j=0;j<100;j++)
	o[i][j]=0;//��ʼ��һ�²����׳������Ҹ�������жϴ�����������ֹԽ��
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&o[i][j]);
	int len,T,max;
	for(i=0;i<m;i++)
	{
		max=0;T=0;len=0;//һ��Ҫ��len=0��ԭ�����
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
					len=0;//����ζ��ֻ��ɨ�������1�Ժ�len�Żᱻ���㣬�������һ�����һ����
                            //��1������ģ�len�Ͳ��ᱻ���㣬����Ӧ���ڿ�ͷ�ٹ���һ��
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
