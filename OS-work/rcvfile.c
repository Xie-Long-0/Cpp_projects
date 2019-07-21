#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <sys/types.h>
#include <sys/msg.h>

#define MAXMSG 512

struct my_msg {
	long int my_msg_type;
	char text[MAXMSG];
}msg;

int main()
{
	int msgid;
	long int msg_to_receive = 0;

	msgid = msgget((key_t)1234, 0666 | IPC_CREAT);
	if (msgid == -1)
	{
		printf("msgget failed\n");
		exit(1);
	}

	while (1) {
		msgrcv(msgid, &msg, BUFSIZ, msg_to_receive, 0);
		printf("You wrote: %s", msg.text);
		if (strcmp(msg.text, "end\n") == 0) break;
	}

	msgctl(msgid, IPC_RMID, 0);
	return 0;
}

