#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//	int a = 10;
//	int arr[]={1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof a);
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));//����������Ԫ�ظ���
//	return 0;
//}

//����һ
//int main(){
//	int a = 0;//00000000000000000000000000000000
//	int b = ~a;//~��������λȡ��
//	//11111111111111111111111111111111
//	//���룺11111111111111111111111111111110
//	//ԭ�룺10000000000000000000000000000001
//	//ԭ�롢���롢����
//	//ԭ��ȡ���÷��룬�����һ�ò���
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����Ʋ���
//	printf("%d\n",b);//ʹ�õģ���ӡ�����������Դ��
//	return 0;
//}
/*
���䣺ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ�룬���룬���� ��ͬ
//������ 
//ԭ�룺ֱ�Ӱ�������д���Ķ���������
//���룺ԭ��ķ���λ���䣬����λȡ��
//���룺�����һ
//-2
//ԭ�룺10000000000000000000000000000010
//���룺11111111111111111111111111111101
//���룺11111111111111111111111111111110
*/

//���Ŷ�
//int main(){
//    int a =10;
//	int b = a++;
//	//�ȸ�ֵ���Լӣ�ע�����Լӣ���
//	printf("%d\n%d",a,b);//b=10 a=11
//	return 0;
//}

//ǿ��ת��
//int main()
//{
//	int a = (int)3.14;//double--int
//	//�����зŵ�������ת����Ŀ������
//	return 0;
//}

//��ϵ������
//int main()
//{
//	//�٣�0
//	//�棺��0
//	//&&-�߼���
//	//||-�߼���
//	int a = 3;
//	int b = 5;
//	int c = a&&b;//(��&&��)
//	printf("%d\n",c);
//	return 0;
//}

//����������/��Ŀ������
//int main(){
//	int a = 10;
//	int b = 20;
//	int max=0;
//	max =(a>b?a:b);
//	return 0;
//}

//�±������
//int main(){
//	//int arr[10] ={0};
//	//printf("%d\n",arr[4]);//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//()�������ò�����
//	return 0;
//
//}

//int main()
//{
//	auto int a = 10;//�ֲ�����-�Զ�������Ӧ�ö���auto�ģ�����ʡ��
//	return 0;
//}

//int main()
//{
//	register int a = 10;//����� a ����Ĵ���
//	return 0;
//}


//int main()
//{
//	signed int a = 10;//signed-�з��ţ�һ��ʡ�ԣ� unsigned-�޷��� 
//	//struct-�ṹ��ؼ���
//	//union -������/������
//	return 0;
//	//����ı��������ܺ͹ؼ��ֳ�ͻ
//}

//int main(){
//	typedef unsigned int u_int;
//	unsigned int num = 20;//=u_int num2 = 20;
// return 0;
//}

//static ���ξֲ�����
//�ֲ��������������ڱ䳤


//static ����ȫ�ֱ���
//�ı��˱�����������
//�þ�̬����ֻ�����Լ���Դ�ļ���ʹ�ã�����Դ�ļ������޷�ʹ��

//static ���ξֲ�����
//void test()
//{
//	static int a = 1;//a�Ǿ�̬�ľֲ�����
//	a++;
//	printf("a = %d\n",a);//2��3��4��5��6
//}
//int main()
//{
//	int i = 0;
//	while(i<5){
//		test();
//		i++;
//	}
//	return 0;
//}


//static ����ȫ�ֱ���

//int main()
//{
//	//extern-���������ⲿ���ŵġ�
//	extern int g_val;//��static���Σ����޷�ʹ��
//	printf("g_val = %d\n",g_val);
//	return 0;
//}

//static���κ���
//�ı��˺������������ԣ���ͨ���������ⲿ�������ԣ�ʹ��static�ͱ�����ڲ���������

//extern int Add(int t,int t)//�����ⲿ��������Ҫ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//ʹ����static���εĺ������޷�ʹ��
//	printf("%d\n",sum);
//}



//#define����ı�ʶ������
//#define MAX 100
//int main()
//{
//	int a = MAX;//100
//	printf("%d\n",a);
//	return  0;
//}

//#define ���Զ����
//int Max(int x,int y)//����
//{
//	if(x<y)
//		return y;
//	else
//		return x;
//}
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a,b);
//	printf("max = %d\n",max);
//	//��ķ�ʽ
//	max = MAX(a,b);
//   printf("max = %d\n",max);
//   return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ  int*��ָ������
//	//��һ�ֱ�����������ŵ�ַ�ģ���ָ�����
//	//printf("%p\n",&a);//=printf("%p\n",p);
//	*p = 20;//*-�����ò�����  �ҵ�p�е�a���ĳ�20
//	printf("a=%d\n",a); 
//	return 0;
//
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	printf("%d\n",sizeof(pc));//32λcpu��ָ����4���ֽڣ�64λ��8
//	return 0;
//}
















