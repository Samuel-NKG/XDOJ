#include<stdio.h>

typedef struct Birthday{
	int year;//4bit
	int month;//4bit
	int day;//4bit
}stu3;//�ṹ�����Ƕ��,�ṹ�����ƽ��ű������� 

//typedef struct Stu{
struct Stu{
	int id;//ѧ��
	char *name;
	int age; //���� 
	float score;
	Birthday birthday;//Ƕ�����սṹ�� 
	//�����ɼ� 
};//�����ṹ�� 

struct {
	int id;//ѧ��
	char *name;
	int age; //���� 
	float score;
	//�����ɼ� 
}stu1,stu2;//���������ṹ�壬{}��Ҫ�ӱ������������� �������ṹ��һ��ֻ��һ�� 

struct empty{
	//TODO
}; //�սṹ�� 

//      typedef struct Stu Stu;//struct Stu������Stu���� 

void print(Stu *stu,int len){
	for(int i=0;i<len;++i){
	printf("ѧ�ţ�%d\t",(stu+i)->id);		
	}
}

int main(){
	
	Stu students[2]={
		{1001,"dyp",27,100,{2000,12,30}},
		{1002,"dyp",27,100,{2000,12,30}}
	};
	//Stu stu1={1001,"dyc",27,100,{2000,12,30}};
	//Stu stu2={1002,"dyc",27,100,{2000,12,30}};
	//printf("ѧ�ţ�%d",stu1.id);
	//int float char double long���������ռ���ڴ� 
	//	stu.birthday.year//������ 
	//print(stu2);
	Stu *p=&students[0];
	print(students,sizeof(students)/sizeof(students[0]));
	//p=&stu2;
	//print(p);
	
	//printf("%d\n",sizeof(Stu));
	return 0;
}
 
