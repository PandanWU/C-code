#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "string.h"

//自定义函数的定义和使用

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


// 库函数的使用 

//求字符串长度
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

//两个字符串之间的复制（ strcpy 库函数）

//int main()
//{
// 	char arr[]="abcd";            //4
//	char arr1[20]="############";   //12
//    char arr2[25];
//
//	strcpy(arr1,arr);               //字符串复制库函数  将数组arr 的值复制到 arr1
//	strcpy(arr2,"helllo lad");      //字符串复制库函数  将字符串"helllo lad" 的值复制到 arr2 
//
//	printf("arr: %s\n",arr); //abcd
//	printf("arr1:%s\n",arr1);//abcd
//	printf("arr2:%s\n",arr2);//helllo lad
//
//
//
//return 0;
//}

//内存设置的使用 memset(memary set)

//int main(void)
//{
//	char arr[]="hello world";
//
//	memset(arr,'*',4);  // 1:要操作的数组名 2：要改为的字符 3，前几个数
//	printf("%s\n",arr);
//
//
//
//return 0;
//
//}

//自定义一个函数，求这两个数中最大的一个

//int get_max(int x,int y)    // x,y为形式参数
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
// MAX=get_max(a,b);           //a,b 为实际参数
// printf("MAX=%d\n",MAX);
// MAX=get_max(156,545);
// printf("MAX=%d\n",MAX);
//
//return 0;
//}

//自定义一个函数，实现两个数之间的交换

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
//	printf("%p\n",pa);//打印指针变量
//	printf("*pa = %d",*pa);//指针解引用
//
//   return 0;
//}

//函数的参数 （实际参数和形式参数）

// 1、函数的实际参数 
//  实际参数类型（常量、变量、表达式、函数，取地址 MAX（&a,&b）等）
// 2、函数的形式参数
// 当实参传给形参时(形参实例化后才分配内存单元，当函数调用完后就自动销毁了)，形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//因为形式参数只有在函数被调用的过程中才会分配内存单元，调用结束后，立刻释放内存（形参只在函数中有效），所以叫形式参数。

//int get_max(int x,int y)    // x,y为形式参数 ，
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
// MAX=get_max(a,b);           //变量a,b作为实际参数
// printf("MAX=%d\n",MAX);    
//
// MAX=get_max(156,545);       //常量作为实际参数
// printf("MAX=%d\n",MAX);
//
//  MAX=get_max(156+500,545);   //表达式作为实际参数
// printf("MAX=%d\n",MAX);
//
//  MAX = get_max(get_max(156,545),get_max(156+500,545));      //函数作为实际参数
// printf("MAX=%d\n",MAX);
// return 0;
//}

//函数的调用 
// 1、传值调用(函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参)
//
//2、传址调用 
//传址调用是把实参的内存地址传递给形参的一种调用函数的方式。
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接改变实参的值
//
//交换两个数的大小 

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


// 练习题
//1. 写一个函数可以判断一个数是不是素数。
//2、打印100-200之间的素数
//3. 写一个函数判断一年是不是闰年。
//4. 写一个函数，实现一个整形有序数组的二分查找。
//5. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。

//1 、输入一个整数，并判断是否为素数

//int main()
//{
//
//  int n;
//  int i;
//  printf("请输入一个整数：");
//  scanf("%d",&n);
//  for(i=2;i<n;i++)
//  {
//    if((n%i)==0)
//	{	printf("%d不是素数\n",n);
//       break;                          //注意区别break和return 的区别
//	}
//  }
//  if(i==n)
//  {
//  printf("%d是素数\n",n);
//  
//  }
//
//
//return 0;
//}

//2、打印1-100-200之间的素数


//break和return 的区别：
//	return：跳出当前正在执行函数
//	break  ：只跳出它当前所在那个循环，如果有多层循环，外层的循环依然会继续循环。
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
//  {   if(i==1)           //i=1时 跳过循环，1不是素数
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

//  3. 写一个函数判断一年是不是闰年。
// 判断输入整数是否是闰年的条件
//（1）：该整数能被4整除但不能被100整除。
//（2）：该整数能被400整除。

//普通写法

//int main()
//{
//  int year;
//  printf("请输入年份：");
//  scanf("%d",&year);
//  if((year%4==0)&&(year%100!=0)||(year%400==0))
//  {
//     printf("%d是闰年\n",year);
//  }
//  else
//     printf("%d不是闰年\n",year);
//
// return 0;
//}

//判断一个年份是否为闰年函数写法

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
//  printf("请输入年份：");
//   scanf("%d",&year);
//   if(leap_year(year)==1)
//	   printf("%d是闰年\n",year);
//
//   else
//	   printf("%d不是闰年\n",year);
//
//return 0;
//}

//打印1000-4000内的闰年

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

//5. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。

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


