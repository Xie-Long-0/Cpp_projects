#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void myThread1(void)
{
	int i;
	for (i = 0; i < 30; i++) {
		printf("This is the %da pthread created.\n", i);
		sleep(1);
	}
}

void myThread2(void)
{
	int i;
	for (i = 0; i < 30; i++) {
		printf("This is the %db pthread created.\n", i);
		sleep(1);
	}
}

int main()
{
	int i = 0, ret = 0;
	pthread_t id1, id2;

	ret = pthread_create(&id1, NULL, (void*)myThread1, NULL);
	if (ret != 0) {
		printf("Create pthread error!\n");
		return 1;
	}

	ret = pthread_create(&id2, NULL, (void*)myThread2, NULL);
	if (ret != 0) {
		printf("Create pthread error!\n");
		return 1;
	}

	pthread_join(id1, NULL);
	pthread_join(id2, NULL);
	return 0;
}
