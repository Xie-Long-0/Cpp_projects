/*  辗转相除  */
#include <stdio.h>

int chu(int a, int b)
{
	return a%b == 0?b:chu(b, a%b);
}

void suan( void )
{
	int x, y;
	printf("输入两个正整数，求最大公约数：");
	while (!scanf("%d %d", &x, &y) || x <= 0 || y <= 0)
	{
		getchar();
		printf("\nERROR！请输入两个正整数：");
	}
	printf("最大公约数为 %d\n", chu(x, y));
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
	printf(" --END--\n");
	return 0;
}