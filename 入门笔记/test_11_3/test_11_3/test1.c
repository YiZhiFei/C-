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

//����
//int main()
//{
//2.const - ������
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

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET - ö�ٳ���
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}
//��һ��
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//    /*enum Color c = BLUE;   c�Ǳ���*/
//	printf("%d\n",RED);
//	printf("%d\n",YELLOW);
//	printf("%d\n",BLUE);
//	return 0;
//}

//�ַ�������
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//���ַ���
//	return 0;
//}
//int main()
//{
//	char arr1[] ="abc";//����  "abc"--'a','b','c'��'\0'�ַ����Ľ�����־
//	char arr2[] ={'a','b','c'��0};//��������
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] ="abc";
//	char arr2[] ={'a','b','c'};
//	printf("%d\n",strlen(arr1));//string length-�����ַ����ĳ���
//	printf("%d\n",strlen(arr2));//���ֵ
//	return 0;
//}

//ת���ַ�
//\n ����
//\t ˮƽ�Ʊ��
//\\ ��б�ܱ����ͨб�� \'ͬ��