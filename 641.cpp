#include<stdio.h>
int main()
{
	int a,b,c,d,e,f; 
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	int mg[a+1][b+1];
	for(int g=0;g<a;g++){
		for(int h=0;h<b;h++){
			scanf("%d",&mg[g][h]);
		}
	}
	int time=0;
	int y=d;
	int x=c;
	if(c<=e&&d<=f) {
		while(y<=f&&x<=e){
			if(mg[x+1][y]==0&&x<=e){
				time+=1;
				x+=1;
				if((mg[x+2][y]==1&&mg[x+1][y+1]==1)||x>e){
				time-=1;
				x-=1;
				mg[x+1][y]=1;
				}
				//printf("a[%d,%d] %d\n",x,y,time);
				continue;
			}
			if(mg[x][y+1]==0&&y>=0){
				time+=1;
				y+=1;
				if((mg[x][y+2]==1&&mg[x+1][y+1]==1)||y>f){
				time-=1;
				y-=1;
				mg[x][y+1]=1;
				}
				//printf("b[%d,%d] %d\n",x,y,time);
				continue;
			}
			if(mg[x+1][y]==0&&x<=e){
				time+=1;
				x+=1;
				if((mg[x+2][y]==1&&mg[x+1][y+1]==1)||x>e){
				time-=1;
				x-=1;
				mg[x+1][y]=1;
				}
				//printf("a[%d,%d] %d\n",x,y,time);
				continue;
			}
			if(y==f&&x==e){
				break;
			}
		}
		printf("%d",time);
	}
	return 0;
}
