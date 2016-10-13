/*  检查是否为素数  */
#include <stdio.h>

void su(int x)
{
	for (int i=2; i < x; i++)
	{
		if (x%i == 0 && x != i)
		{
			printf("%d是一个合数。\n", x);
			break;
		}
		printf("%d是一个素数。\n", x);
	}
}

int main()
{
	int a;
	char c;
	do
	{
		printf("请输入一个自然数：");
		while (!scanf("%d", &a) || a < 0)
		{
			getchar();
			printf("错误！输入一个非负整数：");
		}
		if (a <= 1)
		printf("0和1既不是素数也不是合数。\n");
		else
		su(a);
		printf("\n输入y继续查询，否则结束...\n");
		getchar();
		c = getchar();
	}
	while (c == 'y');
	printf("\n--END--");
	return 0;
}