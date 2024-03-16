#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		//三角形必须满足任意两边之和大于第三边
		if (a == b && b == c)
			//三条边相当
		{
			printf("等边三角形\n");
		}
		else if (a == b || a == c || b == c)
			//任意两边相等，但是不等于第三边，此时只需要判断是否有两条边相等
		{
			printf("等腰三角形\n");
		}
		//两种情况都不满足输出普通三角形
		else
		{
			printf("普通三角形\n");
		}
	}
	//不能构成三角形
	else
	{
		printf("非三角形\n");
	}
	return 0;
}