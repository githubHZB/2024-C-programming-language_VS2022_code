#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//扫雷游戏

#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("******* 1. play *******\n");
	printf("******* 0. exit *******\n");
	printf("***********************\n");
}
void game()
{
	printf("扫雷游戏开始！\n");
	char Mine_board[ROWS][COLS] = { 0 };
	char Show_board[ROWS][COLS] = { 0 };
	InitBoard(Mine_board, ROWS, COLS, '0');
	InitBoard(Show_board, ROWS, COLS, '#');
	SetMine(Mine_board, ROW, COL);
	DisplayBoard(Show_board, ROW, COL);
	FindMine(Mine_board, Show_board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}