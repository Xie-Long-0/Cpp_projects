/*  357整除  */
#include <stdio.h>
int main()
{
	int s, b=5, c=7, i=1;
	scanf("%d", &s);
	if (s%3 == 0)
	{
		printf("3");
		i++;
	}
	if (s%5 == 0)
	{
		printf("%*d", i, b);
		if (i == 1)
		i++;
	}
	if (s%7 == 0)
	printf("%*d", i++, c);
	if (i == 1)
	printf("n");
	return 0;
}