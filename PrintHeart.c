/*     打印一个心形     */

#include <stdio.h>

int main(int args, char *argv[])
{
	double h, w, x, y;
	if (1 == args || 3 != args) {
		h = 0.1;
		w = 0.04;
		printf("Use default values: h = %g, w = %g\n", h, w);
	}
	else if (3 == args) {
		if (1 != sscanf(argv[1], "%lf", &h) ||
			1 != sscanf(argv[2], "%lf", &w) )
		{
			h = 0.1;
			w = 0.04;
			printf("Invalid arguments or values.\n"
				   "Usage: %s [<double h> <double w>]\n"
				   "Use default values: h = %g, w = %g\n",
				   argv[0], h, w);
		}
	}

	for (y = 2; y >= -2; y -= h) {
		for (x = -2; x <= 2; x += w) {
			if (((x * x + y * y - 2.2)*(x * x + y * y - 2.2)*(x * x + y * y - 2.2) - x * x * y * y * y) <= 0.0)
				printf(".");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
