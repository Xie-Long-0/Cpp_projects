#include <stdio.h>
#include <math.h>
int main( void )
{
	double a, b, c, d, e, f;
	printf("Input a b c :");
	
	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		d = -b / (2 * a);
		f = sqrt(4 * a * c - b * b) / (2 * a);
		e = sqrt(b * b - 4 * a * c) / (2 * a);
	
		if (b * b == 4 * a * c)
		{
			printf("x₁ = x₂ = %.4g\n", d);
			// Only a root
		}
		else if (b * b > 4 * a * c)
		{
			printf("x₁ = %.4g\tx₂ = %.4g\n", d + e, d - e);
			// Two roots
		}
		else
		{
			printf("x₁ = %.4g+%.4gi\t" "x₂ = %.4g-%.4gi\n", d, f, d, f);
			// No root
		}
		printf("\nInput a b c: ");
	}
	return 0;
}