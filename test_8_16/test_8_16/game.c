#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col*sizeof(board[0][0]));
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col,char set)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");

	while (1)
	{
		printf("请输入要走的坐标:>");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = set;
				break;
			}
			else
			{
				printf("输入坐标被占用，请重新输入!\n");
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入!\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col, char set)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand()%row;
		y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断一行是否相同
	int count = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		/*if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}*/
		count = 0;
		for (j = 0; j < col-1; j++)//0 1 2 3 
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				count++;//*#*
			}
		}
		if (count == row - 1)
		{
			return board[i][j];
		}
	}
	//判断一列是否相同
	for (i = 0; i < col; i++)
	{
		/*if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}*/
		count = 0;
		for (j = 0; j < row - 1; j++)//0 1 2 3 
		{
			if (board[j][i] == board[j + 1][i] && board[j][i] != ' ')
			{
				count++;
			}
		}
		if (count == row - 1)
		{
			return board[j][i];
		}
	}
	/*if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}*/
	count = 0;
	for (i = 0; i < row-1; i++)
	{
		if (board[i][i] == board[i + 1][i + 1] && board[i][i] != ' ')
		{
			count++;
		}
	}
	if (count == row - 1)
	{
		return board[0][0];
	}
	count = 0;
	for (i = 0; i < row - 1; i++)
	{
		if (board[i][col - 1 - i] == board[i + 1][col - 1 - i - 1] && board[i][col - 1 - i] != ' ')
		{
			count++;
		}
	}
	if (count == row - 1)
	{
		return board[0][col - 1];
	}
	//平局
	if (IsFull(board,row,col))
	{
		return 'P';
	}
	//继续
	return 'C';
}

