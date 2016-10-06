#include <stdio.h>
//#include <math.h>
#include <stdlib.h>
//abs()在G++中的头文件
int main()
{
	char c;
	int i, n, m;
	scanf("%c", &c);
	for (n = 4;n >= -4;n -= 2)
	{
		for (i = abs(n)/2;i > 0;i--)
		printf(" ");
		for (m = 5-abs(n); m > 0; m--)
		printf("%c", c);
		printf("\n");
	}
	return 0;
}