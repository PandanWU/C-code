#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//9��18�� ����

// if else�ж�����

//int main(void)
//{
//char a;
//printf("�����ֽ�!\n");
//printf("�Ƿ�׼���ú�ѧϰ��\n");//(��Y/N��)
//scanf("%c",&a);
//
//if(a=='Y')
//printf("��offer\n");
//else if(a=='N')
//	printf("�ؼ�ȥ��\n");
//else
//	printf("ϵͳ���ִ��� ��ע��鿴��\n");
//
//
//return 0; 
//}


//  9��19�մ���



//whileѭ�� 
//
//int main(void)
//{   int i=1;
//
//	printf("�����ֽڣ�\n");
//	while(i<=20000)
//	{
//	printf("Ŭ���ô���%d\n",i);
//	i++;
//	}
//	if(i>20000)
//		printf("��OFFER\n");
//
//  return 0;
//}

//int main(void)
//{ 
//	int age=40;
//	if(age<18)
//	{
//	  printf("δ����\n");
//	}
//	else if(age>=18&&age<=28)
//	{
//	  printf("����\n");
//	}
//	else if(age>28&&age<=50)
//	{
//	  printf("����\n");
//	}
//	else if(age>50&&age<90)
//	{
//	  printf("����\n");
//	}
//	else
//      printf("����\n");
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
//		  printf("haha\n");  //else�����������if��ƥ��
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
//  printf("�Ƿ��������ֽ�?\n");//��(Y)/��N��
//  scanf("\n%c",&a);
//
//  if(a=='Y')
//  {   getchar();
//	  printf("�Ƿ�Ŭ������?\n");
//	  scanf("%c",&b);
//	  if(b=='Y')
//	  {
//	   printf("��ְ��н\n");
//	  }
//	  if(b=='N')
//	  {
//	   printf("�ؼ�����\n");
//	  }
//
//  }
//  else if(a=='N')
//  {
//    printf("�ؼ�����\n");
//  }
// return 0;
//}



//����scanf��\n��char��֮����ڵ�����

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


//�ж�һ�����Ƿ�Ϊ������

//int main(void)
//{
//	int a;
// printf("������һ��������\n");
// scanf("%d",&a);
// if(a%2==1)
// {
//   printf("%d������\n",a);
// }
// else
//   printf("%d��������\n",a);
//
//
//  return 0;
//}

// ��ӡ���1--100֮�������

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


//switch  case���÷�

//int main(void)
//{
//  int day=0;
//  scanf("%d",&day);
//   switch(day)
//   {
//   case 1:
//	   printf("����һ\n");
//   break;
//   case 2:
//	   printf("���ڶ�\n");
//   break;
//   case 3:
//	   printf("������\n");
//   break;
//   case 4:
//	   printf("������\n");
//   break;
//   case 5:
//	   printf("������\n");
//   break;
//   case 6:
//	   printf("������\n");
//   break;
//   case 7:
//	   printf("������\n");
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
//   switch(day)  //switch(���α��ʽ) 
//   {
//   case 1+0:    //case��Ϊ�������ʽ
//   case 2:
//   case 3:
//   case 4:
//   case 5:
//	   printf("������\n");
//   break;
//   case 6:
//   case 7:
//	   printf("��Ϣ��\n");
//   break;
//   default:
//   break;
//   
//   }
//
// return 0;
//}

//break��continue�����ú��÷�
//��ӡ1--10����
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
//	   break;        //break��ѭ��������������ֹѭ������ֱ������ѭ��
//    printf("%d ",i);  //��ӡ�����ʾ1 2 3 4
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
//	continue;        //continue��ѭ����������ֹ����ѭ��������ֹcontinue����ĳ������½�����һ�ε�ѭ��
//    printf("%d ",i);  //��ӡ�����ʾ1 2 3 4 ������ѭ��
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
//	continue;         //continue��ѭ����������ֹ����ѭ��������ֹcontinue����ĳ������½�����һ�ε�ѭ��
//    printf("%d ",i);  //��ӡ�����ʾ1 2 3 4 6 7 8 9 10
//
//  
//  }
//
//
//  return 0;
//}




























