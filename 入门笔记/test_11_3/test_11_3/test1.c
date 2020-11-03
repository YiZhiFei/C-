#define _CRT_SECURE_NO_WARNINGS 1//加在源文件第一行
//如何设置默认源文件有这句话

#include<stdio.h>

int main()
{
   int num1 = 0;
   int num2 = 0;
   int sum = 0;
   scanf("%d%d",&num1,&num2);
   //scanf,strcpy,strlen,strdat都是不安全的 加入#define都可以忽略警告
   sum = num1 + num2;
   printf("sum = %d\n",sum);
   return 0;
}