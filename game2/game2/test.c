#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	printf("开始游戏,loading!!!!!!!!!!!\n");
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);


}

void menu()
{
	printf("*******************************\n");
	printf("******      1. play      ******\n");
	printf("******      0. exit      ******\n");
	printf("*******************************\n");
}

void test()
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
			printf("选择错误，请重新输入!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}