#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  //C语言头文件

int main()
{
	int i=0  
		//定义变量用来遍历1-100;
		;for (i = 1; i <= 100; i++)
			//for循环语句，将i初始化为1，当i不大于100时进入循环，i的值加1后继续判断进入循环
		{
			if (i % 2 == 1)
				//判断当前i值是否为奇数，若是则打印i的值以及一个空格
				printf("%d", i);
		}
	    return 0;
	//在main函数中返回0，表示程序已经成功执行
}

