#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//��ϰ����һ�����������в��Ҿ����ĳ������n��
//��дint binsearch(intx,int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
//�����㷨
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
//			printf("��������±���%d\n",i);
//		}
//	}
//	if(i >= sz)
//	{
//		printf("�޷��ҵ������飡");
//	}
//	return 0;
//}

//���ַ�����
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int k = 8; 
//	int left = 0;//���±�
//	int right = sz-1;//���±�
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
//		 printf("�������±���%d\n",mid);
//		 break;
//	 }
//	}
//	if(left > right)
//	{
//		printf("�Ҳ����ˣ�\n");
//	}
//	return 0;
//}


//��ϰ����д���룬��ʾ����ַ��������ƶ������м��ۡ�
//int main()
//{
	/*
	welcome to bit!!!!!!!
	w####################
	we##################��
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
//	printf("%s\n",arr2);//ִ��ϵͳ�����һ������-cls ���
//	Sleep(100);
//	system("cls");
//	right--;
//	left++;
//	}
//	return 0;
//}

//��ϰ����д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
int main()
{
	int i = 0;
	char password[20] = {0};
	
	for(i=0;i<3;i++)
	{
		printf("����������:>");
		scanf("%s",&password);
		//if(password == "123456") //== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� -strcmp
		if(strcmp(password,"123456") == 0)
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
	    {
		printf("���벻��ȷ��");
	    }
	}
	if(3 == i)
	{
		printf("�������벻��ȷ���˳�����");
	}
	return 0;
}








