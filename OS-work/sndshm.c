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
	char buffer[BUFSIZ];

	shmid = shmget((key_t)1234, BUFSIZ, 0666 | IPC_CREAT);
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

	while (1) {
		printf("Enter some texts:\n");
		fgets(buffer, BUFSIZ, stdin);
		strcat(viraddr, buffer);
		if (strcmp(buffer, "end\n") == 0) break;
	}
	shmdt(viraddr);

	return 0;
}
