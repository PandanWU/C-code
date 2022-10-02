#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//第六章 复习题6  (P146)

//int main()
//{   int i=0;
//    int j=0;
//	for(i=1;i<=4;i++)
//	{ 
//		for(j=1;j<=8;j++)
//	       printf("$");
//		printf("\n");
//	}
//return 0;
//}



//6.16 编程练习 第2题  P149

//int main()
//{   int i=0;
//    int j=0;
//
//	for(i=1;i<=5;i++)
//	{ 
//		for(j=1;j<=i;j++)
//		{
//		printf("$");
//		}
//		printf("\n");
//	
//	}
//return 0;
//}

// 6.16---第3题
//int main()
//{   int i=0;
//    int j=0;
//	int k='F';
//	for(i=1;i<=6;i++)
//	{ 
//		for(j=0;j<i;j++)
//		{
//		     printf("%c",k-j);
//		}
//		printf("\n");
//	
//	}
//return 0;
//}



// static的用法
//
//1、static修饰局部变量时，局部变量的声明周期延长，出代码块后不再销毁
//2、static修饰全局变量时，改变了作用域
//


// static修饰局部变量

//void test()
//{ int a=1;
//   a++;
//  printf("a=%d\n",a);  // 2 2 2 2 2
//
//}
//int main(void)
//{	int i=0;
//	for(i=0;i<5;i++)
//	{
//	   test();//2 2 2 2 2 
//	}
//return 0;
//}

//void test()
//{ static int a=1; //static修饰局部变量时，局部变量的声明周期延长，出代码块后不再销毁
//   a++;
//  printf("a=%d\n",a);  // 2 3 4 5 6
//
//}
//int main(void)
//{	int i=0;
//	for(i=0;i<5;i++)
//	{
//	   test();// 2 3 4 5 6
//	}
//return 0;
//}


//static修饰全局变量

  /*
  当全局变量被static修饰时，会改变全局变量的作用域，
  让静态的全局变量只能在自己所在的源文件内部使用，
  出了源文件将无法再使用。
  
  作用1：防止该全局变量在其他源文件中被调用（通过extern外部声明）
  作用2：防止全局变量重名，使得编译器会报错

  */

//int num;     //如果不赋初始值，默认初始值为0；    
//
//int test()
//{
//   num++;
//   printf("num=%d\n",num);
//}
//
//int main()
//{   int i=0;
//   for(i=0;i<5;i++)
//  {
//	test();  //1 2 3 4 5 
//  }
//	return 0;
//}


//static修饰函数，改变了函数的作用域
/*
函数用static修饰，改变了作用域。普通的函数是可以通过头文件声名的方式被其他文件调用，
被static修饰后就只能在本文件里被调用，这样是为了数据的安全。

作用:有些函数并不想对外提供，只需要在本文件里调用,这时候就可以用static去修饰。
总结：改变了作用域，没有改变其生存周期

 由于函数的定义和声明是有区别的，定义函数要有函数体，声明函数没有函数体，
 所以函数定义和声明时都可以将extern省略掉，反正其他文件也是知道这个函数是在其他地方定义的，所以不加extern也行。
 两者如此不同，所以省略了extern也不会有问题。

 对函数而言，如果你想在本源文件中使用另一个源文件的函数，就需要在使用前用声明该函数，
 声明函数加不加extern都没关系，所以在头文件中函数可以不用加extern。
*/



//int Add(int x,int y);  //int 前的extern 加不加都可以 
//int main(void)
//{
//
// int sum=Add(20,30);
// printf("sum=%d\n",sum);
//
//
//
//return 0;
//}




//long double 数据类型长度

//int main()
//{	
//	printf("sizeof(float)=%d\n",sizeof(float));//4
//	printf("sizeof(double)=%d\n",sizeof(double));//8
//	printf("sizeof(long double)=%d\n",sizeof(long double));//8
//
//   return 0;
//}


//宏定义的使用

