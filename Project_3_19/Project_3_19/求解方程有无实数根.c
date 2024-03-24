#define  _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
#include<math.h>

int main()
{
	doubel a = 0.0, b = 0.0, c = 0.0;
	doubel disc = 0.0;
	doubel p = 0.0;
	doubel q = 0.0;
	doubel x1 = 0.0;
	doubel x2 = 0.0;

	scanf("%If%If%If", &a, &b, &c");
		disc = b * b - 4 * a * c;
	if (disc < 0.0)
	{
		printf("方程没有实数根\n");
	}
	else
	{
		p = (-b) / (2 * a);
		q = sqrt(disc) / (2 * a);
		x1 = p + q;
		x2 = p - q;
		printf("x1=%7.2If x2=%7.2If\n", x1, x2);

	}

	return 0;
}
