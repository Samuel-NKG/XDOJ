#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=0,d=0;
	int num[100][100];
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			scanf("%d",&num[c][d]);
		}
	}
	int js[4];
	int e=0,f=0,g=0,max=0,right=0;
	for(e=0;e<a;e++){
		for(f=0;f<b;f++){
			if(num[e][f]==1){
				g++;
				if(g>max){
					max=g;
					right=f;
				}
			}
			else{
				g=0;
			}
		}
		if(max==0){
			printf("-1 -1\n");
		}
		else{
			printf("%d %d\n",right-max+1,right);
			//printf("%d %d\n",max,right);
		}
		max=0;
		right=0;
		g=0;
	}
	return 0;
 } 
