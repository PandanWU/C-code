#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 9月20日代码编写情况

// getchar与putchar的用法
//
//int main(void)
//{
//	char ch;
//	ch=getchar();
//	putchar(ch);
//	printf("%c",ch);
//
//
//
//
//return 0;
//}


//int main(void)
//{   char ch;
//    char a;
//	ch=getchar();  
//	putchar(ch);
//	a=getchar();  //第二个getchar() 接收的是缓存区内的是一个回车键的转义字符 \n
//    putchar(a);	  //a的值为 \n (10)
//	printf("%c\n",a);
//    printf("%d\n",a);
//
//
//return 0;
//}

//int main(void)
//{
//	char ret=0;
//    while((ret=getchar())!=EOF)
//	{
//	 putchar(ret);	//按下按键ctrl+Z 可以停止程序
//	}
//
//return 0;
//}


//int main(void)
//{
//  char password[12]={0};
//  char ret;
//  char ch;
//  printf("请输入开机密码：");//输入123456然后按下回车键   此时输入缓存区内123456 abcdef
//  scanf("%s",password);       //输入缓存区内的123456存入数组  此时输入缓存区内剩下 abcdef
//  while((ch=getchar())!='\n');     //一直读取输入缓存区内的字符  直到按下回车，读到\n,才会跳出循环  此时输入缓存区为空 ，
// 
//  printf("请再次确认\n");//(Y/N)
//
//  ret=getchar();                //当缓冲区中没有字符可以读取时，getchar()就会等待我们输入一个字符
//  if(ret=='Y')   // 89
//  {
//   printf("确认成功\n");
//  }
//  else
//  {
//   printf("确认失败！\n");
//  }
//
//return 0;
//}



//int main(void)
//{
//  char password[12]={0};
//  char ret;
//  char ch;
//  printf("请输入开机密码：");//输入123456然后按下回车键   此时输入缓存区内123456\n
//  scanf("%s",password);       //输入缓存区内的123456存入数组  此时输入缓存区内剩下 \n
//  ch=getchar();                  //将输入缓存区内的 \n 存入ch  此时输入缓存区为空 ，
// 
//  printf("请再次确认\n");//(Y/N)
//
//  ret=getchar();                //当缓冲区中没有字符可以读取时，getchar()就会等待我们输入一个字符
//  if(ret=='Y')   // 89
//  {
//   printf("确认成功\n");
//  }
//  else
//  {
//   printf("确认失败！\n");
//  }
//
//return 0;
//}



//编写一个程序，只能输出'0'到'9'的字符
  //int main(void)
  //{
  //   int ch;
	 //while((ch=getchar()) != EOF)
	 //{
	 //  if(ch<'0' || ch>'9')
	 //   continue;  //终止continue后面的程序，再次进入while循环
	 //   putchar(ch);
	 //}

  //
  //  return 0;
  //}

///打印26个英文字母（大写/小写）

//int main(void)
//{
//   int i='A';
//
//   while(i>='A' && i<='z')
//   {   i++;
//	   if(i>'Z' && i<'a')
//		   continue;
//        printf("%c ",i);
//
//   }
//
// return 0;
//}

//打印26个大小写字母

//int main(void)
//{
//   int i;
//   for(i='A';i<'z';i++)
//   {  
//	   if(i>'Z' && i<'a')
//		   continue;        // 当i的值为 ( Z<i<a )时，跳过continue后面的程序，再次回到while循环
//
//        printf("%c ",i);
//
//   }
//
// return 0;
//}


//编写一个程序，输入（a/A--z/Z）输入大写字母，输出小写字母，
//输入大写字母，输出小写字母，


//int main(void)
//{
// int ch;
// while((ch=getchar())!=EOF)
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
//
// return 0;
//}


//for循环


//打印1--10
//int main(void)
//{  int i=0;
//  for(i=1;i<=10;i++)
//  {
//   printf("%d ",i);
//  
//  
//  }
//  return 0;
//}

