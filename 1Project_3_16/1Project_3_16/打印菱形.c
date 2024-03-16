#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);  //输入
	//打印
	//打印上半部分的n行
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分的n-1行
	for (i = 0; i < n; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}