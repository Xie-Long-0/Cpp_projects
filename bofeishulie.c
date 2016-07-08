#include <stdio.h>
#include <conio.h>

int main( void )
{
	int long i = 1, s = 1;
	while ( i <= 640000000 )
	{
		printf("%d\n", i);
		usleep(200000);
		printf("%d\n", s);
		usleep(200000);
		i = i + s;
		s = s + i;
	}
	return 0;
}