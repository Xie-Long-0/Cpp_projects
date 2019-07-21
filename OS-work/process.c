#include <stdio.h>

#define MAXPCB 100

typedef int Time;

typedef struct process
{
	char name[10];
	int priority;
	Time reachtime;
	Time needtime;
	Time usedtime;
	char state;
} PCB;

int count_PCB = 0;
PCB pcb[MAXPCB];
int ptime = 0;

void addProcess()
{
	char buf[16], ch;
	do {
		printf("请输入进程名：");
		scanf("%s", pcb[count_PCB].name);
		printf("请输入进程优先级：");
		fgets(buf, 15, stdin);
		scanf("%d", &pcb[count_PCB].priority);
		printf("请输入进程需要的时间：");
		scanf("%d", &pcb[count_PCB].needtime);
		pcb[count_PCB].reachtime = count_PCB;
		pcb[count_PCB].usedtime = 0;
		pcb[count_PCB].state = 'W';
		count_PCB++;
		printf("是否继续增加进程？是(y)/否(n) ");
		do {
			ch = getchar();
		} while (ch != 'Y' && ch != 'N'
			&& ch != 'y' && ch != 'n');
	} while (ch == 'Y' || ch == 'y');
}

void quicksort(PCB arr[], int left, int right)
{
	int i, j;
	PCB t, temp;
	if (left > right)
		return;
	temp = arr[left];
	i = left;
	j = right;
	while (i != j) {
		while (arr[j].reachtime >= temp.reachtime
				&& i < j) j--;
		while (arr[i].reachtime <= temp.reachtime
				&& i < j) i++;
		if (i < j) {
			t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	arr[left] = arr[i];
	arr[i] = temp;
	quicksort(arr, left, i-1);
	quicksort(arr, i+1, right);
}

void sort()
{
	quicksort(pcb, 0, count_PCB-1);
	int i, j;
	PCB temp;
	for (i=0; i<count_PCB-1; i++) {
		for (j=count_PCB-2; j>=i; j--) {
			if (pcb[j+1].priority > pcb[j].priority) {
				temp = pcb[j];
				pcb[j] = pcb[j+1];
				pcb[j+1] = temp;
			}
		}
	}
	if (pcb[0].state != 'F') {
		pcb[0].state = 'R';
	}
}

void print()
{
	int i;
	sort();
	printf("\n 进程名\t 优先级\t 到达时间\t 需要时间\t 已用时间\t 进程状态 \n");
	for (i=0; i<count_PCB; i++) {
		printf(" %6s\t %6d\t %8d\t %8d\t %8d\t %6c \n",
			pcb[i].name, pcb[i].priority, pcb[i].reachtime, pcb[i].needtime,
			pcb[i].usedtime, pcb[i].state);
	}
}

void attemper()
{
	do {
		if ((pcb[0].needtime - pcb[0].usedtime) > ptime) {
			pcb[0].usedtime += ptime;
			pcb[0].priority--;
			pcb[0].state = 'W';
		} else {
			pcb[0].usedtime = pcb[0].needtime;
			pcb[0].priority = -1000;
			pcb[0].state = 'F';
		}
		print();
	} while (pcb[0].state != 'F');
}

char face()
{
	char choose;
	printf("\n增加进程并调度，请按1");
	printf("\n打印进程，请按2");
	printf("\n任务结束，请按0");
	printf("\n请选择");
	do {
		choose = getchar();
	} while (choose != '1' && choose != '2'
			&& choose != '0');
	return choose;
}

int main()
{
	char choose;
	printf("设置时间片大小：");
	scanf("%d", &ptime);
	choose = face();
	do {
		switch(choose) {
			case '1':
				addProcess();
				print();
				attemper();
				break;
			case '2':
				print();
				break;
			case '0':
				return 0;
			default: ;
		}
	} while (choose=face());
	return 0;
}
