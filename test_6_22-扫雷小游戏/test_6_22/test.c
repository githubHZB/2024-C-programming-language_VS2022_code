#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ɨ����Ϸ

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
	printf("ɨ����Ϸ��ʼ��\n");
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
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}