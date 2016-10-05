#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f;
    printf("Input a b c :");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = -b/(2*a);
    f = sqrt(4*a*c-b*b)/(2*a);
    e = sqrt(b*b-4*a*c)/(2*a);
    
    if (b*b == 4*a*c)
    {
    	printf("x₁ = x₂ = %g",d);
    }
    else if (b*b > 4*a*c)
    {
    	printf("x₁ = %g\tx₂ = %g",d+e,d-e);
    }
    else
    {
    	printf("x₁ = %g+%gi\t"
    	       "x₂ = %g-%gi",d,f,d,f);
    }
    return 0;
}