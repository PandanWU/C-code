#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�ṹ������� ���ֲ�ͬ��ʽ

//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char Sex[4];
//	
//};
//
//int main()
//{
//	struct Stu S ={"С��",23,"11112222333","��"};
//
//	printf("%s\n",S.name);
//	printf("%d\n",S.age);
//	printf("%s\n",S.tele);
//	printf("%s\n",S.Sex);
//
//
//   return 0;
//}


//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;
//
//int main()
//{
//	Stu S ={"haluo",24,"13443332134","����"};
//	printf("%s\n",S.name);
//	printf("%d\n",S.age);
//	printf("%s\n",S.tele);
//	printf("%s\n",S.sex);
//
// return 0;
//}

//���㺺���ַ�������:
//���ۣ������ַ�����ռ1���ַ����൱��2��Ӣ���ַ���

//int main()
//{
//	char arr[] ="abcde";
//	char Chinese_num[] = "С����"; // �ַ�������Ϊ 6
//	int i = 0;
//	int sz1 =sizeof(arr)/sizeof(arr[0]);
//	int sz2 = sizeof(Chinese_num)/sizeof(Chinese_num[0]);
//
//
//	printf("%d\n",strlen(Chinese_num)); // 6
//	printf("%d\n",sizeof(Chinese_num));//�ռ��Сռ7���ֽ�
//
//	printf("%d\n",strlen(arr)); // 5
//	printf("%d\n",sizeof(arr));//�ռ��Сռ6���ֽ�
//
//	for(i=0;i<sz1;i++)
//	{
//	printf("%c ",arr[i]);
//	
//	}
//	printf("\n");
//	for(i=0;i<sz2;i++)
//	{
//	printf("%c ",Chinese_num[i]);
//	
//	}
//	return 0;
//}

//�ṹ�嶨��ͳ�ʼ���Լ���Ա����

//typedef struct port 
//{
//  int x;
//  int y;
//  char num[15];
//  double sz;
//  short age;
//
//
//}Port;
//
//typedef struct Pin
//{
// char name[20];
// short num[10];   // ?
// double a[4];     // ?
// int arr[10];     // ?
// Port G;
//
//}Pin;
//
//int main()
//{  int i=0;
//	Pin V =
//	{"q1w2e3r4",
//	{1,2,3},
//	{3.1,3.2,3.14,3.24},
//	{1,2,3,4,5,6,7,8,9,10},
//	{2,5,"123qwer",3.55,24}
//	}; 
//
//	printf("%s\n",V.name);
//
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",V.num[i]);
//	}
//
//	printf("\n");
//
//	for(i=0;i<4;i++)
//	{
//		printf("%lf ",V.a[i]);
//	}
//
//	printf("\n");
//
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",V.arr[i]);
//	}
//	printf("\n");
//
//	printf("%d ",V.G.x);
//	printf("%d ",V.G.y);
//	printf("%s ",V.G.num);
//	printf("%lf ",V.G.sz);
//	printf("%d ",V.G.age);
//
//
//
//	return 0;
//}

//�ṹ���ʼ���ͳ�Ա����(ֱ�ӷ���/ָ�����)

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[7];
//
//
//
//}Stu;
//void print1(Stu temp)  //�ṹ��ֱ�ӷ���
//{
//	printf("%s\n",temp.name);
//	printf("%d\n",temp.age);
//	printf("%s\n",temp.tele);
//	printf("%s\n",temp.sex);
//
//}
//
//void print2(Stu* F)   //�ṹ��ָ�����
//{   //��ʽһ
//	printf("%s\n",F->name);
//	printf("%d\n",F->age);
//	printf("%s\n",F->tele);
//	printf("%s\n",F->sex);
//	//��ʽ��
//	printf("%s\n",(*F).name);
//	printf("%d\n",(*F).age);
//	printf("%s\n",(*F).tele);
//	printf("%s\n",(*F).sex);
//}
//int main()
//{
//	Stu S ={
//		"С����",
//		23,
//		"13423453414",
//		"��"};
//	print1(S); //�ṹ��ֱ�ӷ���
//	print2(&S);//�ṹ��ָ�����
//
//
//	return 0;
//}

//�ڶ��ڣ�ָ�����ݸ�ϰ
//int main()
//{
//  int a =10;
//  int*pa =&a;
//
//  printf("%d\n",*pa);
//  printf("%p\n",&a);
//  printf("%p\n",pa);
//return 0;
//}










