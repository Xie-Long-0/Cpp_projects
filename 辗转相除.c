/*  辗转相除  */
#include <stdio.h>

long int chu(long int a, long int b)
{
	return a%b == 0?b:chu(b, a%b);
}

void suan()
{
	long int x, y;
	printf("输入两个正整数：");
	while (!scanf("%ld %ld", &x, &y) || x<=0 || y<=0)
	{
		getchar();
		printf("\n错误！请输入两个正整数：");
	}
	printf("最大公约数为 %ld\n", chu(x, y));
	printf("最小公倍数为 %ld\n", x*y/chu(x, y));
}

int main()
{
	char c;
	do
	{
		suan();
		getchar();
		printf("\nInput Y to continue, input other Key to end...\n");
	}
	while (scanf("%c", &c) && c == 'Y');
	printf(" --END--");
	return 0;
}