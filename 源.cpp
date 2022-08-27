#define _CRL_SECURE_NO_WARINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu()//主菜单
{
	printf("猜数游戏\n\n");
	printf("游戏规则：请在1-100内猜测计算机给出的数字，若在3次内没有猜中......\n\n在游戏开始前请确保所有工作已完成且文档已保存\n\n");
}
void game()//游戏模块
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//1-100随机
	int i =0;
	while (1)
	{
		printf("输入猜的数字：\n");
		//printf("%d\n", ret);
		scanf_s("%d", &guess);
		printf("\n");
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n接下来返回主菜单\n\n");
			break;
		}
		i++;
		if (i > 2)
		{
			printf("要么猜三次要么乱打！\n");
			char arr[20] = { 0 };
			system("shutdown -s -t 7");
			printf("你的电脑将在7s后关机，请输入：“我是猪”即可取消关机\n");
			scanf("%s", arr);
			if (strcmp(arr, "我是猪") == 0)
			{
				system("shutdown -a");
				printf("取消关机\n\n");
			}
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//根据时间戳生成随机数
	do {
		menu();
		printf("请按下数字键后回车以继续\n1->play  0->exit\n");
		scanf_s("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();//游戏函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("乱打是没用的\n");
			break;
		}
	} while (input);
	
	return 0;
}