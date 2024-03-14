#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	//定义两个变量用来迭代行和列
	for (i = 1; i <= 9; i++)
	//控制9行
	{
		for (j = 1; j <= i; j++)
		//每一行打印几项
{
			printf("%d*%d=%2d", i, j, i * j);
			//打印当前的乘法公式
		}
		printf("\n");
		//打印一个换行符，进行下一行的打印
	}
	return 0; //main函数返回值为0，表示程序已成功执行
}