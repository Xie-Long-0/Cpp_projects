/**
 * C17 版本的 Fibonacci 数列递归实现
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAXSIZE = 46;

int fibonacci_recursion(int arr[], int n)
{
    if (arr == NULL || n <= 0 || n >= MAXSIZE)
    {
        return 0;
    }

    if (n <= 2)
    {
        arr[0] = 1;
        arr[1] = 1;
        return 1;
    }
    else
    {
        arr[n - 1] = fibonacci_recursion(arr, n - 1) + arr[n - 3];
        return arr[n - 1];
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
    fibonacci_recursion(fi, n);

    clock_t time1 = clock();

    for (int i = 0; i < n; i++)
    {
        printf("%2d: %10d\n", i + 1, fi[i]);
    }

    clock_t time2 = clock();

    printf("Time used: %ld ms, %ld ms\n", time1 - time0, time2 - time1);

    return 0;
}
