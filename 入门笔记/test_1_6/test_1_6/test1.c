#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//1.���Ի�����һ���������
//2.������
void menu()
{
	printf("**************************\n");
	printf("****1.play    0.exist*****\n");
	printf("**************************\n");

}
//RAND_MAX

//void game()
//{
//	int ret = 0;
//	srand((unsigned int)time(NULL));
//	//ʱ����������������������   
//	//����һ�������;
//	//������
//	ret = rand() % 100 + 1;
//	while(1){
//		int guess =0;
//		printf("�������:>");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶��ˣ�");
//			break;
//		}
//	}
//	printf("%d\n",ret);
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
 
//goto���
//��������
//������������  Ƕ�����
//int main()
//{
//again:
//	printf("hello bit\n");
//	goto again;//��ѭ�����
//	return 0;
//}

int main()
{
	char input[20] = {0};
	//shutdown -s -t 60
	//system()- ִ��ϵͳ�����
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ�����1�����ڹػ����������룺������,��ȡ���ػ���\n������>��");
	scanf("%s",input);
	if(strcmp(input,"������") == 0)//�Ƚ������ַ���  -strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}








