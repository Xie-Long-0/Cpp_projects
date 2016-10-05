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
    	printf("x₁ = x₂ = %.4g",d);//只有一个根
    }
    else if (b*b > 4*a*c)
    {
    	printf("x₁ = %.4g\tx₂ = %.4g",d+e,d-e);
    	//有两个实根
    }
    else
    {
    	printf("x₁ = %g+%gi\t"
    	       "x₂ = %g-%gi",d,f,d,f);
    	       //无实根
    }
    return 0;
}