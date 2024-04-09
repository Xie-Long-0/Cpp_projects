#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    pid_t pid;
    // 创建子进程
    if ((pid = fork()) < 0)
    {
        printf("fork error\n");
        return -1;
    }

    printf("fork begin\n");
    if (pid == 0)
    {
        printf("I am child, my pid is: %d \n", getpid());
        printf("My parent is: %d \n", getppid());
        // 退出子进程，不执行后面的代码
        exit(0);
    }
    else
    {
        printf("I am parent, my pid is: %d \n", getpid());
        // 等待子进程退出
        wait(NULL);
    }
    printf("fork end\n");
    return 0;
}
