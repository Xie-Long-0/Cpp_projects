#include <stdio.h>

long long zdgys(long long a, long long b)
{
	return (a%b == 0) ? b : zdgys(b, a%b);
}

long long zxgbs(long long c, long long d)
{
	return c*d/zdgys(c, d);
}

int main()
{
	long long x, y;
	while (1)
	{
		printf("输入两个正整数：\n");
		while ( !scanf("%lld %lld", &x, &y) || x<=0 || y<=0)
		{
			char errch[1024];
			gets(errch);
			printf("错误！请输入两个正整数：\n");
		}
		printf("最大公约数为 %lld\n", zdgys(x, y));
		printf("最小公倍数为 %lld\n\n", zxgbs(x, y));
	}
	return 0;
}
