#define _CRT_SECURE_NO_WARNINGS 1

static int num=10;          //num被static修饰后，不能再通过extern外部声明在其他源文件内调用
  
  /*
  当全局变量被static修饰时，会改变全局变量的作用域，
  让静态的全局变量只能在自己所在的源文件内部使用，
  出了源文件将无法再使用。
  
  作用1：防止该全局变量在其他源文件中被调用（通过extern外部声明）
  作用2：防止全局变量重名，使得编译器会报错

  */

static int Add(int x,int y)  
  { 
	  int z=x+y;

	  return z;

  }


