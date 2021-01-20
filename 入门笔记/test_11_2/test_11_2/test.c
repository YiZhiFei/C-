#pragma warning(disable:4996)
#include <stdio.h>

//void明确告诉我们main函数不需要参数
//int main(void)
//{
//
//}

//int main()
//{
   /*
	printf("Hello World!\n");
	printf("第一个c语言代码\n");
	printf("准备了好久\n");
	printf("加油码农！\n");
	return 0;//表示正确返回
	*/
	
	//char ch = 'A';//内存
	//printf("%c\n",ch);//%c -- 打印字符格式的数据   printf(我以字符的形式打印ch!)

	//int age = 20;
	//printf("%d\n",20);//%d --打印整型十进制数据

	/*
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	*/

	//年龄
	//short age = 20;//向内存申请2个字节=16bit，用来存放20
	//float weight=95.6f;//向内存申请4个字节，存放小数（默认是double）

    /*
    int a = 100;//全局变量/成员变量-整个工程中能用
	int main()
	{
		int a = 10;//局部变量-只能在所在代码块中运用
		printf("%d\n",a);
		//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
		//当局部变量和全局变量的名字相同的时候，局部变量优先
		//局部变量无法在{}外使用
		*/

//		return 0;
//	}

/*
变量的用法
int main(){

	int num1=0;
	int num2=0;
	int sum = 0;
	//C语言语法规定，变量要定义在当前代码块的最前面
	//输入数据-使用输入函数scanf
	scanf("%d%d",&num1,&num2);//取地址符号&
	sum = num1 + num2;
	printf("sum =%d\n",sum);
	return 0;
}
*/
//声明变量：enter int 外部变量
//全局变量的作用域是整个工程
/*解释：
1.main函数是程序的入口
2.一个工程中main函数有且仅有一个
3.void main(){}是过时的写法
4.库函数-C语言本身提供给我们使用的函数，所以使用别人的东西时，
  要打招呼——#include
5.stdio-std:stdandard input output

变量的作用域：哪里可以使用，哪里就是它的作用域
变量的周期：变量创建到销毁的时间段
{}-代码块

一个工程有多个.c文件
多个.c文件只能有1个main函数
*/