//#define Max(a,b) (a>b?a:b)

//int main(void)
//{
//	int max;
//	max=Max(14,4);
//	printf("max=%d\n",max);
//
//
// return 0;
//}





//求两个整数的最大值

//int Max(int x,int y)
//{
//	if(x>y)
//        return x;
//	else
//		return y;
//
//}
//
//
//int main()
//{
//
//	int max;
//	max=Max(102,44);
//	printf("max=%d\n",max);
//
//
//
//return 0;
//}

//移位操作符的用法

//int main()
//{
//	int a=-1;  
///*    
//	                               //10000000 00000000 00000000 00000001  原码
//	                               //11111111 11111111 11111111 11111110  反码
//	                               //11111111 11111111 11111111 11111111  补码
//
////左移一位  (左边丢弃，右边补0)      11111111 11111111 11111111 11111110  补码
//	                                 11111111 11111111 11111111 11111101  反码
//	                                 10000000 00000000 00000000 00000010  原码     结果为（-2）
//
// //右移一位（右边丢弃,左边补符号位） 11111111 11111111 11111111 11111111  补码
//	                                 11111111 11111111 11111111 11111110  反码
//	                                 10000000 00000000 00000000 00000001  原码     结果为（-1）
//*/
//	int b=a<<1;//-2                
//	int c=a>>1;//-1
//	printf("b=%d\n",b);//-2
//	printf("c=%d\n",c);//-1
//
//return 0;
//}

//求一个整数存储在内存中的二进制中1的个数

//int main()
//{	int i=0;
//	int num;
//	int count=0;
//	scanf("%d",&num);
//
//	for(i=0;i<32;i++)
//	{
//	  if(1==((num>>i&1)))
//	  {
//		  count++;
//	  }
//	
//	}
//   printf("%d\n",count);
//
//return 0;
//}


//单目操作符  ！

//int main()
//{    
//	int a;
//    scanf("%d",&a);
//	if(!a)//如果a为假，打印呵呵
//	{
//	printf("呵呵\n");
//	}
//
//
//
//return 0;
//}

//单目操作符a++,++a

//int main()
//{
//	int a=10;
//	printf("%d\n",a++);//10  先使用，再++
//	 printf("%d\n",a);//11
//	printf("%d\n",++a);//12 先++，再使用
//return 0;
//}

//强制类型转换

//int main()
//{
//	int a=(int)3.14;
//	printf("%d",a);
//
//return 0;
//}

//sizeof计算某个类型和变量在内存中所占字节数


//void test1(int arr[])
//{
// printf("%d\n", sizeof(arr));//(2)     //指针类型大小 4字节
//}
//void test2(char ch[])
//{
// printf("%d\n", sizeof(ch));//(4)      //指针类型大小 4字节
//}
//int main()
//{
// int arr[10] = {0};
// char ch[10] = {0};
// printf("%d\n", sizeof(arr));//(1)  所占40字节
// printf("%d\n", sizeof(ch));//(3)   所占10字节
// test1(arr);  //数组作为函数参数传参时，传过去的是首字母地址
// test2(ch);
// return 0;
//}
//问：
//（1）、（2）两个地方分别输出多少？
//（3）、（4）两个地方分别输出多少？

//操作符&&，||的运算
//程序输出的结果是什么？

//int main( )
//{
//    int i = 0,a=0,b=2,c =3,d=4;
//    i = a++ && ++b && d++;
//    //i = a++||++b||d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 2 3 4
//    return 0;
//}
 ////int main()
 // //{
 // //  int i = 0,a=1,b=2,c =3,d=4;

//int main()
//{
//    int i = 0,a=1,b=2,c =3,d=4;
//    i = a++ || ++b || d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d); //2 2 3 4
//
//    return 0;
//}


//int main()
//{
//    int i = 0,a=0,b=2,c =3,d=4;
//    i = a++ || ++b || d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d); //1 3 3 4
//
//    return 0;
//}














