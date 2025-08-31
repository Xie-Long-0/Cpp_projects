/*  辗转相除法  */

#include <stdio.h>

long long chu(long long a, long long b)
{
	return (a%b==0? b:chu(b,a%b));
}

void Calc()
{
	long long a, b;
	printf("Input two positive interger number:\n");
	while (!scanf("%lld %lld", &a, &b) || a<=0 || b<=0)
	{
		getchar();
		printf("Input right number!\n");
	}
	long long s=chu(a,b);
	printf("The Greatest common divisor is %lld\n", s);
	printf("The Least common multiple is %lld\n", a*b/s);
}

int main()
{
	char c;
	do {
		Calc();
		getchar();
		printf("\nInput Y to continue, input other Key to end...\n");
	}
	while (scanf("%c", &c) && (c=='Y'||c=='y'));
	printf(" --END--\n");
	return 0;
}
