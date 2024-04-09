#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    printf("Exec a process: 04-child.out\n");

    pid_t pid = fork();
    if (pid < 0)
    {
        printf("fork error\n");
        exit(EXIT_FAILURE);
    }

    if (pid == 0)
    {
        // 执行04-child.out，并传递命令行参数，注意要以NULL结尾
        if (execl("./04-child.out", "arg1", "hello2", NULL) < 0)
        {
            printf("execl error\n");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        printf("Parent pid: %d\n", getpid());

        int status;
        // 使用非阻塞的方式(WNOHANG)等待子进程退出
        while (waitpid(pid, &status, WNOHANG) != -1 || errno == EINTR)
        {
            printf("Parent: wait 10ms\n");
            usleep(10000);
        }
        printf("child process exit with status %d\n", status);
        // 父进程退出
        exit(EXIT_SUCCESS);
    }
    return 0;
}
