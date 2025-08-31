/***********************************
 * Make a Integer number reverse.
 * @author XieLong
***********************************/

#include <stdio.h>

int main()
{
	printf("Input a integer number:");
	int src = 0;
	scanf("%d", &src);
	int negative = (src < 0) ? -1 : 1;
	int tmp = src * negative;
	int reverse = 0;
	int digits = 0;

	for (; tmp > 0;)
	{
		reverse = reverse * 10 + tmp % 10;
		tmp /= 10;
		digits++;
	}
	reverse *= negative;

	printf("The original number is %d .\n", src);
	printf("It has %d digits.\n", digits);
	printf("The reversed number is %d .\n", reverse);
	return 0;
}

