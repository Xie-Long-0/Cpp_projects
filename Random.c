/* 
 * 产生随机数
*/

#include <stdio.h>
// usleep()所需头文件
#include <unistd.h>
// srand()所需头文件
#include <stdlib.h>
// time()所需头文件
#include <time.h>

int main(int args, char *argv[])
{
    printf("-- 产生随机数 --\r\n");
    printf("  Usage: %s [<number> <number>]\r\n", argv[0]);
    srand(time(0));   // 以时间作为随机数种子
    
    int start = 0, end = 0;
    // 从程序输入参数读取
    if (args >= 3)
    {
        start = atoi(argv[1]);
        end = atoi(argv[2]);
    }

    if (start < 0 || end < 0 || start == end)
    {
        printf("设置随机数范围（两个自然数，以空格分隔）: ");
        char buf[128] = {};
        while (!scanf("%d %d", &start, &end) || start < 0 || end < 0 || start == end)
        {
            fgets(buf, 128, stdin);
            printf("输入有误！\r\n请设置随机数范围（两个不同的自然数，以空格分隔）: ");
        }
    }

    if (start > end)
    {
        int tmp = start;
        start = end;
        end = tmp;
    }

    printf("产生 %d 到 %d 的随机数：\r\n", start, end);
    int t = 0;
    while (1)
    {
        t = start + rand() % (end - start);   // 产生随机数
        printf("\n%d", t);
        usleep(500000);  // 暂停0.5秒
    }
    return 0;
}
