#include "Fibo.h"

using namespace std;

int MAXSIZE;

int main()
{
	cout << "Input MAXSIZE: ";
	cin >> MAXSIZE;
	int fi[MAXSIZE];
	Fibonacci(fi);
	cout << "Fibonacci array established." << endl;
	for (int i=0; i<MAXSIZE; i++)
		printf("%3d: %d\n", i+1, fi[i]);
	return 0;
}

