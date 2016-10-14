/* UTF-8编码 */
#include <stdio.h>
int main()
{
	printf("请输入一个正整数：");
	int i, n;
	while ( !scanf("%d", &n) || n<=0 )
	{
		getchar();
		printf("输入错误！请输入一个正整数：");
	}
	if ( n<=1 )
	printf("0和1没有质因数。");
	else
	{
		printf("%d=", n);
		for ( i=2; i<=n; i++ )
		{
			if ( n%i==0 )
			{
				if ( n==i )
				printf("%d", i);
				else
				{
					printf("%d*", i);
					n/=i;
					i=2;
				}
			}
		}
	}
	return 0;
}