#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "string.h"
//��ϰ��
// 1,дһ������ �ж����Ƿ�Ϊ����
// 2����ӡ1000-4000֮�������
//
//
//
//�ж�һ�����Ƿ�Ϊ����
//int is_prime(int num)
//{
//  int j;
//  for(j=2;j<num;j++)
//  {
//    if((num%j)==0)
//	{
//	  return 1;
//	}
//  }
//  return 0;
//
//
//
//}
//
//int main()
//{
//	int n;
//	int i;
//	printf("������һ��������");
//	scanf("%d",&n);
//
//         if(0== is_prime(n))
//		 {
//		  printf("%d������\n",n);
//		 }
//		 else
//			 printf("%d��������\n",n);
//
//return 0;
//}


//��ӡ 1--500֮�������

//int is_prime(int num)
//{
//  int j;
//  for(j=2;j<num;j++)
//  {
//    if((num%j)==0)
//	{
//	  return 1;
//	}
//  }
//  return 0;
//
//}
//int main()
//{
// int i;
// for(i=1;i<=500;i++)
// {
//   if(i==1)
//	   continue;
//
//   if(is_prime(i)==0)       //��ӡ����
//	   printf("%d  ",i);
// 
// }
//return 0;
//}

//�ж��Ƿ�Ϊ���� ����ӡ1000-4000֮�������

 /*int is_leap_year(int y)
 {
	 if( (y%4==0) && (y%100!=0) ||(y%400==0) )
	 {
	 return 1;
	 }
	 else 
	   return 0;
 
 }

int main()
{
	int year;
	for(year=1000;year<=4000;year++)
	{
	  if(is_leap_year(year)==1)
		  printf("%d  ",year);
	
	
	}

return 0;
}*/

//дһ���������ܹ���������ֵ

//void exchange(int*pa,int*pb)
// {
//    int c;
//	c = *pa;
//	*pa = *pb;
//	*pb = c ;
//
// 
// }
// int main(void)
//{
//  int a =10;
//  int b =20;
//  exchange(&a,&b);
//  printf("a=%d b=%d\n",a,b);
//
//}


//дһ������ ÿ����һ������������ͻὫnum ��ֵ��1 �����ô�ַ�ķ�ʽ��
//
//int add(int*p)
//{
//  (*p)++;
//
//
//}
//int main()
//{
// int num = 0;
// add(&num);
// printf("num = %d\n",num);// 1
// add(&num);
// printf("num = %d\n",num);// 2
// add(&num);
// printf("num = %d\n",num);//3
// add(&num);
// printf("num = %d\n",num);// 4
//
//
// return 0;
//}

//������Ƕ�׵���

//void one_line( )
//{
//	printf("hehe\n");
//
//}
//
//void three_lines()
//{ int i;
// for(i=0;i<10;i++)
// {
//  one_line();
// }
//}
//
//int main(void)
//{
// three_lines();
//
//
// 
//}

//��������ʽ����

//��ӡ�ַ�������
//int main()
//{
//	int len;
//	len = printf("%d\n",strlen("asdfg")); //��strlen�ķ���ֵ��Ϊ����printf�Ĳ���
//
//
//
//return 0;
//}

//����printf�ķ���ֵΪ�� ��ӡ���ַ��ĸ���
//

//int main()
//{
//printf("%d",printf("%d",printf("%d",234)));   //��ӡ��� 23431 ���������ո�
//printf("\n");
//printf("%d",printf("%d ",printf("%d ",234)));//��ӡ��� 234 4 2 �������ո�
//
//return 0;
//
//}

//�����������Ͷ���
//int Add(int x,int y);
//
//int main()
//{
//	int a=10;
//	int b=33;
//	int Sum = Add(a,b);
//	printf("Sum = %d\n",Sum);
//
//return 0;
//}
//
//int Add(int x,int y)
//{
//  int z = x+y;
//  return z;
//
//}

//��Դ�ļ��ĺ�������

//#include "Add.h"
//int main()
//{
//	int a=10;
//	int b=33;
//	int Sum = Add(14,86);
//	printf("Sum = %d\n",Sum);
//
//return 0;
//}