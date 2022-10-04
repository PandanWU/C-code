#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

/*     一个小的内存单元为一个字节
       在32位的机器上，地址是32个0或者1组成二进制序列，那地址就得用4个字节的空间来存储，所以
一个指针变量的大小就应该是4个字节。
      那如果在64位机器上，如果有64个地址线，那一个指针变量的大小是8个字节，才能存放一个地
址。
 总结： 指针的大小在32位平台是4个字节，在64位平台是8个字节。
*/
	//int main()
	//{
	//	int a=10;
	//	int*p =&a; // 指针变量用于存放地址(存放在指针中的值被当作地址处理)
	//  return 0;
	//}


//int main()
//{
// printf("%d\n",sizeof(char*));  //4
// printf("%d\n",sizeof(short*)); //4
// printf("%d\n",sizeof(int*));   //4
// printf("%d\n",sizeof(long*));  //4
// printf("%d\n",sizeof(double*));//4
//
// return 0;
//}

//二、指针和指针类型

//int main()
//{
// int a=0x11223344;    //地址存放：44332211
// int*pa = &a;         // int 类型指针变量
// *pa = 0;             //地址存放：00000000
// printf("%d\n",a);
//
//
// return 0;
//}

//int main()
//{
// int a=0x11223344;    //地址存放：44 33 22 11
// char*pa = &a;        // char 类型指针变量
// *pa = 0;             //地址存放：00 33 22 11
// printf("%d\n",a);
//
//
// return 0;
//}

//结论：指针类型决定了指针在进行解引用操作时能访问空间的大小
// 如：int*p 类型，*p能访问4个字节
//     char*p 类型，*p能访问1个字节
//	 double*p 类型，*p能访问8个字节


//指针+-整数

//结论：指针类型还决定了指针的步长。（即指针向前或向后走一步有多大距离，单位：字节）
//int main()
//{
// int a = 0x112223344;
// int*pa = &a;
// char* pc = &a;
//
// printf("%p\n",pa-1);  //0xF6FA50
// printf("%p\n",pa);    //0xF6FA54  //步长：4字节
// printf("%p\n",pa+1);  //0xF6FA58
//
// printf("%p\n",pc-1); //0xF6FA53
// printf("%p\n",pc);   //0xF6FA54   //步长：1字节
// printf("%p\n",pc+1); //0xF6FA55
//
//
// return 0;
//}

//指针类型的应用：将数组中的每个元素改为1

// 指针的类型决定了对指针解引用 时有多大权限（即能操作几个字符）
//int main()
//{  
//	int arr[10] = {0};
//	int *p = arr;         // char*p = arr; 
//	int i = 0;
//
//	for(i=0;i<10;i++)
//	{
//	 *(p+i) = 1;   
//	}
//	for(i=0;i<10;i++)
//	{
//	 printf("%d ",arr[i]);
//	}
//
// return 0;
//}

//第三节：野指针

//1、指针未初始化的野指针
//int main()
//{
//	int a;  //局部变量未初始化，默认值为随机值
//	int*p;  //局部的指针变量p未初始化,默认为随机值（p未野指针，其指向位置位置）
//	*p = 20;
//
//return 0; 
//}

//2 、指针越界导致的野指针
//int main()
//{
//	int arr[10] = {0};
//	int*p = arr;
//	int i=0;
//	for(i=0;i<12;i++) // 当指针指向的范围超出arr范围时，p就是野指针
//	{
//		*(p++) = 1;
//	
//	
//	}
//
//return 0;
//}

// 指针指向的空间释放

//int*test()
//{
//	int a =10; //局部变量在出代码块时被销毁，销毁之后释放空间
//    return &a;
//}
//int main()
//{
//  int*p = test(); //指针指向的是局部变量 a 释放的空间，仍然是野指针
//   *p = 20;
//return 0;
//}

//正确写法
//int*test()
//{
//	static int a =10; //局部变量在出代码块时没有被销毁，
//    return &a;
//}
//int main()
//{
//  int*p = test(); 
//   printf("%d\n",*p);
//return 0;
//}


