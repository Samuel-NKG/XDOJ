#include<stdio.h>

typedef struct Birthday{
	int year;//4bit
	int month;//4bit
	int day;//4bit
}stu3;//结构体可以嵌套,结构体名称接着变量名称 

//typedef struct Stu{
struct Stu{
	int id;//学号
	char *name;
	int age; //年龄 
	float score;
	Birthday birthday;//嵌套生日结构体 
	//……成绩 
};//声明结构体 

struct {
	int id;//学号
	char *name;
	int age; //年龄 
	float score;
	//……成绩 
}stu1,stu2;//声明匿名结构体，{}后要加变量名不是类型 ，匿名结构体一般只用一次 

struct empty{
	//TODO
}; //空结构体 

//      typedef struct Stu Stu;//struct Stu可以用Stu代替 

void print(Stu *stu,int len){
	for(int i=0;i<len;++i){
	printf("学号：%d\t",(stu+i)->id);		
	}
}

int main(){
	
	Stu students[2]={
		{1001,"dyp",27,100,{2000,12,30}},
		{1002,"dyp",27,100,{2000,12,30}}
	};
	//Stu stu1={1001,"dyc",27,100,{2000,12,30}};
	//Stu stu2={1002,"dyc",27,100,{2000,12,30}};
	//printf("学号：%d",stu1.id);
	//int float char double long定义变量不占用内存 
	//	stu.birthday.year//多层访问 
	//print(stu2);
	Stu *p=&students[0];
	print(students,sizeof(students)/sizeof(students[0]));
	//p=&stu2;
	//print(p);
	
	//printf("%d\n",sizeof(Stu));
	return 0;
}
 
