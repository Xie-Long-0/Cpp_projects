/*  检查是否为素数  */
#include <stdio.h>

void su(long long int x)
{
	for (long long int i=2; i < x; i++)
	{
		if (x%i == 0 && x != i)
		{
			printf("%lld是一个合数。\n", x);
			break;
		}
	}
	//
	printf("%lld是一个素数。\n", x);
}

int main()
{
	long long int a;
	char ch[1024], c;
	do
	{
		printf("请输入一个自然数：");
		while (!scanf("%lld", &a) || a < 0)
		{
			gets(ch);
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