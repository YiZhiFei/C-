#define _CRT_SECURE_NO_WARNINGS 1//����Դ�ļ���һ��
//�������Ĭ��Դ�ļ�����仰

#include<stdio.h>

/*
int main()
{
   int num1 = 0;
   int num2 = 0;
   int sum = 0;
   scanf("%d%d",&num1,&num2);//&ȡ��ַ������
   //scanf,strcpy,strlen,strdat...
   //���ǲ���ȫ�� ����#define�����Ժ��Ծ���
   sum = num1 + num2;
   printf("sum = %d\n",sum);
   return 0;
}*/

//int main()
//{
//	//const - ������
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	//int arr[n]={0};//�޷�����
//	//n = 20;//�޷�����
//	//����˵Ҫʹ�ó�����ʱ�򳣱�������������
//	//��������һ�����ܱ仯�ı���
//	//const���εĳ�����
//	/*const int num = 4;
//	printf("&d\n",num);
//	n
//	3;
//	100;
//	3.14;*/
//}
//3. #define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}
//4.ö�ٳ���
//ö��һһ�о�
//�Ա��У�Ů������
//��ԭɫ�������

//ö�ٹؼ� -enum

enum Sex
{
	MALE;
	FEMALE;
	SECRET;
};  
//MALE,FEMALE,SECRET - ö�ٳ���
int main()
{
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
}

