#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������ִ�еĽ���ǣ�
//#int main()
//{
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		if(i = 5)
//			printf("%d",i);
//	}
//	return 0;
//}//������������ѭ����ӡ5

//��ϰ��д���뽫���������Ӵ�С���
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


//дһ�������ӡ1-100֮������3�ı���������
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

//���������������Լ����
 //շת�����
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
//		printf("���Լ��Ϊ��%d\n",m);
//	}
//	while(m>n)
//	{
//	int r = m%n;
//	if(n%r == 0)
//	{
//		printf("���Լ��Ϊ��%d\n",r);
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

//��ӡ����	1000-2000������
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


//�����Ż�
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

//��ӡ����
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//1.�Գ���
//		//����2- i-1֮�������
//		//sqrt�ǿ�ƽ������������ѧ�⺯��
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//			if(j>sqrt(i))//���if�����棡
//			{
//				count++;
//				printf("%d\n",i);
//			}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//��дһ��������һ��1-100�����������г��ֶ��ٸ�����9
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
//	printf("1-100�����9�ĸ����ǣ�%d\n",count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4...+1/99-1/100��ֵ����ӡ���
//int main()
//{
//	int i =0;
//	double sum = 0.0;
//	double sub = 0.0;
//	double form = 0.0;
//	for(i=1;i<=100;i+=2)
//	{
//		sum = sum + 1.0/i;//����ط���С��
//	}
//	for(i=2;i<=100;i+=2)
//	{
//		sub = sub + 1.0/i;
//	}
//	form = sum - sub;
//	printf("��ʽ�ĺ�Ϊ��%lf\n",form);
//  return 0;
//}

//�����Ż�
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
//	printf("��ʽ�ĺ�Ϊ��%lf\n",sum);
//	return 0;
//}

//��10�����������ֵ
//int main()
//{
//	int i = 0; 
//	char arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];//��ʼֵ���ܶ�Ϊ0  �Ǹ����Ļ��ͻ���ִ���  
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

//дһ���˷��ھ���
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


















