#pragma warning(disable:4996)
#include <stdio.h>

//void��ȷ��������main��������Ҫ����
//int main(void)
//{
//
//}

//int main()
//{
   /*
	printf("Hello World!\n");
	printf("��һ��c���Դ���\n");
	printf("׼���˺þ�\n");
	printf("������ũ��\n");
	return 0;//��ʾ��ȷ����
	*/
	
	//char ch = 'A';//�ڴ�
	//printf("%c\n",ch);//%c -- ��ӡ�ַ���ʽ������   printf(�����ַ�����ʽ��ӡch!)

	//int age = 20;
	//printf("%d\n",20);//%d --��ӡ����ʮ��������

	/*
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	*/

	//����
	//short age = 20;//���ڴ�����2���ֽ�=16bit���������20
	//float weight=95.6f;//���ڴ�����4���ֽڣ����С����Ĭ����double��

    /*
    int a = 100;//ȫ�ֱ���/��Ա����-��������������
	int main()
	{
		int a = 10;//�ֲ�����-ֻ�������ڴ����������
		printf("%d\n",a);
		//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
		//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
		//�ֲ������޷���{}��ʹ��
		*/

//		return 0;
//	}

/*
�������÷�
int main(){

	int num1=0;
	int num2=0;
	int sum = 0;
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	//��������-ʹ�����뺯��scanf
	scanf("%d%d",&num1,&num2);//ȡ��ַ����&
	sum = num1 + num2;
	printf("sum =%d\n",sum);
	return 0;
}
*/
//����������enter int �ⲿ����
//ȫ�ֱ���������������������
/*���ͣ�
1.main�����ǳ�������
2.һ��������main�������ҽ���һ��
3.void main(){}�ǹ�ʱ��д��
4.�⺯��-C���Ա����ṩ������ʹ�õĺ���������ʹ�ñ��˵Ķ���ʱ��
  Ҫ���к�����#include
5.stdio-std:stdandard input output

�������������������ʹ�ã������������������
���������ڣ��������������ٵ�ʱ���
{}-�����

һ�������ж��.c�ļ�
���.c�ļ�ֻ����1��main����
*/