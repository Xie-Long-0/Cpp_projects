#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf",&a,&b,&c);
    d = -b/(2*a);
    f = sqrt(4*a*c-b*b)/(2*a);
    e = sqrt(b*b-4*a*c)/(2*a);
    
    if (b*b == 4*a*c)
    {
    	printf("x₁ = x₂ = %lg",d);
    }
    else if (b*b > 4*a*c)
    {
    	printf("x₁ = %lg\tx₂ = %lg",d+e,d-e);
    }
    else
    {
    	printf("x₁ = %lg+%lgi\t"
    	       "x₂ = %lg-%lgi",d,f,d,f);
    }
    getchar();
    getchar();
    getchar();
    return 0;
}
