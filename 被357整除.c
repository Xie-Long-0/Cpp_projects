/*  357整除  */
#include <stdio.h>
int main()
{
	long int s, b=5, c=7, i=1;
	scanf("%ld", &s);
	if (s%3 == 0)
	{
		printf("3");
		i++;
	}
	if (s%5 == 0)
	{
		printf("%*ld", i, b);
		if (i == 1)
		i++;
	}
	if (s%7 == 0)
	printf("%*ld", i++, c);
	if (i == 1)
	printf("n");
	return 0;
}