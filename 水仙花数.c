/*  水仙花数  */
#include <stdio.h>
int main()
{
	int i = 100, n = 0;
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			for (int c = 0; c <= 9; c++, i++)
			{
				if (a*a*a+b*b*b+c*c*c == i)
				{
					printf("%d\t", i);
					n++;
				}
			}
		}
	}
	return 0;
}