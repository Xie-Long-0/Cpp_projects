/*     打印一个爱心     */

#include <stdio.h>
#define H 0.06
//定义高，越小越高
#define W 0.025
//定义宽，越小越宽
int main()
{
 	double x, y;
	 for (y = 2; y >= -2; y -= H)
	 {
	 	for (x = -1.2; x <= 1.2; x += W)
	 	{
	 		if ((((x * x + y * y - 1) * (x * x + y * y - 1) * (x * x + y * y - 1) - x * x * y * y * y) <= 0))
	 		printf("*");
	 		else
	 		printf(" ");
	 	}
	 	printf("\n");
	 }
	 return 0;
}