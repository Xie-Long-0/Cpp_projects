/*    100以内的素数    */
#include <stdio.h>
#define N 100

int main()
{
	int m, n;
	printf("%d以内的素数：\n", N);
	for (m = 2; m <= N; m++)
	{
		for (n = 2; n <= m; n++)
		{
			if (m%n == 0)
			break;
		}
		if (m == n)
		printf("%2d\t ", m);
	}
	return 0;
}