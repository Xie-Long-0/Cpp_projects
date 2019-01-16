#include "Fibo.h"

const int MAXSIZE = 30;

void Fibonacci(int f[])
{
	f[0] = f[1] = 1;
	for (int i=2; i<MAXSIZE; i++) {
		f[i] = f[i-1] + f[i-2];
	}
}


