#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

  //����ĸ�ϰ
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

// ��ά�����ʹ��

//int main()
//{
//  int arr[][5]={1,2,3,4,5,66,77,2,7,2,11,145}; //����ȫ��ʼ����Ԫ�ظ�������
//  //������һ��15��Ԫ��  (3��5��)
//  // ��һ�У�1 2 3 4 5
//  // �ڶ��У�66 77 2 7 2
//  // �����У�11 145 0 0 0
//  int sz =sizeof(arr)/sizeof(arr[0][0]);  //ȷ���ܵ�Ԫ�ظ���
//  int row= sz/5;                          //ȷ������
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

//�ṹ��Ķ���ͳ�ʼ��

// struct Student   // ���ṹ��ؼ���  �ṹ���ǩ�� ��ɽṹ������
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
//	struct Student S={"С��",22,"13445555","��"}; // ����һ���ֲ��Ľṹ�����
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
// }S1,S2,S3,S4;  //����������ȫ�ֵĽṹ�����
//
//int main()
//{
// struct Student S={"С��",22,"13445555","��"};
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
// }Stu;  //�ṹ�������� Stu
//
//int main()
//{
//    Stu S1={"С��",22,"13445555","��"};//����ֲ�����S1����ʼ��
//
//  printf("%s\n",S1.name);
//  printf("%d\n",S1.age);
//  printf("%s\n",S1.tele);
//  printf("%s\n",S1.sex);
//
//return 0;
//}



//�ṹ���ԱҲ�����������ṹ��
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

// �ṹ�������������(��ֵ����/��ַ����)

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
//	struct Stu S ={"С��",23,"18736678887","��"};
//	print1(S);  //��һ�ַ�ʽ:
//	print2(&S); //�ڶ��ַ�ʽ :��ѡ
//
//return 0;
//}

//�ṹ�崫��ʱҪ��ѡ���ṹ���ַ����
//ԭ��  �������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ�
//�½���
//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��




































