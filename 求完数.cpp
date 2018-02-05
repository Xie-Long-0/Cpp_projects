#include <stdio.h>
#define N 1000
int main()
{
	int i, n, s = 0, a[1000], t = 0;
	for (n = 2; n <= 1000; n++)
	{
		for (i = 1; i <= n/2; i++)
		{
			if (n%i == 0)
			{
				s+=i;		//算出因数
				a[t++] = i; //并存入数组中
			}
		}
		if (s == n)
		{
			printf("%d = 1", n);
			for (i = 1; i < t; i++)
				printf("+%d", a[i]);
			printf("\n");
		}
		t = 0;
		s = 0;
	}
	return 0;
}