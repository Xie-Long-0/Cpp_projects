#include <stdio.h>
#include <math.h>
int main( void )
{
	const double EPS=1e-10;
	double a, b, c, delta, e, f, point;
	printf("Input a b c :");
	
	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		delta = b*b - 4*a*c;
		point = -b / (2*a);
		f = sqrt(-delta) / (2*a);
		e = sqrt(delta) / (2*a);
		printf("∆ = %.4g\n", delta);
		if (fabs(delta) <= EPS)
		{
			printf("X₁ = X₂ = %.4g\n", point);
			// Only a root
		}
		else if (delta > EPS)
		{
			printf("X₁ = %.4g\nX₂ = %.4g\n", point + e, point - e);
			// Two roots
		}
		else
		{
			printf("X₁ = %.4g+%.4gi\nX₂ = %.4g-%.4gi\n", point, f, point, f);
			// No root
		}
		printf("\nInput a b c: ");
	}
	return 0;
}