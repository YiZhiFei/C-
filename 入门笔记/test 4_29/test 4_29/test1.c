#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
//int main()//��򵥵Ĵ���
//{
//	printf("hello world!\n");
//	return 0;
//}

////��ÿ���������͵Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short int));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 int��long��һ����
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(long double));//8
//	return 0;
//}

////ȫ�ֱ��� �ֲ�����
//int global = 2021;//ȫ�ֱ���
//int main()
//{
//	int local = 2020;//�ֲ�����
//	int global = 2021;//�ֲ����� ����ȫ�ֱ����������Ҿֲ���������ʹ��
//	printf("global = %d\n", global);
//	return 0;
//}

////������ʹ�� ���������������ܺ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("����������->");
//	scanf("%d %d", &a, &b);
//	printf("sum = %d\n", sum = a + b);
//	return 0;
//}

//const���εĳ�����ֻ�ɶ�ȡ�������޸ĵ�

////�����ַ���ӡ�Ľ����ʲô
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = {'b','i','t'};//�������룺û��\0 ���������
//	char arr3[] = { 'b','i','t','\0'};
//	printf("%s\n", arr1);//%s����ַ���
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//1������(\n)����ǰλ���ƶ�����һ�п�ͷ�� 2���س�(\r)����ǰλ���ƶ������п�ͷ��
// %c��ʽ��Ӧ���ǵ����ַ�,%s��ʽ��Ӧ�����ַ�����

////��ӡ'��"
//int main()
//{
//	printf("%s\n", "\'");
//	printf("%s\n", "\"");
//	return 0;
//}

//�����⣡��
//���������ʲô
//int main()
//{
//	printf("%d\n", strlen("abcdef"));//���� 6
//	printf("%d\n", strlen("c:\test\328\test.c"));//8������û��8  14�������ޣ��ޣ����Եģ�
//	return 0;
//}

//˳��ṹ
//ѡ��ṹ if/switch
//ѭ���ṹ for/while/do while

////ָ�볣�� ����ָ��
//int main()
//{
//	char a[] = "ABCDE";
//	char b[] = "abcde";
//	char* p1 = "abcde";
//	const char* p2 = "abcde";
//	char* const p3 = p1;
//	*p1 = 'A';//������ͨ��������ʱ����������ͼȥ�ı䳣��������
//	*p2 = 'A';//���벻��ͨ����p2ָ���ַ������������ݲ��ܸı�
//	p2 = a;//�����޸ĵ���ָ��p2��ֵ
//	*p3 = 'A';//��p3ָ������a����ô�������ж���ͨ�������p3ָ���ַ�ָ�����p1����ô������ͨ��
//	//���в���ͨ����Ϊ��ͼ�ı䳣����������
//	p3 = a;//�����ԣ�p3ָ�뱾���ܱ��޸ģ��Ǹ�����
//	p1 = a;
//	printf("%s\n", p1);
//	//printf("%s\n", p3);//abcde,p3ָ��ָ�����p1,p1һ��ʼָ����������ʱp1ָ��a����p3��Ȼָ��p1ԭ���ĵ�ַ
//	return 0;
//}

//const char* p;
//����ָ�룬ָ��һ��������ָ�룬ָ��������ǳ����������޸ģ����ڳ�����������ָ������޸�
//�� *p = b;�Ƿ�   p = &q;�Ϸ�

//char* const p = a;
//ָ�볣����ָ�뱾����һ�������������޸ģ�����ָ��ָ������ݿ����޸ģ�*p ='b';�ǿ��Եģ�p = &q;�Ƿ�

//char* p = "abc";
//�����ַ����Ƕ����ڳ������ģ�*p ='b';�ǿ��Ա���ģ����޷����У���Ϊ��ͼ�ı䳣��������
//��p��һ��ָ�����������ջ�ϡ�

//ʵս��ϰ
////����һ���ַ����ж�����ʲô�����ַ�����д��Сд�����֣������ַ���
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'a'&&ch <= 'z')
//		printf("��Сд��ĸ��\n");
//	else if (ch >= 'A'&&ch <= 'Z')
//		printf("�Ǵ�д��ĸ��\n");
//	else if (ch >= '0' && ch <= '9')
//		printf("�����֣�\n");
//	else
//		printf("�����ַ���\n");
//	return 0;
//}

////��дһ��������Բ�İ뾶r=1.2����h=1.5,����Բ���ʳ���Pi=3.1415,���Բ�������
//int main()
//{
//	double r = 1.2;
//	double h = 1.5;
//	double Pi = 3.1415;
//	double v;
//	printf("Բ�����v = %0.2lf",v = Pi * r * r * h);
//	return 0;
//}

////��дһ����������һ���ַ������������ַ��Ǵ�д��ĸ����ת��ΪСд��ĸ�����������ַ���Сд��ĸ����ת��Ϊ��д��ĸ
////����ת��
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'z')
//	{
//		ch -= 32;
//		printf("%c\n", ch);
//	}
//	else if (ch >= 'A' && ch <= 'Z')
//	{
//		ch += 32;
//		printf("%c\n", ch);
//	}
//	else
//		printf("�Ȳ��Ǵ�д��Ҳ����Сд��");
//	return 0;
//}

////���ڱ���
//int main()
//{
//	int i = 3;
//	int j = 3;
//	int k = i * j;
//	{
//		int k = 8;
//		if (i == 3)
//			printf("%d\n", k);//8
//	}
//	printf("%d\n%d\n", j,k);//3,9
//	return 0;
//}
////�ֲ�����ֻ�ھֲ���������������

////�β���ʵ��
//int main()
//{
//	int n;
//	printf("input number\n");
//	scanf("%d", &n);//5
//	s(n);
//	printf("n=%d\n", n);//15
//}
//int s(int n)
//{
//	int i;
//	for (i = n - 1; i >= 1; i--)
//		n = n + i;
//	printf("n=%d\n", n);//5
//}
////�ó�������һ������������n+(n-1)+(n-2)+...+2+1,�ȶ���ʵ�Σ�s�����е����β�
////ʵ�ε�ֵ�����βε�ֵ�ı仯���仯

//����������ĳ���ߣ�����������������
int main()
{
	double l,w,h;
	double ar1, ar2, ar3;
	scanf("%d %d %d", &l, &w, &h);
	ar1 = l * w;
	ar2 = l * h;
	ar3 = w * h;
	printf("��������ֱ��ǣ�%d %d %d\n", ar1, ar2, ar3);
	return 0;
}

