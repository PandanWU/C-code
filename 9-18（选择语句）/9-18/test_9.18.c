#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//9月18日 代码

// if else判断条件

//int main(void)
//{
//char a;
//printf("加入字节!\n");
//printf("是否准备好好学习？\n");//(是Y/N否)
//scanf("%c",&a);
//
//if(a=='Y')
//printf("好offer\n");
//else if(a=='N')
//	printf("回家去吧\n");
//else
//	printf("系统出现错误 请注意查看！\n");
//
//
//return 0; 
//}


//  9月19日代码



//while循环 
//
//int main(void)
//{   int i=1;
//
//	printf("加入字节！\n");
//	while(i<=20000)
//	{
//	printf("努力敲代码%d\n",i);
//	i++;
//	}
//	if(i>20000)
//		printf("好OFFER\n");
//
//  return 0;
//}

//int main(void)
//{ 
//	int age=40;
//	if(age<18)
//	{
//	  printf("未成年\n");
//	}
//	else if(age>=18&&age<=28)
//	{
//	  printf("青年\n");
//	}
//	else if(age>28&&age<=50)
//	{
//	  printf("中年\n");
//	}
//	else if(age>50&&age<90)
//	{
//	  printf("老年\n");
//	}
//	else
//      printf("长寿\n");
//     
//return 0;
//}

//int main(void)
//{
//   int a=0;
//   int b=1;
//
//   if(a==1)
//	   if(b==1)
//		  printf("hehe\n");
//       else 
//		  printf("haha\n");  //else与离他最近的if相匹配
//   else 
//	   printf("hhhhhhhhhhhh\n");
//
//
//
//
//
//
//return 0;
//}

//int main(void)
//{  
//  char a ;
//  char b ;
//  printf("是否打算加入字节?\n");//是(Y)/否（N）
//  scanf("\n%c",&a);
//
//  if(a=='Y')
//  {   getchar();
//	  printf("是否努力工作?\n");
//	  scanf("%c",&b);
//	  if(b=='Y')
//	  {
//	   printf("升职加薪\n");
//	  }
//	  if(b=='N')
//	  {
//	   printf("回家养老\n");
//	  }
//
//  }
//  else if(a=='N')
//  {
//    printf("回家养老\n");
//  }
// return 0;
//}



//关于scanf与\n，char型之间存在的问题

//int main(void)
//{
//  char a;
//  char b;
//
//  scanf("%c",&a);
//  printf("%c\n",a);
//  getchar();
//  scanf("%c",&b);
//  printf("%c\n",b);
//
//
// return 0;
//}
//


//判断一个数是否为奇数？

//int main(void)
//{
//	int a;
// printf("请输入一个整数：\n");
// scanf("%d",&a);
// if(a%2==1)
// {
//   printf("%d是奇数\n",a);
// }
// else
//   printf("%d不是奇数\n",a);
//
//
//  return 0;
//}

// 打印输出1--100之间的奇数

//int main(void)
//{
// int i=1;
// 
// for( i=1;i<=100;i++)
// {
//   if(i%2==1)
//   {
//    printf("%d ",i);
//   }
// 
// }
//
// return 0;
//}

//
//int main(void)
//{
//	int i=1;
// while(i<=100)
// {
//  if(i%2==1)
//  {
//   printf("%d ",i);
//  }
// 
//  i++; 
// }
//
//
//
//return 0;
//}

//int main(void)
//{  int i=1;
//
//	while(i<=100)
//	{
//	  printf("%d ",i);
//	  i+=2;	
//	
//	}
//
//return 0;
//}


//switch  case的用法

//int main(void)
//{
//  int day=0;
//  scanf("%d",&day);
//   switch(day)
//   {
//   case 1:
//	   printf("星期一\n");
//   break;
//   case 2:
//	   printf("星期二\n");
//   break;
//   case 3:
//	   printf("星期三\n");
//   break;
//   case 4:
//	   printf("星期四\n");
//   break;
//   case 5:
//	   printf("星期五\n");
//   break;
//   case 6:
//	   printf("星期六\n");
//   break;
//   case 7:
//	   printf("星期日\n");
//   break;
//   default:
//   break;
//   
//   }
//
//  return 0;
//}
//

//int main(void)
//{
//  int day=0;
//  scanf("%d",&day);
//   switch(day)  //switch(整形表达式) 
//   {
//   case 1+0:    //case后为常量表达式
//   case 2:
//   case 3:
//   case 4:
//   case 5:
//	   printf("工作日\n");
//   break;
//   case 6:
//   case 7:
//	   printf("休息日\n");
//   break;
//   default:
//   break;
//   
//   }
//
// return 0;
//}

//break与continue的作用和用法
//打印1--10的数
//int main(void)
//{
//  int i=1;
//  while(i<=10)
//  {
//  printf("%d ",i);
//  i++;
//  
//  }
//
//
//  return 0;
//}

//int main(void)
//{
//  int i=1;
//  while(i<=10)
//  {
//   if(i==5)
//	   break;        //break在循环中用于永久终止循环，并直接跳出循环
//    printf("%d ",i);  //打印结果显示1 2 3 4
//    i++;
//  
//  }
//
//
//  return 0;
//}

//int main(void)
//{
//  int i=1;
//  while(i<=10)
//  {
//   if(i==5)
//	continue;        //continue在循环中用于终止本次循环，并终止continue后面的程序，重新进入下一次的循环
//    printf("%d ",i);  //打印结果显示1 2 3 4 出现死循环
//    i++;
//  
//  }
//
//
//  return 0;
//}

//int main(void)
//{
//  int i=0;
//  while(i<=10)
//  {  i++;
//   if(i==5)
//	continue;         //continue在循环中用于终止本次循环，并终止continue后面的程序，重新进入下一次的循环
//    printf("%d ",i);  //打印结果显示1 2 3 4 6 7 8 9 10
//
//  
//  }
//
//
//  return 0;
//}




























