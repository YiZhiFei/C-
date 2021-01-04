#define _CRT_SECURE_NO_WARNINGS 1
/*if(condition){
	return x;
}
return y;*///这段代码的意思就是满足条件返回x，不满足返回y，代码格式不规范

#include<stdio.h>
//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1://重点！case后面是整型!还是常量表达式！常量！
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n"); 
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
//		printf("工作日！\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日！\n");
//		break;
//	default://可有可无，处理以上没有出现的情况
//		printf("您输入的数字不合法！");
//	}
//}

//循环结构
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
//break;跳出循环  continue;结束单词循环


//gerchar();putchar();
//int main()
//{
//	int ch = getchar();//获取键盘上的字符
//	putchar(ch);//=printf("%c\n",ch);更简洁
//}


//int main()
//{
//	int ch = 0;
//	//ctrl + z 
//	//EOF -> END OF FILE -> -1
//	//如果输入EOF的话，也还是EOF，因为getchar()是一个字符一个字符接收的
//	while((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
/*
这段代码的作用：

*/
//int main()
//{
//int ret = 0;
//int ch = 0;
//char password[20] ={0};
//printf("请输入密码：>");//这里会敲一个空格，存入缓冲区
//scanf("%s",password);//输入密码，并存放在password数组中
//printf("请确认（Y/N）：>");
//while((ch=getchar()) != '\n')//\n前的字符都接收，这样就可以输入123456 abcd这样的密码了
//{
//	;
//}
//ret = getchar();//Y/N  先输入缓冲区的数据，再输入函数，所以此时输入的是\n，要再加一个getchar接收。
//if(ret = 'Y')
//{
//	printf("确认成功\n");
//}
//else
//{
//	printf("放弃确认\n");
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

//for循环 更方便调整
/*
相当于
int i = 0;//初始化
while(i<10)//条件
{
i++;//调整
}


for(i=1:i<10:i++)
*/
/*
建议：。1.for循环内不要写调整数值的循环
for(i=1:i<10:i++)
{
if(i=5);
printf("haha");//会陷入死循环
}

2.for循环中，使用前闭后开的写法
i<10;//不写成i<=9;

3.for循环三个部分都可以省略，省略后判断部分恒为真。
不熟练，不要随便省略
*/
//int main()
//{
//	
//	int i =0;
//	int j =0;
//	for(;i<10;i++)
//	{
//		for(;j<10;j++)//只能打印出10个，因为第一次循环j为10，并不会回到初始值
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//以下循环多少次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(k=0,i=0;k=0;k++,i++)//这里k不是判断条件，是赋值条件，0次循环
//	{
//		k++;
//	}
//	return 0;
//}



















