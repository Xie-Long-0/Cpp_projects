#include <stdio.h>
int main()
{
	unsigned long long int a[30000]={0, 1};
	int n, i;
	char ch[2048];
	printf("请输入要查询多少个月的情况（小于等于80）：");
	while (!scanf("%d", &n) || n <= 0 || n > 80)
	{
		gets(ch);
		printf("错误！请输入一个80以内的正整数：");
	}
	for ( i=1; i <= n; i++)
	{
		a[i+1] = a[i] + a[i-1];
		printf("第%2d个月： %*llu 只兔子\n", i, n/4+1, 2*a[i]);
	}
	return 0;
}