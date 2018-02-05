/*  This is only suitable for positive interger number  */

#include <stdio.h>

int main()
{
	printf("Input a number:");
	int s;
	scanf("%d", &s);
	int t = s;
	int r = 0;
	int n = 0;
	for (; t > 0; n++)
	{
		r = r*10 + t%10;
		t /= 10;
	}
	printf("The original number is %d .\nIt is %d digits.\nIt's reversion is %d .\n", s, n, r);
	return 0;
}
