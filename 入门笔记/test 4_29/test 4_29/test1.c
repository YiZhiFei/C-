#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
//int main()//最简单的代码
//{
//	printf("hello world!\n");
//	return 0;
//}

////求每个数据类型的大小
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short int));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 int和long是一样的
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(long double));//8
//	return 0;
//}

////全局变量 局部变量
//int global = 2021;//全局变量
//int main()
//{
//	int local = 2020;//局部变量
//	int global = 2021;//局部变量 可与全局变量重名，且局部变量优先使用
//	printf("global = %d\n", global);
//	return 0;
//}

////变量的使用 输入两个数，算总和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("输入两个数->");
//	scanf("%d %d", &a, &b);
//	printf("sum = %d\n", sum = a + b);
//	return 0;
//}

//const修饰的常量是只可读取，不可修改的

////下列字符打印的结果是什么
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = {'b','i','t'};//出现乱码：没有\0 生成随机数
//	char arr3[] = { 'b','i','t','\0'};
//	printf("%s\n", arr1);//%s输出字符串
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//1、换行(\n)将当前位置移动到下一行开头。 2、回车(\r)将当前位置移动到本行开头。
// %c格式对应的是单个字符,%s格式对应的是字符串。

////打印'和"
//int main()
//{
//	printf("%s\n", "\'");
//	printf("%s\n", "\"");
//	return 0;
//}

//笔试题！！
//程序输出是什么
//int main()
//{
//	printf("%d\n", strlen("abcdef"));//长度 6
//	printf("%d\n", strlen("c:\test\328\test.c"));//8进制中没有8  14？＜（＾－＾）＞对的！
//	return 0;
//}

//顺序结构
//选择结构 if/switch
//循环结构 for/while/do while

////指针常量 常量指针
//int main()
//{
//	char a[] = "ABCDE";
//	char b[] = "abcde";
//	char* p1 = "abcde";
//	const char* p2 = "abcde";
//	char* const p3 = p1;
//	*p1 = 'A';//编译能通过，运行时发生错误，试图去改变常量区内容
//	*p2 = 'A';//编译不能通过，p2指向字符串常量，内容不能改变
//	p2 = a;//可以修改的是指针p2的值
//	*p3 = 'A';//若p3指向数组a，那么编译运行都能通过，如果p3指向字符指针变量p1，那么编译能通过
//	//运行不能通过因为试图改变常量区的内容
//	p3 = a;//不可以，p3指针本身不能被修改，是个常量
//	p1 = a;
//	printf("%s\n", p1);
//	//printf("%s\n", p3);//abcde,p3指向指针变量p1,p1一开始指向常量区，此时p1指向a，但p3仍然指向p1原来的地址
//	return 0;
//}

//const char* p;
//常量指针，指向一个常量的指针，指向的内容是常量，不可修改，放在常量区，但是指针可以修改
//即 *p = b;非法   p = &q;合法

//char* const p = a;
//指针常量，指针本身是一个常量，不可修改，但是指针指向的内容可以修改，*p ='b';是可以的，p = &q;非法

//char* p = "abc";
//常量字符串是定义在常量区的，*p ='b';是可以编译的，但无法运行，因为试图改变常量区内容
//而p是一个指针变量，放在栈上。

//实战练习
////输入一个字符，判定它是什么类型字符（大写，小写，数字，其他字符）
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'a'&&ch <= 'z')
//		printf("是小写字母！\n");
//	else if (ch >= 'A'&&ch <= 'Z')
//		printf("是大写字母！\n");
//	else if (ch >= '0' && ch <= '9')
//		printf("是数字！\n");
//	else
//		printf("其他字符！\n");
//	return 0;
//}

////编写一个程序，设圆的半径r=1.2，高h=1.5,定义圆周率常量Pi=3.1415,求出圆柱的体积
//int main()
//{
//	double r = 1.2;
//	double h = 1.5;
//	double Pi = 3.1415;
//	double v;
//	printf("圆柱体积v = %0.2lf",v = Pi * r * r * h);
//	return 0;
//}

////编写一个程序，输入一个字符，如果输入的字符是大写字母，则转换为小写字母，如果输入的字符是小写字母，则转换为大写字母
////否则不转换
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'z')
//	{
//		ch -= 32;
//		printf("%c\n", ch);
//	}
//	else if (ch >= 'A' && ch <= 'Z')
//	{
//		ch += 32;
//		printf("%c\n", ch);
//	}
//	else
//		printf("既不是大写，也不是小写。");
//	return 0;
//}

////关于变量
//int main()
//{
//	int i = 3;
//	int j = 3;
//	int k = i * j;
//	{
//		int k = 8;
//		if (i == 3)
//			printf("%d\n", k);//8
//	}
//	printf("%d\n%d\n", j,k);//3,9
//	return 0;
//}
////局部变量只在局部作用域中有作用

////形参与实参
//int main()
//{
//	int n;
//	printf("input number\n");
//	scanf("%d", &n);//5
//	s(n);
//	printf("n=%d\n", n);//15
//}
//int s(int n)
//{
//	int i;
//	for (i = n - 1; i >= 1; i--)
//		n = n + i;
//	printf("n=%d\n", n);//5
//}
////该程序定义了一个函数，计算n+(n-1)+(n-2)+...+2+1,先定义实参，s函数中的是形参
////实参的值不随形参的值的变化而变化

//输入正方体的长宽高，求体积及三个面面积
int main()
{
	double l,w,h;
	double ar1, ar2, ar3;
	scanf("%d %d %d", &l, &w, &h);
	ar1 = l * w;
	ar2 = l * h;
	ar3 = w * h;
	printf("三面面积分别是：%d %d %d\n", ar1, ar2, ar3);
	return 0;
}