//continue和break在for循环中的用法

//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	  if(i==5)
//		  break;            //在循环中，只要遇到break，就停止后面的所有循环，将直接跳出循环
//	 printf("%d ",i);       //打印结果 1 2 3 4 
//	
//	}
//
// return 0;
//}


//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	  if(i==5)
//		  continue;            //在循环中，只要遇到continue，continue后面的代码都不会再执行，
////                               而是直接跳转到循环的判断部分，进行下一次循环
//	 printf("%d ",i);           //打印结果 1 2 3 4 6 7 8 9 10
//	
//	}
//
// return 0;
//}

//continue在while循环中出现的问题

//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//	  if(i==5)
//		  continue;            //在while循环中，遇到continue，continue后面的代码都不会再执行，
////                               而是直接跳转到循环的判断部分，进行下一次循环
//	 printf("%d ",i);           //打印结果 1 2 3 4  进入死循环
//	  i++;                      //可以将i++ 放在if判断条件之前 解决死循环的问题 
//	}
//
// return 0;
//}


//for循环中的一些建议
// 1,不可在for循环体内，修改循环变量，防止for循环失去控制
// 2,建议for循环控制变量的取值采用 “前闭后开区间”的写法，[0,9) 例for(i=0;i<10,i++)

//int main(void)
//{
//	int i=0;
//	for(i=1;i<=10;i++)         //在for循环内对i的调整，不要在循环体内部对i做调整，否则很容易使程序失控
//	{
//	  if(i=5)                 //不可在for循环体内，修改循环变量，防止for循环失去控制,会进入死循环
//		  printf("hehe\n");
//
//	 printf("哈哈哈\n");
//	}
//
//
//
//
//return 0;
//}


//int main(void)
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	// 10次循环
//	// 10次打印
//	//10个元素
//	for(i=0;i<10;i++)   //建议采用 前闭后开的写法[0,10)
//	{
//	
//	 printf("%d ",arr[i]);
//	}
//
//
//return 0;
//}


//for 循环的变种
// 1,for循环的初始化，判断条件，变量调整都可以省略
// 但是，for循环的判断部分如果被省略，那判断条件就 恒为真
// 2，如果对for循环不是很熟练，建议不要随便省略

//int main(void)
//{
//  for(  ;  ;  )  //for循环的（初始化，判断条件，变量调整）都省略了，那判断条件结果就 恒为真
//  {
//
//	  printf("hehehe\n");
//  }
//
// return 0;
//}


//int main(void)
//{
//  int i=0;
//  int j=0;
//  for(;i<10;i++)
//  {   
//      for(;j<10;j++)         //当j=10时，跳出内层循环，进入外层循环判断入口，此时i=2,j=10; / i=3;j=10;/i=4;j=10;/……i=10,j=10;
//	  {                        //  
//	   printf("hehehehe\n");   //最终只打印10次 hehehehe
//	  }
//  
//  
//  }
//
// return 0;
//}

//for循环的嵌套

//int main(void)
//{
//  int i=0;
//  int j=0;
//  int t=1;  //改变量用于计算打印次数
//  for(i=0;i<10;i++)
//  {   
//      for(j=0;j<10;j++)
//	  {
//	  
//	   printf("hehehehe%d\n",t);   //总共打印了100次hehehehe
//	    t++;
//	  }
//  
//  
//  }
//
//
//
// return 0;
//}


//for循环笔试题(下面循环共循环了多少次？)  答案： 0次

//int main(void)
//{
//  int k=0;
//  int i=0;
//  for(i=0,k=0; k=0; i++,k++)  // 判断条件 k = 0; 该表达式结果为假，所以不会进入循环 
//	                         //若k 不为0，如k=1，则判断条件真，程序将进入死循环
//  {
//    printf("i=%d,k=%d\n",i,k);
//  }
//
//
//return 0;
//}










