#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	pid_t p;
	while ((p = fork()) < 0) printf("fork error\n");
	if (0 == p) {
		execl("./child.out", 0);
	} else {
		wait(NULL);
		exit(0);
	}
	return 0;
}

