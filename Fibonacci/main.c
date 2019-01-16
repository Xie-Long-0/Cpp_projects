#include "Fibo.h"

extern const int MAXSIZE;

int main()
{
	printf("MAXSIZE = %d\n", MAXSIZE);
	int *fi = (int*)malloc(sizeof(int)*MAXSIZE);
	Fibonacci(fi);
	printf("Fibonacci array established.\n");
	for (int i=0; i<MAXSIZE; i++) {
		printf("%3d: %d\n", i+1, fi[i]);
	}
	free(fi);
	return 0;
}

