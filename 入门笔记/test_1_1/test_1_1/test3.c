#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ָ��
//int main()
//{
//	int a = 10;//���ڴ�������4���ֽڵĿռ�
//	//printf("%p\n",&a);//�����ַ
//	int* p = &a;//p��һ������-ָ�����
//	//printf("%p\n",p);
//	*p = 20;//Ŀ��ͨ�������ò������ı��ַ������
//	return 0;
//}

//int main()
//{
//	double b = 3.14;
//	double* pd = &b;
//	*pd = 5.5;
//	printf("%lf\n",b);
//	printf("%d\n",sizeof(pd));//��32λ��4 64��Ϊ8
//	//���е�ַ���������������������޹�
//	printf("%d\n",sizeof(*char));
//	printf("%d\n",sizeof(*double));
//	printf("%d\n",sizeof(*float));
//	//���϶��ǵ�ַ
//	return 0;
//}

//�ṹ��
//char int double ......
//��-���Ӷ���

//����+���+����+���֤����+......
//����+����+������+����+���......
//���Ӷ��� -- �ṹ�� = �����Լ����������һ������
//

//struct Book
//{
//	char name[20];//C���Գ������//��������������һ����ַ�����ɸ�
//	short price;//55Ԫ
//};//�ֺŲ���ȱ��

//����һ
//int main(){
//	struct Book b1 = {"C���Գ������",55};
//	printf("������%s\n",b1.name);
//	printf(  "�۸�%d\n",b1.price);
//	b1.price = 15;
//  strcpy(b1.name,"C++" );//strcpy-stringcopy �ַ������� ��һ���⺯����Ҫ��#include<string.h>
//	printf("�޸ĺ�ļ۸�%d\n",b1.price);
//	return 0;
//}

//������
//int main()
//{
//	struct Book b1 = {"C���Գ������",55};//�����зֺ�
//	struct Book* pb = &b1;
//	//����pb��ӡ���ҵ������ͼ۸�
//	//.    �ṹ�����.��Ա
//	//->   �ṹ��ָ��->��Ա
//
//	printf("%s\n",pb->name);
//	printf("%d\n",pb->price);
//	return 0;
//}

//��֧ѭ��
//int main()
//{
//	int a = 0;
//	printf("���������ǣ�");//�ص㣡���ﲻ�ã�%d
//	scanf("%d",&a);
//	if(a<0 && a>150)//�ص㣡�����÷�
//		printf("����������ݲ��Ϸ���\n");
//	else if(a<18)
//		printf("δ���꣡\n");
//	else
//		printf("�����ˣ�\n");
//}

//if..else��ƥ����򣺾ͽ�ԭ��
//int main()
//{
//	int a = 20;
//	if(a>18)
//		if(a>50)
//			printf("haha");
//	else
//		printf("hehe");//�Զ�����һ��ifƥ��
//}

//���ڸ�ֵ
//int main()
//{
//	int a = 5;
//	if(5 == a)//�ص㣡������ôд��Ϊд���˱���Ҳ����ȥ
//		//= ��ֵ����  == ���ǵ���
//	{
//		printf("haha\n");
//	}
//	else 
//	{
//		printf("hehe\n");
//	}
// return 0;
//}

//��ϰ�� ��ѡ�����
//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d",&a);
//	if(1 == a%2)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("ż����\n");
//	}
//	return 0;
//}

//���0-100֮�������
int main()
{
	int i = 1;
    while (i<=100)//�ص㣡while����û�зֺţ�do...while������У�
	{
	if(1 == i%2)
		printf("%d\n",i);
	i++;
	}
	printf("������ɣ�\n");
	return 0;
}





