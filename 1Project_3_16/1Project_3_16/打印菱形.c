#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);  //����
	//��ӡ
	//��ӡ�ϰ벿�ֵ�n��
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿�ֵ�n-1��
	for (i = 0; i < n; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}