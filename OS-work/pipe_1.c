#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	pid_t p1, p2;
	int fd[2];
	char buf[50], s[50];

	if (pipe(fd) < 0) {
		printf("管道创建失败！\n");
		exit(1);
	}
	while ((p1 = fork()) < 0);
	
	if (p1 == 0) {
		lockf(fd[1], 1, 0);		//锁定管道
		sprintf(buf, "Child process p1 is sending message!\n");
		printf("Child process p1!\n");
		write(fd[1], buf, 50);
		lockf(fd[1], 0, 0);		//解锁管道
		sleep(2);
		printf("p1 %d is weakup. The parent process is %d.\n",
			getpid(), getppid());
		exit(0);
	} else {
		while ((p2 = fork()) < 0);

		if (p2 == 0) {
			lockf(fd[1], 1, 0);		//锁定管道
			sprintf(buf, "Child process p2 is sending message!\n");
			printf("Child process p2!\n");
			write(fd[1], buf, 50);
			lockf(fd[1], 0, 0);		//解锁管道
			sleep(2);
			printf("p2 %d is weakup. The parent process is %d.\n",
				getpid(), getppid());
			exit(0);
		} else {
			wait(NULL);
			if (read(fd[0], s, 50) < 0) {
				printf("can't read pipe.\n");
			} else {
				printf("Parent %d: %s\n", getpid(), s);
			}

			wait(NULL);
			if (read(fd[0], s, 50) < 0) {
				printf("can't read pipe.\n");
			} else {
				printf("Parent %d: %s\n", getpid(), s);
			}
			exit(0);
		}
	}
	return 0;
}
