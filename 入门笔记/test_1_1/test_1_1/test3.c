#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//关于指针
//int main()
//{
//	int a = 10;//像内存申请了4个字节的空间
//	//printf("%p\n",&a);//输出地址
//	int* p = &a;//p是一个变量-指针变量
//	//printf("%p\n",p);
//	*p = 20;//目的通过解引用操作符改变地址中数据
//	return 0;
//}

//int main()
//{
//	double b = 3.14;
//	double* pd = &b;
//	*pd = 5.5;
//	printf("%lf\n",b);
//	printf("%d\n",sizeof(pd));//在32位中4 64中为8
//	//所有地址都是这样，与数据类型无关
//	printf("%d\n",sizeof(*char));
//	printf("%d\n",sizeof(*double));
//	printf("%d\n",sizeof(*float));
//	//以上都是地址
//	return 0;
//}

//结构体
//char int double ......
//书-复杂对象

//名字+身高+年龄+身份证号码+......
//书名+作者+出版社+定价+书号......
//复杂对象 -- 结构体 = 我们自己创造出来的一种类型
//

//struct Book
//{
//	char name[20];//C语言程序设计//数组名本质上是一个地址，不可改
//	short price;//55元
//};//分号不可缺少

//方法一
//int main(){
//	struct Book b1 = {"C语言程序设计",55};
//	printf("书名：%s\n",b1.name);
//	printf(  "价格：%d\n",b1.price);
//	b1.price = 15;
//  strcpy(b1.name,"C++" );//strcpy-stringcopy 字符串拷贝 是一个库函数，要加#include<string.h>
//	printf("修改后的价格：%d\n",b1.price);
//	return 0;
//}

//方法二
//int main()
//{
//	struct Book b1 = {"C语言程序设计",55};//这里有分号
//	struct Book* pb = &b1;
//	//利用pb打印出我的书名和价格
//	//.    结构体变量.成员
//	//->   结构体指针->成员
//
//	printf("%s\n",pb->name);
//	printf("%d\n",pb->price);
//	return 0;
//}

//分支循环
//int main()
//{
//	int a = 0;
//	printf("您的年龄是：");//重点！这里不用＋%d
//	scanf("%d",&a);
//	if(a<0 && a>150)//重点！并且用法
//		printf("您输入的数据不合法！\n");
//	else if(a<18)
//		printf("未成年！\n");
//	else
//		printf("成年人！\n");
//}

//if..else的匹配规则：就近原则
//int main()
//{
//	int a = 20;
//	if(a>18)
//		if(a>50)
//			printf("haha");
//	else
//		printf("hehe");//自动与上一个if匹配
//}

//关于赋值
//int main()
//{
//	int a = 5;
//	if(5 == a)//重点！建议这么写因为写错了编译也过不去
//		//= 赋值符号  == 才是等于
//	{
//		printf("haha\n");
//	}
//	else 
//	{
//		printf("hehe\n");
//	}
// return 0;
//}

//练习题 用选择语句
//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	if(1 == a%2)
//	{
//		printf("奇数！\n");
//	}
//	else
//	{
//		printf("偶数！\n");
//	}
//	return 0;
//}

//输出0-100之间的奇数
int main()
{
	int i = 1;
    while (i<=100)//重点！while后面没有分号，do...while后面才有！
	{
	if(1 == i%2)
		printf("%d\n",i);
	i++;
	}
	printf("输入完成！\n");
	return 0;
}





