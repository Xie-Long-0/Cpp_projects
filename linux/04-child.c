#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    printf("I am child, pid: %d\n", getpid());
    printf("My parent pid: %d\n", getppid());
    printf("Recieve arguments:\n");
    // 读取传递进来的命令行参数
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
        usleep(10000);
    }
    return 0;
}
