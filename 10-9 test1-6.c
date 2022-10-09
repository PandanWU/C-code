#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*************************************
1、实践出真知
打印：Practice makes perfect!

=====================================*/
//int main() //main函数是程序的入口，有且仅有一个
//{
//
//	printf("Practice makes perfect!");
//
// return 0;
//}

/*************************************
2、输出大V 如下
v   v 
 v v  
  v

=====================================*/
//int main()
//{
//  printf("V   V\n V V \n  V  \n");
// //或者
//  printf("\nV   V\n");
//  printf(" V V \n");
//  printf("  V  \n");
//
//}
/*************************************
3、有容乃大
确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大（字节）

输入描述：无
输出描述：
不同整型数据类型在内存中占多大（字节），具体格式详见输出样例，输出样例中的?为不同整型数据类型在
内存中占的字节数。输出样例如下：
The size of short is ? bytes.
The size of int is ? bytes.
The size of long is ? bytes.
The size of long long is ? bytes.
=====================================*/
//int main()       
//{
// printf("The size of short is %d bytes.\n",sizeof(short)); 
// printf("The size of int is %d bytes.\n",sizeof(int)); 
// printf("The size of long is %d bytes.\n",sizeof(long)); 
// printf("The size of long long is %d bytes.\n",sizeof(long long)); 
//
// //sizeof 为C语言中的一个操作符，用于计算变量或类型所占空间的大小，单位为字节
//
//return 0;
//}
/*************************************
4、缩短二进制：
    我们处理的整数通常用十进制表示，在计算机内存中是以二进制补码形式存储，但通常二进制表示的整
数比较长，为了便于在程序设计过程中理解和处理数据，通常采用八进制和十六进制，缩短了二进制补
码表示的整数，但保持了二进制数的表达特点。请输出十进制整数1234对应的八进制和十六进制。

输入描述：无
输出描述： 十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在
十六进制数前显示前导0X。
=====================================*/
//int main()
//{
////	printf("%d\n",1234);  //以十进制形式打印
//	printf("0%o 0X%X\n",1234,1234);       //以八进制形式打印和16进制形式打印
//	printf("%#o %#X\n",1234,1234);       //修饰符# 可以自动显示八进制和16进制的前导 0和0X
//
//
//
//	return 0;
//}
/*************************************
5、反向输出四位数 ：
  将一个四位数反向输出
输入描述：一行，输入一个整数n（1000 <= n <= 9999）。
输出描述： 针对每组输入，反向输出对应四位数。

例 输入1234 ，输出4321
=====================================*/
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//
//	while(num)
//	{
//	 printf("%d",num%10);
//	 num/=10;
//	
//	}
//
//  return 0 ;
//}
/*************************************
6、大小写转换 ： 实现字母的大小写转换。多组输入输出。

输入描述：多组输入，每一行输入大写字母。
输出描述： 针对每组输入输出对应的小写字母

例: 输入AB，输出ab
=====================================*/

//int main()
//{
//  int ch = 0 ;
// while((ch=getchar())!= EOF)
// {
//  printf("%c\n",ch+32);
//  getchar();
// }
//
// return 0;
//}


//复习之前代码：大小写字母转换

//int main(void)
//{
// int ch;
// while((ch=getchar())!= EOF)
// {
//   if(ch>='A' && ch<='Z') 
//	   putchar(ch+32);
//    
//
//   if(ch>='a' && ch<='z')
//	   putchar(ch-32);
//     
// }
//
// return 0;
//}









