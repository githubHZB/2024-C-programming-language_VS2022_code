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
		//�����α���������������֮�ʹ��ڵ�����
		if (a == b && b == c)
			//�������൱
		{
			printf("�ȱ�������\n");
		}
		else if (a == b || a == c || b == c)
			//����������ȣ����ǲ����ڵ����ߣ���ʱֻ��Ҫ�ж��Ƿ������������
		{
			printf("����������\n");
		}
		//��������������������ͨ������
		else
		{
			printf("��ͨ������\n");
		}
	}
	//���ܹ���������
	else
	{
		printf("��������\n");
	}
	return 0;
}