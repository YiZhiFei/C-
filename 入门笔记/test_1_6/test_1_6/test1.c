#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//1.电脑会生成一个随机数字
//2.猜数字
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
//	//时间戳来设置随机数的随机起点   
//	//生成一个随机数;
//	//猜数字
//	ret = rand() % 100 + 1;
//	while(1){
//		int guess =0;
//		printf("请猜数字:>");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("猜大了！\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了！");
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
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误！\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
 
//goto语句
//尽量少用
//可以跳出多重  嵌套语句
//int main()
//{
//again:
//	printf("hello bit\n");
//	goto again;//死循环输出
//	return 0;
//}

int main()
{
	char input[20] = {0};
	//shutdown -s -t 60
	//system()- 执行系统命令符
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑在1分钟内关机！除非输入：我是猪,就取消关机。\n请输入>：");
	scanf("%s",input);
	if(strcmp(input,"我是猪") == 0)//比较两个字符串  -strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}








