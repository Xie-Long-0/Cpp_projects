/*      九九乘法表      */

#include <stdio.h>
int main()
{
	int a, b;
	
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
			printf("%d×%d=%-2d ", b, a, a*b);
		printf("\n");
	}
	return 0;
}