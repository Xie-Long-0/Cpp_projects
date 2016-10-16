/*    100以内的素数    */
#include <stdio.h>
#define N 492859377

int main()
{
	long long int m, n, s = 0;
	printf("%lld以内的素数：\n", N);
	for (m = 2; m <= N; m++)
	{
		for (n = 2; n <= m; n++)
		{
			if (m%n == 0)
			break;
		}
		if (m == n)
		{
			//printf("%2lld\t ", m);
			s++;
			printf("%lld\n", s);
		}
	}
	return 0;
}