#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "string.h"
//复习：
// 1,写一个函数 判断其是否为素数
// 2，打印1000-4000之间的闰年
//
//
//
//判断一个数是否为素数
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
//	printf("请输入一个整数：");
//	scanf("%d",&n);
//
//         if(0== is_prime(n))
//		 {
//		  printf("%d是素数\n",n);
//		 }
//		 else
//			 printf("%d不是素数\n",n);
//
//return 0;
//}


//打印 1--500之间的素数

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
//   if(is_prime(i)==0)       //打印素数
//	   printf("%d  ",i);
// 
// }
//return 0;
//}

//判断是否为闰年 并打印1000-4000之间的闰年

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

//写一个函数，能够交换两个值

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


//写一个函数 每调用一次这个函数，就会将num 的值加1 （采用传址的方式）
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

//函数的嵌套调用

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

//函数的链式访问

//打印字符串个数
//int main()
//{
//	int len;
//	len = printf("%d\n",strlen("asdfg")); //将strlen的返回值作为函数printf的参数
//
//
//
//return 0;
//}

//函数printf的返回值为： 打印的字符的个数
//

//int main()
//{
//printf("%d",printf("%d",printf("%d",234)));   //打印结果 23431 （不包括空格）
//printf("\n");
//printf("%d",printf("%d ",printf("%d ",234)));//打印结果 234 4 2 （包括空格）
//
//return 0;
//
//}

//函数的声明和定义
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

//多源文件的函数声明

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