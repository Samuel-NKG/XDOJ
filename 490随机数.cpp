#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d",&x,&z);
	int a=0,b=0;
	for(a=0;a<=z;a++){
	if(a<z-1){	
		scanf("%d",&y);
			if(y>x){
				printf("Too big\n");
			}
			else if(y<x&&y>=0){
				printf("Too small\n");
			}
			else if(y<0){
				b++;
				break;
			}
			else{
				break;
			}
		}
	else if(a==z-1){	
		scanf("%d",&y);
			if(y>x){
				a++; 
			}
			else if(y<x&&y>=0){
				a++;
			}
			else if(y<0){
				b++;
				break;
			}
			else{
				break;
			}
		}
	else{
		break;
	}		
	}

	if(a<3&&b==0&&a>=1&&a<z){
		printf("Lucky You!\n");
	}
	else if(a==0&&b==0&&a<z){
		printf("Bingo!\n");
	}
	else if(b==1&&a<z){
		printf("Game Over\n");
	}
	else if(a>=3&&b==0&&a<z){
		printf("Good Guess!\n");
	}
	else if(a=z){
		printf("Game Over\n");
	}
	return 0;
  }  
