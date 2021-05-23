#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
// printf("%d\n",strlen("c:\test\328\test.c"));//8进制里没有8 微笑
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	//\32 -- 32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值
//	//32---8进制为26--ASCII码为向右的箭头
//	//\ddd ddd为八进制数
//	//\xdd   dd为十六进制
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特！\n");
//	
//	while(line<20000)
//	{
//		printf("请打出一行代码\n");
//		line++;
//
//	}
//	printf("拥有好的offer\n");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特！\n");
//	printf("你要好好学习吗 <(1/0)\n");
//	scanf("%d",&input);
//	if(input = 1)
//		printf("好的offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}

////函数
//int Add(int x,int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int sum = 0;
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1,num2);
//	sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//算术操作符

//移位操作符
//移二进制操作符
//<<左移
//>>右移
//int main()
//{
//int a = 1;
////整型1占4个字节-32bit位
////0000000000000000000000000000001
//int b = a<<2;
//printf("%d\n",b);//000...0100
//printf("%d\n",a);
//return 0;
//}

//位操作符
//int main()
//{
//	//(2进制)位操作
//	//&按位与(并且)
//	//|按位或
//	//^按位异或
//	int a = 3;  //011
//	int b = 5;  //101
//	//int c = a&b;//001
//	int c = a|b;//111
//	printf("%d\n",c);
//	return 0;
// 按位异或：相异为1
//}

//赋值操作符
//int main()
//{
//	int a = 10;
//	a = 20;
//	a = a+10;
//	a +=10;
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//+ 双目操作符
//	//c语言中我们表示真假
//	//0-假
//	//除0以外的数-真
//	int a = 0;
//	printf("%d\n",a);
//	printf("%d\n",!a);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};//10个整型元素的数组
//	int sz = 0;
//	printf("%d\n",sizeof(arr));
//	//计算数组的元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr);//或者sizeof(arr[0])
//	printf("sz = %d\n",sz);
//	//int a = 10;
//	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
//	//printf("%d\n",sizeof(a));//4
//	//printf("%d\n",sizeof a);//4
//	//printf("%d\n",sizeof(int));
//	////printf("%d\n",sizeof int);//无法编译
//	//return 0;
//}

//求出两个数中最大的那个数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d\n%d",&num1,&num2);
//	if(num1<num2)
//		printf("max = %d\n",num2);
//	else
//		printf("max = %d\n",num1);
//  return 0;
//}

//用函数求出两个数中最大的数
	/*int Max(int a,int b)
	{
		int c = 0;
		if(a > b)
			return a;
		else
		    return b;
	}
	int main()
{
	int max = 0;
	int num1 =0;
	int num2 =0;
	scanf("%d\n%d",&num1,&num2);
	max = Max(num1,num2);
	printf("max = %d\n",max);
	return 0;
}*/
//int Add(int x,int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int sum = 0;
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1,num2);
//	sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}







