#define _CRT_SECURE_NO_WARNINGS 1
/*if(condition){
	return x;
}
return y;*///��δ������˼����������������x�������㷵��y�������ʽ���淶

#include<stdio.h>
//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1://�ص㣡case����������!���ǳ������ʽ��������
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n"); 
//		break;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("�����գ�\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ�գ�\n");
//		break;
//	default://���п��ޣ���������û�г��ֵ����
//		printf("����������ֲ��Ϸ���");
//	}
//}

//ѭ���ṹ
//while(){}
//int main()
//{
//	int i = 0;
//	while(i<=10)
//	{
//		printf("%d\n",i);
//	    i++;
//	}
//	return 0;
//}
//break;����ѭ��  continue;��������ѭ��


//gerchar();putchar();
//int main()
//{
//	int ch = getchar();//��ȡ�����ϵ��ַ�
//	putchar(ch);//=printf("%c\n",ch);�����
//}


//int main()
//{
//	int ch = 0;
//	//ctrl + z 
//	//EOF -> END OF FILE -> -1
//	//�������EOF�Ļ���Ҳ����EOF����Ϊgetchar()��һ���ַ�һ���ַ����յ�
//	while((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
/*
��δ�������ã�

*/
//int main()
//{
//int ret = 0;
//int ch = 0;
//char password[20] ={0};
//printf("���������룺>");//�������һ���ո񣬴��뻺����
//scanf("%s",password);//�������룬�������password������
//printf("��ȷ�ϣ�Y/N����>");
//while((ch=getchar()) != '\n')//\nǰ���ַ������գ������Ϳ�������123456 abcd������������
//{
//	;
//}
//ret = getchar();//Y/N  �����뻺���������ݣ������뺯�������Դ�ʱ�������\n��Ҫ�ټ�һ��getchar���ա�
//if(ret = 'Y')
//{
//	printf("ȷ�ϳɹ�\n");
//}
//else
//{
//	printf("����ȷ��\n");
//}
//return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!= EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//forѭ�� ���������
/*
�൱��
int i = 0;//��ʼ��
while(i<10)//����
{
i++;//����
}


for(i=1:i<10:i++)
*/
/*
���飺��1.forѭ���ڲ�Ҫд������ֵ��ѭ��
for(i=1:i<10:i++)
{
if(i=5);
printf("haha");//��������ѭ��
}

2.forѭ���У�ʹ��ǰ�պ󿪵�д��
i<10;//��д��i<=9;

3.forѭ���������ֶ�����ʡ�ԣ�ʡ�Ժ��жϲ��ֺ�Ϊ�档
����������Ҫ���ʡ��
*/
//int main()
//{
//	
//	int i =0;
//	int j =0;
//	for(;i<10;i++)
//	{
//		for(;j<10;j++)//ֻ�ܴ�ӡ��10������Ϊ��һ��ѭ��jΪ10��������ص���ʼֵ
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//����ѭ�����ٴ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(k=0,i=0;k=0;k++,i++)//����k�����ж��������Ǹ�ֵ������0��ѭ��
//	{
//		k++;
//	}
//	return 0;
//}



















