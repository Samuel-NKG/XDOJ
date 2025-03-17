#include<stdio.h>
struct stu{
	int year;
	int month;
	int date;
	int days;
};
int main()
{
	stu list;
	list.days=0;
	scanf("%d/%d/%d",&list.year,&list.month,&list.date);
	for(int a=1;a<list.month;a++){
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
			list.days+=31;
		}
		else if(a==4||a==6||a==9||a==11){
			list.days+=30;
		}
		else if(list.year%4==0&&a==2){
			list.days+=29;
		}
		else if(list.year%4!=0&&a==2){
			list.days+=28;
		}
	}
	printf("%d\n%d\n%d\n%d\n",list.year,list.month,list.date,list.date+list.days);
	return 0;
 } 
