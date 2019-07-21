#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>


int main()
{
	int shmid;
	char *viraddr;

	shmid = shmget((key_t)1234, BUFSIZ, 0666| IPC_CREAT);
	if (shmid == -1)
	{
		printf("shmget failed\n");
		exit(1);
	}

	viraddr = (char*)shmat(shmid, 0, 0);
	if (viraddr == (char*)-1)
	{
		printf("shmat failed\n");
		exit(1);
	}

	printf("Your message is:\n%s\n", viraddr);

	shmdt(viraddr);
	shmctl(shmid, IPC_RMID, 0);

	return 0;
}
