#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    pid_t pid;
    // fork创建子进程，子进程共用后续代码段
    if ((pid = fork()) < 0)
    {
        printf("fork error\n");
        return -1;
    }

    // 子进程pid为0
    if (pid == 0)
    {
		printf("I am child, my pid is: %d \n", getpid());
		printf("My parent is: %d \n", getppid());
    }
    else
    {
        printf("I am parent, my pid is: %d \n", getpid());
    }
	return 0;
}
