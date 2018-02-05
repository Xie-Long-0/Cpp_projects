/*  解一元二次方程  */
#include <stdio.h>
#include <math.h>
int main()
{
	const double EPS=1e-10;
	double a, b, c, delta, e, f, point;
	printf("Enter a b c : ");
	
	while (scanf("%lf%*c%lf%*c%lf", &a, &b, &c) != EOF)
	{
		printf("Equation : %.2gx*x%+.2gx%+.2g = 0\n", a, b, c);
		delta = b*b - 4*a*c;
		point = -b / (2*a);
		f = sqrt(-delta) / (2*a);
		e = sqrt(delta) / (2*a);
		printf("Delta = %.4f\n", delta);
		if (fabs(delta) <= EPS)
		{
			printf("X₁ = X₂ = %.4f\n", point);
			// Only a root
		}
		else if (delta > EPS)
		{
			printf("X₁ = %.4f\nX₂ = %.4f\n", point + e, point - e);
			// Two roots
		}
		else
		{
			printf("X₁ = %.4f+%.4fi\nX₂ = %.4f-%.4fi\n", point, f, point, f);
			// No root
		}
		printf("\nEnter a b c: ");
	}
	printf("ERROR!");
	return 0;
}