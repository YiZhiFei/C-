#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
//}

//练习：计算n的阶乘(不考虑溢出)
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d",&n);
//   for(i=1;i<n;i++)
//   {
//	   ret = ret*i; 
//   }
//   printf("ret = %d\n",ret);
//	ret

//计算1！+2！+...+10！
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	for(n = 1;n < 11;n ++)
//	{			
//        int ret = 1;  
//		for(i=1;i<n;i++)
//        {
//	      ret = ret*i; 
//        }
//	   sum = sum + ret;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}
//优化代码
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	for(n = 1;n < 11;n ++)
	{			
	   ret = ret*n; 
	   sum = sum + ret;
	}
	printf("sum = %d\n",sum);
	return 0;
}












