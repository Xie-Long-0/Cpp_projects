/**
 * 分解质因数 - 将一个正整数分解成若干个质因数相乘
*/

#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
    printf("分解质因数 - 将一个正整数分解成若干个质因数相乘\r\n");
    printf("Usage: %s [positive integer]\r\n\r\n", argv[0]);

    long long i = 0,
              num = 0;
    char buf[2048] = "\0";

    if (args >= 2)
    {
        num = atoll(argv[1]); //将字符串转换为长整数
    }

    if (num <= 0)
    {
        printf("请输入一个正整数：");
        while (!scanf("%lld", &num) || num <= 0)
        {
            fgets(buf, 2000, stdin); //用于清除输入缓冲
            printf("输入错误！请输入一个正整数：");
        }
    }

    if (num == 1)
    {
        printf("1没有质因数。\r\n");
    }
    else
    {
        printf("%lld = ", num);
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                if (num == i)
                {
                    printf("%lld", i);
                }
                else
                {
                    printf("%lld*", i);
                    num /= i;
                    i = 1;
                }
            }
        }
        printf("\r\n");
    }
    return 0;
}
