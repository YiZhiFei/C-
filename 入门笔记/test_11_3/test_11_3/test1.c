#define _CRT_SECURE_NO_WARNINGS 1//加在源文件第一行
//如何设置默认源文件有这句话

#include<stdio.h>

/*
int main()
{
   int num1 = 0;
   int num2 = 0;
   int sum = 0;
   scanf("%d%d",&num1,&num2);//&取地址操作符
   //scanf,strcpy,strlen,strdat...
   //都是不安全的 加入#define都可以忽略警告
   sum = num1 + num2;
   printf("sum = %d\n",sum);
   return 0;
}*/

//int main()
//{
//	//const - 常属性
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[n]={0};//无法编译
//	//n = 20;//无法编译
//	//所以说要使用常量的时候常变量不能做到，
//	//但是它是一个不能变化的变量
//	//const修饰的常变量
//	/*const int num = 4;
//	printf("&d\n",num);
//	n
//	3;
//	100;
//	3.14;*/
//}
//3. #define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}
//4.枚举常量
//枚举一一列举
//性别：男，女，保密
//三原色：红黄蓝

//枚举关键 -enum

enum Sex
{
	MALE;
	FEMALE;
	SECRET;
};  
//MALE,FEMALE,SECRET - 枚举常量
int main()
{
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
}

