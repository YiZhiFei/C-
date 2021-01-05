#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//下面代码执行的结果是：
//#int main()
//{
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		if(i = 5)
//			printf("%d",i);
//	}
//	return 0;
//}//经过分析，死循环打印5

//练习：写代码将三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}


//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	for(i=1;i<100;i++)
//	{
//		if(i%3 == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}

//给两个数，求最大公约数。
 //辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d",&m,&n);
//	if(m<n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}	
//		if(m == n)
//	{
//		printf("最大公约数为：%d\n",m);
//	}
//	while(m>n)
//	{
//	int r = m%n;
//	if(n%r == 0)
//	{
//		printf("最大公约数为：%d\n",r);
//		break;
//	}
//	else
//	{
//		n = n%r;
//		m = n;
//	}
//	}
//
//	return 0;
//}

//打印闰年	1000-2000的闰年
//int main()
//{
//	int i =1000;
//	for(i=1000;i<2001;i++)
//	{
//		if(i%4 == 0 && i%100 != 0)
//		{
//			printf("%d\n",i);
//		}
//		else if(i%400 == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}


//代码优化
//int main()
//{
//	int i = 0;
//	for(i = 1000;i <=2000;i++)
//	{
//	if(((i%4 == 0)&&(i%100 != 0))||(i%400 == 0))
//	{
//		printf("%d\n",i);
//	}
//	}
//	return 0 ;
//}

//打印素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//		//判断i是否为素数
//		//素数判断规则：
//		//1.试除法
//		//产生2- i-1之间的数字
//		//sqrt是开平方，是属于数学库函数
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//			if(j>sqrt(i))//这个if在外面！
//			{
//				count++;
//				printf("%d\n",i);
//			}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//编写一个程序数一下1-100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=0;i<=100;i++)
//	{
//		if(i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	printf("1-100里出现9的个数是：%d\n",count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4...+1/99-1/100的值，打印结果
//int main()
//{
//	int i =0;
//	double sum = 0.0;
//	double sub = 0.0;
//	double form = 0.0;
//	for(i=1;i<=100;i+=2)
//	{
//		sum = sum + 1.0/i;//这个地方有小数
//	}
//	for(i=2;i<=100;i+=2)
//	{
//		sub = sub + 1.0/i;
//	}
//	form = sum - sub;
//	printf("该式的和为：%lf\n",form);
//  return 0;
//}

//代码优化
//int main()
//{
//	double sum = 0.0;
//	int i = 0;
//	int flag = 1;
//	for(i=1;i<=100;i++)
//	{
//		sum += flag * 1.0/i;
//		flag = -flag;
//	}
//	printf("该式的和为：%lf\n",sum);
//	return 0;
//}

//求10个整数的最大值
//int main()
//{
//	int i = 0; 
//	char arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];//初始值不能定为0  是负数的话就会出现错误  
//	int sz = sizeof(arr[10])/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n",max);
//	return 0;
//}

//写一个乘法口诀表
//int main()
//{
//	int i =0; 
//	
//	for(i=1;i<10;i++)
//	{
//		int j = 1;
//		for(j=1;j<i;j++)
//		{
//			int k =1;
//			k = i*j;
//			printf("%d*%d=%-2d ",i,j,k);
//		}
//		printf("\n");
//	}
//	return 0;
//}


















