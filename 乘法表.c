/*      九九乘法表      */

#include <stdio.h>

int main()
{
	for (int a = 1; a <= 9; a++) {
		for (int b = 1; b <= a; b++)
			printf("%d×%d=%-2d ", b, a, a*b);
		printf("\n");
	}
	return 0;
}
