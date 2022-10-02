#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//
//printf("sizeof(char)=%d\n",sizeof(char));
//printf("sizeof(short)=%d\n",sizeof(short));
//printf("sizeof(int)=%d\n",sizeof(int));
//printf("sizeof(long)=%d\n",sizeof(long));
//printf("sizeof(long long)=%d\n",sizeof(long long));
//printf("sizeof(float)=%d\n",sizeof(float));
//printf("sizeof(double)=%d\n",sizeof(double));
//
//
//
//
//
//return 0;
//}

//int main(void)
//{
// int a=4;
// char b='C';
// double c= 3.4;
// long long d= 999;
//
//printf("%f",c);
//
//return 0;
//}

//int a=4;
//int main(void)
//{
//   int b=9;
// printf("a=%d\n",a);
// printf("b=%d\n",b);
//
//
//return 0;
//}
//变量的使用
//int main(void)
//{
//int num1=0;
//int num2=0;
//int sum=0;
//scanf("%d,%d",&num1,&num2);
//printf("%d,%d\n",num1,num2);
//sum=num1+num2;
//printf("sum=num1+num2=%d+%d\n",num1,num2);
//
//
//return 0;
//}


//变量的作用域和生命周期

//char a=65;
//int main(void)
//{
//	{
//      int b=46;
//	  printf("%d\n",b);
//	  printf("%d\n",a);
//	}
//printf("%d\n",a);
////printf("%d\n",b);
//
//
//
//return 0;
//}

//int main(void)
//{
// extern int f;
//
//printf("%d\n",f);
//
//
//}
//// 常量类型（4种）
//int main(void)
//{ const int a = 4;
//  printf("%d\n",a);
////     a=9;    //当变量具有常属性后，该变量不可再更改
////   printf("%d\n",a);
//
//  //int arr[a]={0}; //当变量具有常属性后,本质上还是变量，
//
//
//
//
//return 0;
//}

//#define NUM 90  // 标识符常量 （本质上就是常量）
//int main(void)
//{
//	int arr[NUM]={0};
//    printf("%d\n",NUM);
//
//
//return 0;
//}


//枚举常量


//enum Sex
//{  male,
//  female=10,
//  secret
//};
//
//int main(void)
//{
//  enum Sex sex= male;
//        sex=secret;  //通过枚举类型创建的变量是可以更改的
//
//  printf("sex=%d\n",sex);//11
//
//  printf("male=%d\n",male);  //0
//  printf("female=%d\n",female);//10
//  printf("secret=%d\n",secret);//11
//
//
//return 0;
//}

//如何将字符串存起来，存好后将其打印出来：

//int main(void)
//{
//	char arr[]="abcd";
//	printf("%s\n",arr);//打印输入数组名即可
//
//return 0;
//}
//#include "string.h"
//int main(void)
//{
//	char arr1[]="abcddd";
//	char arr2[]={'A','B','C','D',0};
//
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//
//    printf("%d\n",strlen(arr1));
//    printf("%d\n",strlen(arr2));
//
//    return 0;
//}
//转义字符的使用
//#include "string.h"
//int main(void)
//{
//char arr[]="c:\tcode\test.c\324\x62\4\n";   //17位
// printf("%d\n",strlen(arr));
//
// printf("\n");          //  换行符
// printf("%c\n",'\'');   //  \'
// printf("%s\n","\"");   //    \"
//
// printf("%d\n",'\32');  //  26      \ddd
// printf("%c\n",'\77');  //  63--?   \ddd
//
// printf("%c\n",'\123'); //83--S    \ddd
//
// printf("%d\n",'\x5a'); //90--Z    \xdd
// printf("%c\n",'\x5a'); //90--Z    \xdd
// printf("\tb\n");       //   \t
// printf("abcd\n\n");    //   \n
//
//
//
//
// 
// return 0;
//}

#include "string.h"

//int main(void)
//{
//  char arr1[]="abcd";
//  char arr2[]={'a','b','c','d','\0'};
//  char arr3[]="c:\test\314\x45\n";
//  printf("%d\n",strlen(arr1));
//  printf("%d\n",strlen(arr2));
//  printf("%d\n",strlen(arr3));
//
//return 0;
//}







