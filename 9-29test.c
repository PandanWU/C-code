#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

          //数组的定义和初始化

//int main()
//{
// //数组元素类型   数组名     [常量表达式]
//  int arr[10]; 
//  char arr1[5];
//
////数组的完全初始化和不完全初始化 
//  int arr2[5] = {1,2,3,4,5 }; //完全初始化
//  int arr3[12] = {1,2,3,4 }; //不完全初始化
//
//
// //数组在创建的时候如果想不指定数组的确定的大小就得初始化。数组的元素个数根据初始化的内容来确定。
//
//  char arr4[] ={'a','A','f','e'};
//  char arr5[] ="qwert";
//
//  return 0;
//}

//int main()
//{
//	char arr1[]= "qwer";
//	char arr2[]= {'a','b','c','d','e'};
//	printf("%s\n",arr1); // qwer
//	printf("%s\n",arr2); // abcde乱码
//
//// sizeof 是单目操作符 用于计算变量、数组、类型所占空间的大小，单位：字节
//	printf("%d\n",sizeof(arr1)); //5
//	printf("%d\n",sizeof(arr2)); //5
//
//// strlen 是库函数 用于计算字符串长度  
//	printf("%d\n",strlen(arr1)); // 4
//	printf("%d\n",strlen(arr2)); // 随机值20 (计算到字符'\0'之前的字符个数，不包括'\0'）
//
//return 0;
//}

                 //一维数组的使用：打印数组元素
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9};
//	char arr2[]= "abcdefg";
//	char arr3[]= {'A','B','C','D'};
//	int i,j;
//	int sz1=sizeof(arr1)/sizeof(arr1[0]);//9         //数组的大小是可以通过计算得出的
//	int sz2= sizeof(arr2)/sizeof(arr2[0]);//8个元素 含'\0'
//
//	//printf("%c\n",arr2[7]); //'\0'为空字符,为不可打印字符
//	//printf("%d\n",'\0');   // '\0'对应ASCII中的 0
//	//printf("%d\n", '0');   // 字符0的ASCII 值为 48
//	//printf("%d\n",' ');   //空格对应的ASCII值是 32
//	//printf("%d\n",'\n');   //回车（\n）对应的ASCII值是 10
//
//	for(i=0;i<sz1;i++)
//	{
//	
//	printf("%d ",arr1[i]);
//	
//	}
//	printf("\n");
//
//	for(j=0;j<sz2;j++)
//	{
//	
//	printf("%c ",arr2[j]); // \0为字符串结束标志,为空字符 是不可打印字符
//	
//	}
//
//
//return 0;
//}

                        //一维数组在内存中的存储
//随着数组下标的增长，元素地址也有规律的递增
// 结论：数组在内存中是连续存放的
//int main()
//{
//	int arr1[] ={1,2,3,4,5,6,7,8,9,10};
//	char arr2[] ="abcdefgh";
//    int i;
//	int sz1 =sizeof(arr1)/sizeof(arr1[0]); //10
//	int sz2 =sizeof(arr2)/sizeof(arr2[0]); //9
//
//
//	for(i=0;i<sz1;i++)
//	{
//		printf("&arr1[%d]=%p\n",i,&arr1[i]);
//	
//	}
//
//	printf("\n");
//	for(i=0;i<sz2;i++)
//	{
//		printf("&arr2[%d]=%p\n",i,&arr2[i]);
//	
//	}
//return 0;
//}

//二维数组的创建及初始化


//int main()
//{
//  //二维数组创建
// int arr[2][3];
// char arr1[4][3];
// //二维数组初始化
// int arr2[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};//完全初始化
//
//
// char arr3[][5] ={65,66,67,68,69,70,71,72,73,74,75,76};
// //不完全初始化，下标可以省略行，不能省略列
// 
// int arr4[3][4]={1,2,3,4,5,6};
// //第一行：1 2 3 4 第二行：5 6 0 0 第三行：0 0 0 0
// 
// int arr5[6][5]={{1,2},{3},{4,5,6},{7},{8,9}};//括号应该连续
// //第一行：1 2 0 0 0 第二行：3 0 0 0 0 第三行：4 5 6 0 0 第四行：7 0 0 0 0 第五行：8 9 0 0 0 第六行：0 0 0 0 0
// 
// int arr6[4][4]={{1,2},{3},4,5,6,7,8,9};
// //第一行：1 2 0 0 第二行：3 0 0 0 第三行：4 5 6 7 第四行：8 9 0 0
// return 0;
//}

//二维数组的使用：遍历二维数组

//int main()
//{
//	int arr[4][3] = {1,2,3,4,5,6,7,8,9};
//    int i=0;
//
//	for(i=0;i<4;i++)
//	{ 	int j=0;
//	  for(j=0;j<3;j++)
//	  {
//	   printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);	   
//	  }	
//	
//	}
//return 0;
//}

 
//二维数组在内存中同样也是连续存放的

//int main()
//{
//	char arr[5][4]= {65,66,67,68,69,70,71,72,73,74,75,76,77};//13
//    
//	int i=0;
//	int j=0;
//	for(i=0;i<5;i++)
//	{
//	  for(j=0;j<4;j++)
//	  { 
//	   printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//	  }
//	
//	
//	}
//
//
//return 0;
//}

/*
数组名到底是什么？   数组名：首元素地址
 两个例外  
1,sizeof(数组名)：表示的是整个数组的大小 ，单位：字节
2,&数组名 表示整个数组的地址 
*/

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	printf("sizeof(arr) = %d\n",sizeof(arr));   //sizeof(数组名)：表示的是整个数组的大小 ，单位：字节
//    printf("sz=%d\n",sz);
//
//
//
//return 0;
//}

//int main()
//{              
//	int arr1[]={1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n",arr1);    
//	printf("%p\n",arr1+1);
//
//	printf("%p\n",&arr1[0]);                  
//	printf("%p\n",&arr1[0]+1);
//
//	printf("%p\n",&arr1); 
//	printf("%p\n",&arr1+1);  //&数组名 表示整个数组的地址 
//                             //以上两个地址相差40字节,正好相差的是整个数组的地址
//
//return 0;
//}








