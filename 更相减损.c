/*   更相减损   */
#include <stdio.h>

int sun(int x, int y)
{
	int z;
	if (x <= y)
	{
		z = y;
		y = x;
		x = z;
	}
	return x-y == 0?y:sun(y, x-y);
}

void suan( void )
{
	int a, b;
	printf("输入两个正整数，求最大公约数：");
	while (!scanf("%d %d", &a, &b) || a<=0 || b<=0)
	{
		getchar();
		printf("\nERROR！请输入两个正整数：");
	}
	printf("最大公约数为 %d\n",sun(a, b));
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