#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 9��20�մ����д���

// getchar��putchar���÷�
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
//	a=getchar();  //�ڶ���getchar() ���յ��ǻ������ڵ���һ���س�����ת���ַ� \n
//    putchar(a);	  //a��ֵΪ \n (10)
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
//	 putchar(ret);	//���°���ctrl+Z ����ֹͣ����
//	}
//
//return 0;
//}


//int main(void)
//{
//  char password[12]={0};
//  char ret;
//  char ch;
//  printf("�����뿪�����룺");//����123456Ȼ���»س���   ��ʱ���뻺������123456 abcdef
//  scanf("%s",password);       //���뻺�����ڵ�123456��������  ��ʱ���뻺������ʣ�� abcdef
//  while((ch=getchar())!='\n');     //һֱ��ȡ���뻺�����ڵ��ַ�  ֱ�����»س�������\n,�Ż�����ѭ��  ��ʱ���뻺����Ϊ�� ��
// 
//  printf("���ٴ�ȷ��\n");//(Y/N)
//
//  ret=getchar();                //����������û���ַ����Զ�ȡʱ��getchar()�ͻ�ȴ���������һ���ַ�
//  if(ret=='Y')   // 89
//  {
//   printf("ȷ�ϳɹ�\n");
//  }
//  else
//  {
//   printf("ȷ��ʧ�ܣ�\n");
//  }
//
//return 0;
//}



//int main(void)
//{
//  char password[12]={0};
//  char ret;
//  char ch;
//  printf("�����뿪�����룺");//����123456Ȼ���»س���   ��ʱ���뻺������123456\n
//  scanf("%s",password);       //���뻺�����ڵ�123456��������  ��ʱ���뻺������ʣ�� \n
//  ch=getchar();                  //�����뻺�����ڵ� \n ����ch  ��ʱ���뻺����Ϊ�� ��
// 
//  printf("���ٴ�ȷ��\n");//(Y/N)
//
//  ret=getchar();                //����������û���ַ����Զ�ȡʱ��getchar()�ͻ�ȴ���������һ���ַ�
//  if(ret=='Y')   // 89
//  {
//   printf("ȷ�ϳɹ�\n");
//  }
//  else
//  {
//   printf("ȷ��ʧ�ܣ�\n");
//  }
//
//return 0;
//}



//��дһ������ֻ�����'0'��'9'���ַ�
  //int main(void)
  //{
  //   int ch;
	 //while((ch=getchar()) != EOF)
	 //{
	 //  if(ch<'0' || ch>'9')
	 //   continue;  //��ֹcontinue����ĳ����ٴν���whileѭ��
	 //   putchar(ch);
	 //}

  //
  //  return 0;
  //}

///��ӡ26��Ӣ����ĸ����д/Сд��

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

//��ӡ26����Сд��ĸ

//int main(void)
//{
//   int i;
//   for(i='A';i<'z';i++)
//   {  
//	   if(i>'Z' && i<'a')
//		   continue;        // ��i��ֵΪ ( Z<i<a )ʱ������continue����ĳ����ٴλص�whileѭ��
//
//        printf("%c ",i);
//
//   }
//
// return 0;
//}


//��дһ���������루a/A--z/Z�������д��ĸ�����Сд��ĸ��
//�����д��ĸ�����Сд��ĸ��


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


//forѭ��


//��ӡ1--10
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

//continue��break��forѭ���е��÷�

//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	  if(i==5)
//		  break;            //��ѭ���У�ֻҪ����break����ֹͣ���������ѭ������ֱ������ѭ��
//	 printf("%d ",i);       //��ӡ��� 1 2 3 4 
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
//		  continue;            //��ѭ���У�ֻҪ����continue��continue����Ĵ��붼������ִ�У�
////                               ����ֱ����ת��ѭ�����жϲ��֣�������һ��ѭ��
//	 printf("%d ",i);           //��ӡ��� 1 2 3 4 6 7 8 9 10
//	
//	}
//
// return 0;
//}

//continue��whileѭ���г��ֵ�����

//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//	  if(i==5)
//		  continue;            //��whileѭ���У�����continue��continue����Ĵ��붼������ִ�У�
////                               ����ֱ����ת��ѭ�����жϲ��֣�������һ��ѭ��
//	 printf("%d ",i);           //��ӡ��� 1 2 3 4  ������ѭ��
//	  i++;                      //���Խ�i++ ����if�ж�����֮ǰ �����ѭ�������� 
//	}
//
// return 0;
//}


//forѭ���е�һЩ����
// 1,������forѭ�����ڣ��޸�ѭ����������ֹforѭ��ʧȥ����
// 2,����forѭ�����Ʊ�����ȡֵ���� ��ǰ�պ����䡱��д����[0,9) ��for(i=0;i<10,i++)

//int main(void)
//{
//	int i=0;
//	for(i=1;i<=10;i++)         //��forѭ���ڶ�i�ĵ�������Ҫ��ѭ�����ڲ���i�����������������ʹ����ʧ��
//	{
//	  if(i=5)                 //������forѭ�����ڣ��޸�ѭ����������ֹforѭ��ʧȥ����,�������ѭ��
//		  printf("hehe\n");
//
//	 printf("������\n");
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
//	// 10��ѭ��
//	// 10�δ�ӡ
//	//10��Ԫ��
//	for(i=0;i<10;i++)   //������� ǰ�պ󿪵�д��[0,10)
//	{
//	
//	 printf("%d ",arr[i]);
//	}
//
//
//return 0;
//}


//for ѭ���ı���
// 1,forѭ���ĳ�ʼ�����ж���������������������ʡ��
// ���ǣ�forѭ�����жϲ��������ʡ�ԣ����ж������� ��Ϊ��
// 2�������forѭ�����Ǻ����������鲻Ҫ���ʡ��

//int main(void)
//{
//  for(  ;  ;  )  //forѭ���ģ���ʼ�����ж�������������������ʡ���ˣ����ж���������� ��Ϊ��
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
//      for(;j<10;j++)         //��j=10ʱ�������ڲ�ѭ�����������ѭ���ж���ڣ���ʱi=2,j=10; / i=3;j=10;/i=4;j=10;/����i=10,j=10;
//	  {                        //  
//	   printf("hehehehe\n");   //����ֻ��ӡ10�� hehehehe
//	  }
//  
//  
//  }
//
// return 0;
//}

//forѭ����Ƕ��

//int main(void)
//{
//  int i=0;
//  int j=0;
//  int t=1;  //�ı������ڼ����ӡ����
//  for(i=0;i<10;i++)
//  {   
//      for(j=0;j<10;j++)
//	  {
//	  
//	   printf("hehehehe%d\n",t);   //�ܹ���ӡ��100��hehehehe
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


//forѭ��������(����ѭ����ѭ���˶��ٴΣ�)  �𰸣� 0��

//int main(void)
//{
//  int k=0;
//  int i=0;
//  for(i=0,k=0; k=0; i++,k++)  // �ж����� k = 0; �ñ��ʽ���Ϊ�٣����Բ������ѭ�� 
//	                         //��k ��Ϊ0����k=1�����ж������棬���򽫽�����ѭ��
//  {
//    printf("i=%d,k=%d\n",i,k);
//  }
//
//
//return 0;
//}










