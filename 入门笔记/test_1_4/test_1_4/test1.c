#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//练习：在一个有序数组中查找具体的某个数字n。
//编写int binsearch(intx,int v[],int n);功能：在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
//遍历算法
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<k;i++)
//	{
//		if(k == arr[i])
//		{
//			printf("该数组的下标是%d\n",i);
//		}
//	}
//	if(i >= sz)
//	{
//		printf("无法找到该数组！");
//	}
//	return 0;
//}

//二分法查找
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int k = 8; 
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	while(left<=right)
//	{
//	 int mid = (left+right)/2;
//	 if(arr[mid] > k)
//	 {
//		 right = mid-1;
//	 }
//	 else if(arr[mid] < k)
//	 {
//		 left =mid+1;
//	 }
//	 else
//	 {
//		 printf("该数组下标是%d\n",mid);
//		 break;
//	 }
//	}
//	if(left > right)
//	{
//		printf("找不到了！\n");
//	}
//	return 0;
//}


//练习：编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
	/*
	welcome to bit!!!!!!!
	w####################
	we##################！
	wel################!!
	......
	welcome to bit!!!!!!!
	*/
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int right = strlen(arr1)-1;
//	int left = 0;
//	while(left<=right)
//	{
//	arr2[left]=arr1[left];
//	arr2[right]=arr1[right];
//	printf("%s\n",arr2);//执行系统命令的一个函数-cls 清空
//	Sleep(100);
//	system("cls");
//	right--;
//	left++;
//	}
//	return 0;
//}

//练习：编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序）
int main()
{
	int i = 0;
	char password[20] = {0};
	
	for(i=0;i<3;i++)
	{
		printf("请输入密码:>");
		scanf("%s",&password);
		//if(password == "123456") //== 不能用来比较两个字符串是否相等，应该使用一个库函数 -strcmp
		if(strcmp(password,"123456") == 0)
		{
			printf("登录成功！\n");
			break;
		}
		else
	    {
		printf("密码不正确！");
	    }
	}
	if(3 == i)
	{
		printf("三次密码不正确，退出程序。");
	}
	return 0;
}








