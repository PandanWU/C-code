#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "string.h"

//�Զ��庯���Ķ����ʹ��

//int Add(int x,int y)
//{
//  int z=x+y;
//  return z;
//
//}
//int main()
//{
// int a=20;
// int b=30;
// int sum = Add(a,b);
// printf("sum=%d\n",sum);
//	
//return 0;
//}


// �⺯����ʹ�� 

//���ַ�������
//int main(void)
//{
//	char arr[]="abcd";            //4
//	char arr1[20]="############";   //12
//
//
//	printf("%d\n",strlen(arr));  // 
//	printf("%d\n",strlen(arr1)); //
//
//return 0;
//}

//�����ַ���֮��ĸ��ƣ� strcpy �⺯����

//int main()
//{
// 	char arr[]="abcd";            //4
//	char arr1[20]="############";   //12
//    char arr2[25];
//
//	strcpy(arr1,arr);               //�ַ������ƿ⺯��  ������arr ��ֵ���Ƶ� arr1
//	strcpy(arr2,"helllo lad");      //�ַ������ƿ⺯��  ���ַ���"helllo lad" ��ֵ���Ƶ� arr2 
//
//	printf("arr: %s\n",arr); //abcd
//	printf("arr1:%s\n",arr1);//abcd
//	printf("arr2:%s\n",arr2);//helllo lad
//
//
//
//return 0;
//}

//�ڴ����õ�ʹ�� memset(memary set)

//int main(void)
//{
//	char arr[]="hello world";
//
//	memset(arr,'*',4);  // 1:Ҫ������������ 2��Ҫ��Ϊ���ַ� 3��ǰ������
//	printf("%s\n",arr);
//
//
//
//return 0;
//
//}

//�Զ���һ������������������������һ��

//int get_max(int x,int y)    // x,yΪ��ʽ����
//{
//  if(x>y)
//	  return x;
//  else
//	  return y;
// //   return (x>y ? x:y);
//}
//
//
//int main()
//{
// int a=10;
// int b=20;
// int MAX;
// MAX=get_max(a,b);           //a,b Ϊʵ�ʲ���
// printf("MAX=%d\n",MAX);
// MAX=get_max(156,545);
// printf("MAX=%d\n",MAX);
//
//return 0;
//}

//�Զ���һ��������ʵ��������֮��Ľ���

//void exchange(int* x,int* y)
//{
//  int z;
//   z= *x;
//   *x= *y;
//   *y =z;
//
//
//}
//
//
//int main()
//{
// int a=10;
// int b=13;
//   exchange(&a,&b);
//   printf("a=%d  b=%d\n",a,b);
//
//
//return 0;
//}

//int main(void)
//{
//	int a=10;
//	int* pa = &a;
//
//	printf("%p\n",pa);//��ӡָ�����
//	printf("*pa = %d",*pa);//ָ�������
//
//   return 0;
//}

//�����Ĳ��� ��ʵ�ʲ�������ʽ������

// 1��������ʵ�ʲ��� 
//  ʵ�ʲ������ͣ����������������ʽ��������ȡ��ַ MAX��&a,&b���ȣ�
// 2����������ʽ����
// ��ʵ�δ����β�ʱ(�β�ʵ������ŷ����ڴ浥Ԫ�����������������Զ�������)���β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//��Ϊ��ʽ����ֻ���ں��������õĹ����вŻ�����ڴ浥Ԫ�����ý����������ͷ��ڴ棨�β�ֻ�ں�������Ч�������Խ���ʽ������

//int get_max(int x,int y)    // x,yΪ��ʽ���� ��
//{
//  if(x>y)
//	  return x;
//  else
//	  return y;
// //   return (x>y ? x:y);
//}
//
//
//int main()
//{
// int a=10;
// int b=20;
// int MAX;
// MAX=get_max(a,b);           //����a,b��Ϊʵ�ʲ���
// printf("MAX=%d\n",MAX);    
//
// MAX=get_max(156,545);       //������Ϊʵ�ʲ���
// printf("MAX=%d\n",MAX);
//
//  MAX=get_max(156+500,545);   //���ʽ��Ϊʵ�ʲ���
// printf("MAX=%d\n",MAX);
//
//  MAX = get_max(get_max(156,545),get_max(156+500,545));      //������Ϊʵ�ʲ���
// printf("MAX=%d\n",MAX);
// return 0;
//}

