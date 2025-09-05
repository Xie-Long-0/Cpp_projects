/**
 * C17 版本的 Fibonacci 数列迭代实现
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAXSIZE = 46;

void fibonacci_iteration(int arr[], int len)
{
    int a = 0, b = 1, temp = 0;

    if (arr == NULL || len <= 0)
        return;
    else if (len >= MAXSIZE)
        len = MAXSIZE - 1;

    arr[0] = 1;

    for (int i = 2; i <= len; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        arr[i - 1] = b;
    }
}

int main(int argc, char *argv[])
{
    int n = MAXSIZE - 1; // 要计算的Fibonacci数列的项数

    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n >= MAXSIZE || n <= 0)
    {
        n = MAXSIZE - 1;
    }

    int fi[MAXSIZE];

    clock_t time0 = clock();

    printf("Fibonacci 数列的前 %d 项为：\n", n);
    fibonacci_iteration(fi, n);

    clock_t time1 = clock();

    for (int i = 0; i < n; i++)
    {
        printf("%2d: %10d\n", i + 1, fi[i]);
    }

    clock_t time2 = clock();

    printf("Time used: %ld ms, %ld ms\n", time1 - time0, time2 - time1);

    return 0;
}
