#include <stdio.h>
#include <math.h>

int i = 0, N = 0, t;
double a = 0, b = 0, X = 0, Y = 0, n, r;
double Xo, Yo, XX = 0, XY = 0, YY = 0;
double x[32] = {0}, y[32] = {0};

void Initnum()
{
	printf("你将输入__组数据\b\b\b\b\b\b\b\b");
	while (!scanf("%d", &N) || N <= 2)
	{
		getchar();
		printf("错误！请输入一个大于2的正整数：");
	}
	printf("\n N = %d", N);
	n = N;
}

void Input()
{
	for ( i = 1; i <= N; i++ )
	{
		printf("\n请输入第%d组数据(x,y)：\n", i);
		while ( !scanf("%lf %lf", &x[i], &y[i]) )
		{
			getchar();
			printf("错误！请输入两个数：\n");
		}
		printf("\033[34m  x[%d] = %g , y[%d] = %g .\033[0m\n", i, x[i], i, y[i]);
	}
}

void Compute()
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

void Output()
{
	printf("\n  完成！\n\n");
	printf("\033[31m\033[46mX=%.4g\nY=%.4g\ny=%.4gx%+.4g\nr=%.4g\n\033[0m", Xo, Yo, b, a, r);
}

int main()
{
	char c;
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