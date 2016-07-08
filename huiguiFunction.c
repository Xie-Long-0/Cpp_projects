#include <stdio.h>
#include <math.h>

int i = 0, N = 0;
float a = 0, b = 0, X = 0, Y = 0, n, r;
float Xo, Yo, XX = 0, XY = 0, YY = 0;
float x[32] = { 0 }, y[32] = { 0 };

void Initnum( void )
{
	printf("How many groups of numbers do you want to input ?");
	while ( !scanf("%d", &N) || N <= 2)
	{
		printf("\nError ! Please input a right number (N > 2): ");
		getchar();
	}
	printf("\n N = %d", N);
	n = N;
}

void Input( void )
{
	for ( i = 1; i <= N; i++ )
	{
		printf("\nPlease input the %d munbers :\n", i);
		while ( !scanf("%f %f", &x[i], &y[i]) )
		{
			printf("\nError ! Please input two right numbers :\n");
			getchar();
		}
		printf("\033[34m  x[%d] = %.3f , y[%d] = %.3f .\033[0m\n", i, x[i], i, y[i]);
	}
}

void Compute( void )
{
	for ( i = 1; i <= N; i++)
	{
		X += x[i], Y += y[i];
		XX += x[i]*x[i], XY += x[i]*y[i];
		YY += y[i]*y[i];
	}
	Xo = X/n, Yo = Y/n;
	b = (XY - n*Xo*Yo)/(XX - n*Xo*Xo);
	a = Yo - b*Xo;
	r = (XY - n*Xo*Yo)/sqrt((XX - n*Xo*Xo)*(YY - n*Yo*Yo));
}

void Output( void )
{
	printf("\n  Done !\n\n");
	printf("\033[31m\033[46mX = %.3f      Y = %.3f\ny = %.3fx + %.3f\nr = %.3f\n\033[0m", Xo, Yo, b, a, r);
}

int main( void )
{
	char c;
	int t;
	do
	{
		Initnum();
		Input();
		Compute();
		Output();
		printf("\n\033[32mInput Y to continue, input other key to end...\033[0m\n");
		getchar();
		t = scanf("%c", &c);
		printf("\n__________________________________\n");
	}
	while ( t && c == 'Y');
	printf("  --END--");
	return 0;
}