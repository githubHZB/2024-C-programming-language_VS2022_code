#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char Init)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = Init;
		}
	}
}

void SetMine(char Mine_board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASYCOUNT;//һ��ʮ����
	while (count)
	{
		x = rand() % row + 1;//1-9
		y = rand() % col + 1;
		if (Mine_board[x][y] == '0')
		{
			Mine_board[x][y] = '1';
			count--;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-----ɨ����Ϸ-------\n");
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{

			printf("%c ", board[i][j]);
		}
		printf("\n");

	}
	printf("-----ɨ����Ϸ-------\n");
	printf("\n");
}
//����һ
//int GetMineCount(char Mine_board[ROWS][COLS], int x, int y)
//{
//	return Mine_board[x - 1][y] + Mine_board[x - 1][y - 1] + 
//		   Mine_board[x][y - 1] + Mine_board[x + 1][y - 1] + 
//		   Mine_board[x + 1][y] + Mine_board[x + 1][y + 1] + 
//		   Mine_board[x][y + 1] + Mine_board[x - 1][y + 1] - 8 * '0';
//}
//������
int GetMineCount(char Mine_board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			sum += Mine_board[x + i][y + j] - '0';
		}
	}
	return sum;
}

void FindMine(char Mine_board[ROWS][COLS], char Show_board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int times = 0;
	while (times < row * col - EASYCOUNT)//71
	{
		printf("������Ҫ�Ų�����꣬���ÿո����:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Mine_board[x][y] == '1')
			{
				break;
			}
			else
			{
				int count = GetMineCount(Mine_board, x, y);
				Show_board[x][y] = count + '0';
				DisplayBoard(Show_board, ROW, COL);
				times++;
			}
		}
		else
		{
			printf("�Ƿ����룬���������룡\n");
		}
	}
	//1. 2.
	if (times == row * col - EASYCOUNT)
	{
		printf("��ϲ��ɨ�׳ɹ���\n");
		DisplayBoard(Mine_board, ROW, COL);
	}
	else
	{
		printf("��ը���ˣ���Ϸ������\n");
		DisplayBoard(Mine_board, ROW, COL);
	}
}