//总结：如何规避野指针
 //1、指针要初始化
 //2、要小心指针越界
 //3、指针指向的空间释放即使置NULL
 //4、指针使用之前检查其有效性

//第四节：指针运算

// 1、指针+-整数

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	int *p = arr;
//	for(i=0;i<sz;i++)
//	{
//	
//	printf("%d\n",*p);  //指针访问每个数组元素地址
//	  p++;
//	}
//return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	int *p = arr;
//	for(i=0;i<5;i++)   //前提不要越界访问
//	{
//	
//	printf("%d ",*p);  //指针访问每个数组元素地址
//	  p+=2;           //指针+整数
//	}
//return 0;
//}


//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	int *p = &arr[9];
//	for(i=0;i<5;i++)   //前提不要越界访问
//	{
//	
//	printf("%d ",*p);  //指针访问每个数组元素地址
//	  p-=2;           //指针-整数
//	}
//return 0;
//}


// 2、指针-指针  // |大地址-小地址| = （在同一块空间）表示中间元素的个数 


//int main()
//{
//	char ch[5]={0};
//	int arr[10]={1,2,3,4,5};
//	printf("%d\n",&arr[9]-&arr[0]); // 9  ,表示在同一块空间 中间元素的个数
//	printf("%d\n",&arr[0]-&arr[9]);// -9 
///*	printf("%d\n",&ch[5]-&arr[0]);*/ //非法操作，不可使用
//	
//	
//	
//	return 0;
//}


// 用指针计算字符串长度

//int my_strlen(char*str)  //指针str接收arr的首元素地址
//{
//  char*start = str;  //将arr的首元素地址分别赋值给指针strat/end
//  char*end   = str;
//  while(*end != '\0') //*end解引用后 为arr数组的元素，只要不是'\0',指针end就会执行++
//  {
//   end++;
//  }
//  return end-start; //最后返回数组元素个数，指针-指针 = 表示在同一块空间中的中间元素个数
//
//
//
//}
//
//int main()
//{
//  char arr[10]="abcd";
//  int len = my_strlen(arr);  //将arr的首元素地址传给函数my_strlen
//  printf("%d\n",len);
//
//return 0;
//}


//第5节：指针和数组

//int main()
//{
//	int arr[10] = {0};
//
//	printf("%p\n",arr);          //004FF88C
//	printf("%p\n",arr+1);        //004FF890  //相差4字节
//
//	printf("%p\n",&arr[0]);      //004FF88C
//	printf("%p\n",&arr[0]+1);    //004FF890  //相差4字节
//
//	printf("%p\n",&arr);         //004FF88C
//	printf("%p\n",&arr+1);       //004FF8B4  //相差40字节
//
//return 0;
//}


 
//int main()
//{
//	int arr[10] = {0};
//	int *p = arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//	printf("%p ======= %p\n",p+i,&arr[i]);  //用指针和数组两种形式打印结果是一样的
//	}
//
//return 0;
//}

//使用指针给数组元素赋值并用不同形式打印

//int main()
//{
//	int arr[10] = {0};
//	int *p =arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//	 *(p+i)= i;       //*p++ 自右向左结合 等同于*(p++)
//
//	}
//	for(i=0;i<10;i++)
//	{
//	printf("%d=====%d\n",*(p+i),arr[i]);
//	
//	}
//
//return 0;
//}


//第6节：二级指针

//int main()
//{
//	int a=10;
//	int* pa =&a;
//	int* *ppa =&pa;
//	int** *pppa = &ppa;
//	**ppa =20;
//	printf("%d\n",**ppa);
//	printf("%d\n", a);
//
//return 0;
//}

//指针数组：本质上是存放指针的数组
//int main()
//{
//	int a=10;
//	int b=20;
//	int c=30;
//	int *arr[]={&a,&b,&c};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//	printf("%p------%d\n",arr[i],*arr[i]);
//	}
//
//return 0;
//}

















