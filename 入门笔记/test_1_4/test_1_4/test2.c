#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int max = 0;
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	max = Max(a,b);
	printf("最大值为：%d",max);
	return 0;
}