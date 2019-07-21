#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	pid_t p1;
	int fd[2];
	char outpipe[50];
	char inpipe[50] = "This is a message!";
	pipe(fd);
	while ((p1 = fork()) < 0);
	if (p1 == 0) {			//子进程写
		close(fd[0]);		//关闭读端口
		write(fd[1], inpipe, 50);
		exit(0);
	} else {				//父进程读
		wait(NULL);			//等待子进程结束
		close(fd[1]);		//关闭写端口
		read(fd[0], outpipe, 50);
		printf("%s\n", outpipe);
		exit(0);
	}
	return 0;
}