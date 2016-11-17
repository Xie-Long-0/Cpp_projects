#include <stdio.h>
int main()
{
	int an[64][64] = { 0 };
	int i, k, j, n;
	printf("Input n to show n line: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		an[i][0] = 1;
		an[i][i] = 1;
		for (k = 1; k < i; k++)
		{
			an[i][k] = an[i - 1][k - 1] + an[i - 1][k];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = n; j > i; j--)
			printf("   ");
		for (k = 0; k <= i; k++)
			printf("%6d", an[i][k]);
		printf("\n");
	}
	return 0;
}