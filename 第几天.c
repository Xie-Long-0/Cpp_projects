#include <stdio.h>
int main()
{
	int n, Y, M, D, sum;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d%d%d", &Y, &M, &D);
		sum = (Y-1)*365;
		switch (M)
		{
			case 12: sum += 30;
			case 11: sum += 31;
			case 10: sum += 30;
			case 9: sum += 31;
			case 8: sum += 31;
			case 7: sum += 30;
			case 6: sum += 31;
			case 5: sum += 30;
			case 4: sum += 31;
			case 3: sum += 28;
			case 2: sum += 31;
			case 1: sum += D; break;
		}
		int i;
		for (i = 4; i < Y; i+=4)
			sum++;
		if (Y%400==0 || (Y%4==0 && Y%100!=0))
		{
			if (M > 2)
			sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}