//�����ĵ��� 
// 1����ֵ����(�������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��)
//
//2����ַ���� 
//��ַ�����ǰ�ʵ�ε��ڴ��ַ���ݸ��βε�һ�ֵ��ú����ķ�ʽ��
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӹı�ʵ�ε�ֵ
//
//�����������Ĵ�С 

//void exchange(int* x,int* y)
//{
//  int z;
//   z= *x;
//   *x= *y;
//   *y =z;
//}
//
//int main()
//{
// int a=10;
// int b=13;
//   exchange(&a,&b);
//   printf("a=%d  b=%d\n",a,b);
//
//
//return 0;
//}


// ��ϰ��
//1. дһ�����������ж�һ�����ǲ���������
//2����ӡ100-200֮�������
//3. дһ�������ж�һ���ǲ������ꡣ
//4. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//5. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��

//1 ������һ�����������ж��Ƿ�Ϊ����

//int main()
//{
//
//  int n;
//  int i;
//  printf("������һ��������");
//  scanf("%d",&n);
//  for(i=2;i<n;i++)
//  {
//    if((n%i)==0)
//	{	printf("%d��������\n",n);
//       break;                          //ע������break��return ������
//	}
//  }
//  if(i==n)
//  {
//  printf("%d������\n",n);
//  
//  }
//
//
//return 0;
//}

//2����ӡ1-100-200֮�������


//break��return ������
//	return��������ǰ����ִ�к���
//	break  ��ֻ��������ǰ�����Ǹ�ѭ��������ж��ѭ��������ѭ����Ȼ�����ѭ����
//


//int is_prime(int num)
//{
//  int j;
//  for(j=2;j<num;j++)
//  {
//    if((num%j)==0)
//	return 0;             
//  
//  
//  }
//return 1;
//
//}
//
//
//int main(void)
//{
//  int i;
//  for(i=1;i<=200;i++)
//  {   if(i==1)           //i=1ʱ ����ѭ����1��������
//      continue;
//
//     if(is_prime(i)==1)
//	 {
//	 printf("%d ",i);
//	 }
//  
//  
//  }
//
//return 0;
//}

//  3. дһ�������ж�һ���ǲ������ꡣ
// �ж����������Ƿ������������
//��1�����������ܱ�4���������ܱ�100������
//��2�����������ܱ�400������

//��ͨд��

//int main()
//{
//  int year;
//  printf("��������ݣ�");
//  scanf("%d",&year);
//  if((year%4==0)&&(year%100!=0)||(year%400==0))
//  {
//     printf("%d������\n",year);
//  }
//  else
//     printf("%d��������\n",year);
//
// return 0;
//}

//�ж�һ������Ƿ�Ϊ���꺯��д��

//int leap_year(int n)
//{
// if((n%4==0)&&(n%100!=0)||(n%400==0))
//   return 1;
// 
// else
//    return 0;
//
//
//}
//
//int main(void)
//{
//	int year;
//  printf("��������ݣ�");
//   scanf("%d",&year);
//   if(leap_year(year)==1)
//	   printf("%d������\n",year);
//
//   else
//	   printf("%d��������\n",year);
//
//return 0;
//}

//��ӡ1000-4000�ڵ�����

//int leap_year(int n)
//{
// if((n%4==0)&&(n%100!=0)||(n%400==0))
//   return 1;
// 
// else
//    return 0;
//
//}
//int main()
//{
//	int year;
//	for(year=1000;year<=4000;year++)
//	{
//	   if(1==leap_year(year))
//		   printf("%d ",year);
//	
//	}
//
//
//return 0;
//}

//5. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��

void test(void)
{
  int num=0;
  num++;
}
int main(void)
{
  test();
  


  return 0;
}


