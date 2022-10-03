#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

  //数组的复习
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i;
//	for(i=0;i<sz;++i)
//	{
//	
//	printf("%d ",arr[i]);
//	
//	}
//return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i;
//	for(i=0;i<sz;++i)
//	{
//	
//	printf("&arr[%d]=%p\n",i,&arr[i]);
//	
//	}
//return 0;
//}

// 二维数组的使用

//int main()
//{
//  int arr[][5]={1,2,3,4,5,66,77,2,7,2,11,145}; //不完全初始化，元素个数不定
//  //该数组一共15个元素  (3行5列)
//  // 第一行：1 2 3 4 5
//  // 第二行：66 77 2 7 2
//  // 第三行：11 145 0 0 0
//  int sz =sizeof(arr)/sizeof(arr[0][0]);  //确定总的元素个数
//  int row= sz/5;                          //确定行数
//  int i,j;
//  printf("sz= %d\n",sz);  //sz=15
//  for(i=0;i<row;i++)
//  {
//    for(j=0;j<5;j++)
//	{
//		printf("arr[%d][%d]= %d\n",i,j,arr[i][j]);
//		printf("&arr[%d][%d]= %p\n",i,j,&arr[i][j]);
//	}
//  
//  
//  }
//return 0;
//}

//结构体的定义和初始化

// struct Student   // （结构体关键字  结构体标签） 组成结构体类型
// {
//  char name[20];
//  short age;
//  char  tele[15];
//  char sex[4];
//
// };        
//
//int main()
//{
//	struct Student S={"小吴",22,"13445555","男"}; // 定义一个局部的结构体变量
//
//  printf("%s\n",S.name);
//  printf("%d\n",S.age);
//  printf("%s\n",S.tele);
//  printf("%s\n",S.sex);
//
//return 0;
//}

// struct Student 
// {
//  char name[20];
//  short age;
//  char  tele[15];
//  char sex[4];
//
// }S1,S2,S3,S4;  //定义了三个全局的结构体变量
//
//int main()
//{
// struct Student S={"小吴",22,"13445555","男"};
//
//  printf("%s\n",S.name);
//  printf("%d\n",S.age);
//  printf("%s\n",S.tele);
//  printf("%s\n",S.sex);
//
//return 0;
//}



//typedef struct Student 
// {
//  char name[20];
//  short age;
//  char  tele[15];
//  char sex[4];
//
// }Stu;  //结构体类型名 Stu
//
//int main()
//{
//    Stu S1={"小吴",22,"13445555","男"};//定义局部变量S1并初始化
//
//  printf("%s\n",S1.name);
//  printf("%d\n",S1.age);
//  printf("%s\n",S1.tele);
//  printf("%s\n",S1.sex);
//
//return 0;
//}



//结构体成员也可以是其他结构体
//struct S
//{
// int a;
// char arr[12];
// char ch ;
// double num;
//
//};
//struct T
//{
// short a;
// char arr[10];
// struct S s;
// char*p;
//};
//
//int main()
//{   char arr1[11]={65,67,79};
//	struct T t ={14,"charact",{40,"15879663155",'E',3.98},arr1};
//	printf("%d\n",t.a);
//	printf("%s\n",t.arr);
//	printf("%d\n",t.s.a);
//	printf("%s\n",t.s.arr);
//	printf("%c\n",t.s.ch);
//	printf("%lf\n",t.s.num);
//	printf("%s\n",t.p);
//
//
//return 0;
//}

// 结构体变量函数传参(传值调用/传址调用)

//typedef struct Stu
//{
// char name[20];
// short age;
// char tele [12];
// char sex [5];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name:%s\n",tmp.name);
//	printf("age: %d\n",tmp.age);
//	printf("tele:%s\n",tmp.tele);
//	printf("sex: %s\n",tmp.sex);
//}
//void print2(Stu *p )
//{
// 	printf("name:%s\n",p->name);
//	printf("age: %d\n",p->age);
//	printf("tele:%s\n",p->tele);
//	printf("sex: %s\n",p->sex);
//
//}
//int main()
//{
//	struct Stu S ={"小吴",23,"18736678887","男"};
//	print1(S);  //第一种方式:
//	print2(&S); //第二种方式 :首选
//
//return 0;
//}

//结构体传参时要首选：结构体地址传参
//原因：  函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的
//下降。
//结论：结构体传参的时候，要传结构体的地址。




































