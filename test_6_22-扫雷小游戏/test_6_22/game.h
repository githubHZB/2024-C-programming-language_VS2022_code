#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASYCOUNT 10


//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols);
//������
void SetMine(char Mine_board[ROWS][COLS], int rows, int cols);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//����
void FindMine(char Mine_board[ROWS][COLS], char Show_board[ROWS][COLS], int row, int col);
