#include <stdio.h>
int main()
{
	char ch[2048];
	printf("请输入一个正整数：");
	long long int i, n;
	while ( !scanf("%lld", &n) || n<=0 )
	{
		gets(ch);
		printf("输入错误！请输入一个正整数：");
	}
	if ( n==1 )
	printf("1没有质因数。");
	else
	{
		printf("%lld=", n);
		for ( i=2; i<=n; i++ )
		{
			if ( n%i==0 )
			{
				if ( n==i )
				printf("%lld", i);
				else
				{
					printf("%lld*", i);
					n/=i;
					i=1;
				}
			}
		}
	}
	return 0;
}