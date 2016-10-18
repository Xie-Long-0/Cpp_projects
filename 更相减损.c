/*   更相减损   */
#include <stdio.h>

char ch[65536];

long long int sun(long long int x, long long int y)
{
	long long int z;
	if (x <= y)
	{
		z = y;
		y = x;
		x = z;
	}
	return x-y == 0?y:sun(y, x-y);
}

void suan()
{
	long long int a, b;
	printf("输入两个正整数，求最大公约数：");
	while (!scanf("%lld %lld", &a, &b) || a<=0 || b<=0)
	{
		gets(ch);
		printf("\nERROR！请输入两个正整数：");
	}
	printf("最大公约数为 %lld\n",sun(a, b));
}

int main()
{
	char c;
	do
	{
		suan();
		gets(ch);
		printf("\nInput Y to continue, input other Key to end...\n");
	}
	while (scanf("%c", &c) && c == 'Y');
	printf(" --END--");
	return 0;
}