#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void menu()
{
	printf("*************************\n");
	printf("*****     1. play   *****\n");
	printf("*****     0. exit   *****\n");
	printf("*************************\n");
}

void game()
{
	int rand_num = rand()%100 + 1;
	int guss_num = 0;
	printf("开始游戏\n");
	while (1)
	{
		printf("请输入要猜的数字:>");
		scanf("%d",&guss_num);
		if (guss_num > rand_num)
		{
			printf("猜大了!\n");
		}
		else if (guss_num < rand_num)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("恭喜你,猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误,请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}