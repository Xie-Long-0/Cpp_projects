#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
    long long int i = 0, n = 0;
    char ch[2048] = "\0";
    if (args >= 2)
    {
        n = atoll(argv[1]); //将字符串转换为长整数
    }
    if (n <= 0)
    {
        printf("请输入一个正整数：");
        while (!scanf("%lld", &n) || n <= 0)
        {
            gets(ch);   //用于清除输入缓冲
            printf("输入错误！请输入一个正整数：");
        }
    }

    if (n == 1)
    {
        printf("1没有质因数。\r\n");
    }
    else
    {
        printf("%lld = ", n);
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (n == i)
                    printf("%lld", i);
                else
                {
                    printf("%lld*", i);
                    n /= i;
                    i = 1;
                }
            }
        }
        printf("\r\n");
    }
    return 0;
}
