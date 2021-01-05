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

//常量
//int main()
//{
//2.const - 常属性
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

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}
//练一练
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//    /*enum Color c = BLUE;   c是变量*/
//	printf("%d\n",RED);
//	printf("%d\n",YELLOW);
//	printf("%d\n",BLUE);
//	return 0;
//}

//字符串类型
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//空字符串
//	return 0;
//}
//int main()
//{
//	char arr1[] ="abc";//数组  "abc"--'a','b','c'，'\0'字符串的结束标志
//	char arr2[] ={'a','b','c'，0};//出现乱码
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] ="abc";
//	char arr2[] ={'a','b','c'};
//	printf("%d\n",strlen(arr1));//string length-计算字符串的长度
//	printf("%d\n",strlen(arr2));//随机值
//	return 0;
//}

//转义字符
//\n 换行
//\t 水平制表符
//\\ 让斜杠变成普通斜杠 \'同理