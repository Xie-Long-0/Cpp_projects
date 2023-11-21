/*********************************
 * 产生随机数
 * @author XieLong
**********************************/

#include <stdio.h>
// usleep()所需头文件
#include <unistd.h>
// srand()所需头文件
#include <stdlib.h>
// time()所需头文件
#include <time.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#include <Windows.h>
#endif

int main(int args, char *argv[])
{
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
    // 设置控制台输出编码为UTF-8
    SetConsoleOutputCP(65001);
#endif

    printf("-- 产生随机数 --\r\n");
    printf("  用法： %s [<开始的数> <结束的数> [输出个数（小于0则无限输出）]]\r\n\r\n", argv[0]);

	srand(time(0));   // 以时间作为随机数种子
    
    int start = 0, end = 0;
	int sum = -1;
    // 从程序输入参数读取
    if (args >= 3)
    {
        start = atoi(argv[1]);
        end = atoi(argv[2]);
    }
	if (args >= 4)
	{
		sum = atoi(argv[3]);
	}

    if (start == end)
    {
        printf("请输入3个整数表示随机数范围及输出个数，输出个数为负时无限输出：");
        scanf("%d %d %d", &start, &end, &sum);
    }

    if (start > end)
    {
        int tmp = start;
        start = end;
        end = tmp;
    }

    printf("产生 %d 到 %d 的随机数：\r\n", start, end);
    int tmp = 0;
	// sum小于0时无限输出
    while (sum < 0 || sum--)
    {
        tmp = start + rand() % (end - start);   // 产生随机数
        printf("%3d  ", tmp);
		if (sum < 0)
		{
        	usleep(500000);  // 暂停0.5秒
			printf("\r\n");
		}
    }
	printf("\r\n");
    return 0;
}

