#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	pid_t p1;
	while ((p1 = fork()) < 0)
		printf("fork error\n");
	if (p1 == 0) {
		putchar('b');
		exit(0);
	} else {
		wait(NULL);
		putchar('a');
	}
	printf("\n");
	return 0;
}

