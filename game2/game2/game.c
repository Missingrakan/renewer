#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	memset(board, set, ROWS*COLS*sizeof(board[0][0]));
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------\n");
}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = DEFAULT_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] - 8*'0';
}

void RemoveMine(char mine[ROWS][COLS], int x, int y)//第一次踩雷 移走
{
	mine[x][y] = '0';
	while (1)
	{
		int	x1 = rand() % ROW + 1;
		int	y1 = rand() % COL + 1;
		if (mine[x1][y1] != '1' && ((x1 != x) && (y1 != y)))
		{
			mine[x1][y1] = '1';
			break;
		}
	}
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* pwin)//展开函数
{
	if ((x >= 1) && (y >= 1) && (x <= ROW) && (y <= COL))
	{
		if (GetMineCount(mine, x, y) == 0)  //周围没有雷
		{
			show[x][y] = ' ';    //置为空白
			(*pwin)++;
			if (show[x - 1][y - 1] == '*')
			{
				Expand(mine, show, x - 1, y - 1,pwin);
			}
			if (show[x - 1][y] == '*')
			{
				Expand(mine, show, x - 1, y,pwin);
			}
			if (show[x - 1][y + 1] == '*')
			{
				Expand(mine, show, x - 1, y + 1,pwin);
			}
			if (show[x][y + 1] == '*')
			{
				Expand(mine, show, x, y + 1,pwin);
			}
			if (show[x + 1][y + 1] == '*')
			{
				Expand(mine, show, x + 1, y + 1,pwin);
			}
			if (show[x + 1][y] == '*')
			{
				Expand(mine, show, x + 1, y,pwin);
			}
			if (show[x + 1][y - 1] == '*')
			{
				Expand(mine, show, x + 1, y - 1,pwin);
			}
			if (show[x][y - 1] == '*')
			{
				Expand(mine, show, x, y - 1,pwin);
			}
		}
		else
		{
			show[x][y] = GetMineCount(mine, x, y) + '0';
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int count = 0;
	while (win < row*col-DEFAULT_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&& y >= 1 && y <= col)
		{
			/*if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了!\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}*/
			if (mine[x][y] == '1')
			{
				if (win == 0)
				{
					RemoveMine(mine, x, y);
					count = GetMineCount(mine, x, y);
					if (count == 0 && show[x][y] != ' ')
					{
						show[x][y] = ' ';
						Expand(mine, show, x, y, &win);
						DisplayBoard(show, row, col);
					}
					if (show[x][y] != ' ')
					{
						show[x][y] = count + '0';
						DisplayBoard(show, row, col);
						win++;
					}
				}
				else
				{
					printf("很遗憾，你被炸死了!\n");
					DisplayBoard(mine, row, col);
					break;
				}
			}
			else
			{
				count = GetMineCount(mine,x, y);
				if (count == 0 && show[x][y] != ' ')
				{
					show[x][y] = ' ';
					Expand(mine, show, x, y,&win);
				}
				if (show[x][y] != ' ')
				{
					show[x][y] = count + '0';
					win++;
				}
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入!\n");
		}
	}
	if (win == row*col - DEFAULT_COUNT)
	{
		printf("恭喜你，排雷成功!\n");
		DisplayBoard(mine, row, col);
	}
}