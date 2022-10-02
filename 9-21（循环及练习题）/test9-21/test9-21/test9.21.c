#define _CRT_SECURE_NO_WARNINGS 1
//9月21日代码

#include<stdio.h>


//do while循环
//do while语句特点
// 1,循环至少执行一次，使用的并不多
// 2，do while循环中的break,和continue用法和前面一样

//int main(void)
//{
//	int a=1;
//	do
//	{	
//	 printf("%d ",a);
//	 a++;
//	
//	}while(a<=10);
//	
//return 0;
//}
//

//break和continue在do while循环中的应用

//int main(void)
//{
//	int i=1;
//	do
//	{
//	 if(i==5)
//	 break;         //循环体内遇到break,就会直接跳出循环
//	printf("%d ",i);
//	i++;
//	}
//	while(i<=10);
//
// return 0;
//}


//int main(void)
//{
//	int i=1;
//	do
//	{
//	 if(i==5)
//	 continue;         //循环体内遇到continue,程序将会跳过continue后面的程序，直接跳转到循环的判断部分
//	printf("%d ",i);     //本程序结果为 1 2 3 4 死循环
//	i++;
//	}
//	while(i<=10);
//
// return 0;
//}

// 解决continue在do while中的死循环问题

//int main(void)
//{
//	int i=1;
//	do
//	{
//	 i++;              //将i放在上面将解决程序死循环这一问题
//	 if(i==5)
//	 continue;         //循环体内遇到continue,程序将会跳过continue后面的程序，直接跳转到循环的判断部分
//	printf("%d ",i);     //本程序结果为 1 2 3 4 6 7 8 9 10
//	
//	}
//	while(i<=10);
//
// return 0;
//}



// 循环练习题
//1. 计算n!
//2.计算1！+2！+3！+……10！（注意数据类型溢出的情况）

//第一题
//int main(void)
//{
// int i=0;
// int n=0;
// int sum=1;
// printf("请输入要计算阶乘的底数：");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
//   sum=sum*i;
//
// }
// printf("%d!=%d\n",n,sum);
//
//return 0;
//}

//数据类型溢出问题

//C语言中(最高位为符号位 0为正，1为负)
//int型数据类型取值范围为（-2的31次方-1到2的31次方-1）-2147483648 ~2147483647（10位数）
//int类型4字节 32为 最大值2^32-1  (最多能计算到12！，13！结果数据将溢出)
//long long型数据类型取值范围为-9223372036854775808~9223372036854775807（19位数）；(即-2^63~2^63-1)
//long long类型8字节 64位 最大值2^63-1  (最多到20！，21！结果数据将溢出)

//int main(void)
//{
// int i=0;
// int n=1;
// int sum=1;                        //int型计算阶乘结果 只能计算到16！，17！程序将溢出
// printf("请输入要计算阶乘的底数：");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// { 
//   sum=sum*i;
//   printf("%d!=%d\n",i,sum);
// }
//
//
//return 0;
//}


//int main(void)
//{
// int i=0;
// int n=1;
// long long sum=1;       
// printf("请输入要计算阶乘的底数：");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// { 
//   sum=sum*i;
//   printf("%d!=%lld\n",i,sum);//  %lld对应long long型
// }
//
//
//return 0;
//}

//int main()
//
//{  /*
//	因为a、b、c是long long类型，所以为64位数，
//	在打印的时候，分割成6个32位数，
//	%d每次只能读取其中的32位，
//	第一个%d读第一个32位数，也就是1的低32位(1)，
//	第二个%d读第二个32位数，也就是1的高32位(0)，
//	第三个%d读第三个32位数，也就是2的低32位(2)，所以结果就是1 0 2。
//   */
//long long a = 1, b = 2, c = 3;
//
//printf("%lld %lld %lld\n", a, b, c);//1 2 3
//printf("%d %d %d\n", a, b, c);     //1 0 2
//
//return 0;
//
//}

//第二题
//计算1!+2!+……+n！

//int main(void)
//{
//  int i=0;  //循环调整变量
//  long long sum=1; //求阶乘结果变量
//  long long Ssum=0;//求阶乘和的变量
//  int n=0;           //将所求阶乘和的底数 存放在变量n中
//  printf("请输入所求的阶乘和的底数：");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//   sum=sum*i;
//   Ssum+=sum;
//   printf("%d!=%lld\n",i,sum);
//  
//  }
//   printf("Ssum = %lld",Ssum);
//
//return 0;
//}






