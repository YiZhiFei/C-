#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//	int a = 10;
//	int arr[]={1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof a);
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));//计算数组中元素个数
//	return 0;
//}

//符号一
//int main(){
//	int a = 0;//00000000000000000000000000000000
//	int b = ~a;//~按二进制位取反
//	//11111111111111111111111111111111
//	//反码：11111111111111111111111111111110
//	//原码：10000000000000000000000000000001
//	//原码、反码、补码
//	//原码取反得反码，反码加一得补码
//	//负数在内存中存储的时候，存储的是二进制补码
//	printf("%d\n",b);//使用的，打印的是这个数的源码
//	return 0;
//}
/*
补充：只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码 相同
//负数： 
//原码：直接按照正负写出的二进制序列
//反码：原码的符号位不变，其他位取反
//补码：反码加一
//-2
//原码：10000000000000000000000000000010
//反码：11111111111111111111111111111101
//补码：11111111111111111111111111111110
*/

//符号二
//int main(){
//    int a =10;
//	int b = a++;
//	//先赋值再自加（注意是自加！）
//	printf("%d\n%d",a,b);//b=10 a=11
//	return 0;
//}

//强制转换
//int main()
//{
//	int a = (int)3.14;//double--int
//	//括号中放的类型是转换的目标类型
//	return 0;
//}

//关系操作符
//int main()
//{
//	//假：0
//	//真：非0
//	//&&-逻辑与
//	//||-逻辑或
//	int a = 3;
//	int b = 5;
//	int c = a&&b;//(真&&真)
//	printf("%d\n",c);
//	return 0;
//}

//条件操作符/三目操作符
//int main(){
//	int a = 10;
//	int b = 20;
//	int max=0;
//	max =(a>b?a:b);
//	return 0;
//}

//下标操作符
//int main(){
//	//int arr[10] ={0};
//	//printf("%d\n",arr[4]);//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//()函数调用操作符
//	return 0;
//
//}

//int main()
//{
//	auto int a = 10;//局部变量-自动变量，应该都有auto的，但已省略
//	return 0;
//}

//int main()
//{
//	register int a = 10;//建议把 a 放入寄存器
//	return 0;
//}


//int main()
//{
//	signed int a = 10;//signed-有符号（一般省略） unsigned-无符号 
//	//struct-结构体关键字
//	//union -联合体/共用体
//	return 0;
//	//定义的变量名不能和关键字冲突
//}

//int main(){
//	typedef unsigned int u_int;
//	unsigned int num = 20;//=u_int num2 = 20;
// return 0;
//}

//static 修饰局部变量
//局部变量的生命周期变长


//static 修饰全局变量
//改变了变量的作用域
//让静态变量只能在自己的源文件中使用，出了源文件，则无法使用

//static 修饰局部变量
//void test()
//{
//	static int a = 1;//a是静态的局部变量
//	a++;
//	printf("a = %d\n",a);//2，3，4，5，6
//}
//int main()
//{
//	int i = 0;
//	while(i<5){
//		test();
//		i++;
//	}
//	return 0;
//}


//static 修饰全局变量

//int main()
//{
//	//extern-用来声明外部符号的。
//	extern int g_val;//用static修饰，则无法使用
//	printf("g_val = %d\n",g_val);
//	return 0;
//}

//static修饰函数
//改变了函数的链接属性，普通函数具有外部链接属性，使用static就变成了内部链接属性

//extern int Add(int t,int t)//引用外部函数，需要声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//使用用static修饰的函数，无法使用
//	printf("%d\n",sum);
//}



//#define定义的标识符常量
//#define MAX 100
//int main()
//{
//	int a = MAX;//100
//	printf("%d\n",a);
//	return  0;
//}

//#define 可以定义宏
//int Max(int x,int y)//函数
//{
//	if(x<y)
//		return y;
//	else
//		return x;
//}
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a,b);
//	printf("max = %d\n",max);
//	//宏的方式
//	max = MAX(a,b);
//   printf("max = %d\n",max);
//   return 0;
//}

//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址  int*是指针类型
//	//有一种变量是用来存放地址的，叫指针变量
//	//printf("%p\n",&a);//=printf("%p\n",p);
//	*p = 20;//*-解引用操作符  找到p中的a并改成20
//	printf("a=%d\n",a); 
//	return 0;
//
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	printf("%d\n",sizeof(pc));//32位cpu中指针是4个字节，64位是8
//	return 0;
//}
















