#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t p1;
	while ((p1 = fork()) < 0)
		printf("fork error\n");
	if (p1 == 0) {
		printf("I am child, my pid is: %d \n", getpid());
		printf("My parent is: %d \n", getppid());
	} else {
		printf("I am parent, my pid is: %d \n", getpid());
		printf("My parent is: %d \n", getppid());
	}
	return 0;
}

