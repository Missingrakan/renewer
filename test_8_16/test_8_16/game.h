

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row,int col);
void PlayerMove(char board[ROW][COL], int row, int col, char set);
void ComputerMove(char board[ROW][COL],int row,int col,char set);
// '*' -- ���Ӯ
// '#' -- ����Ӯ
// 'P' --  ƽ��
// 'C' --  ����
char IsWin(char board[ROW][COL], int row, int col);
