#include <stdio.h>
#include <conio.h>

int main( void )
{
	unsigned long long int i = 1, s = 1;
	int n = 1;
	while ( i <= 30000000000000000000 )
	{
		printf("%2d:  %22llu\n", n++, i);
		usleep(100000);
		printf("%2d:  %22llu\n", n++, s);
		usleep(100000);
		i += s;
		s += i;
	}
	return 0;
}