#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	//���������������������к���
	for (i = 1; i <= 9; i++)
	//����9��
	{
		for (j = 1; j <= i; j++)
		//ÿһ�д�ӡ����
{
			printf("%d*%d=%2d", i, j, i * j);
			//��ӡ��ǰ�ĳ˷���ʽ
		}
		printf("\n");
		//��ӡһ�����з���������һ�еĴ�ӡ
	}
	return 0; //main��������ֵΪ0����ʾ�����ѳɹ�ִ��
}