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
 















