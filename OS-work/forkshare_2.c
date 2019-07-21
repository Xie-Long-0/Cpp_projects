#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t p1;
	putchar('x');
	while ((p1 = fork()) < 0)
		printf("fork error\n");
	if (p1 == 0) {
		putchar('b');
		exit(0);
	} else {
		putchar('a');
	}
	printf("y\n");
	return 0;
}

