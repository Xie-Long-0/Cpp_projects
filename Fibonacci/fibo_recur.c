#include <stdio.h>
#include <stdlib.h>

const int MAXSIZE = 45;

int fibonacci_recursion(int arr[], int n)
{
    if (arr == NULL || n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        arr[0] = 1;
        return n;
    }
    else
    {
        arr[n - 1] = fibonacci_recursion(arr, n - 1) + fibonacci_recursion(arr, n - 2);
        return arr[n - 1];
    }
}

int main()
{
    int n = 40; // 要计算的Fibonacci数列的项数

    int *fi = (int *)malloc(sizeof(int) * MAXSIZE);
    if (n > MAXSIZE)
    {
        n = MAXSIZE;
    }

    printf("Fibonacci 数列的前 %d 项为：\n", n);
    fibonacci_recursion(fi, n);

    for (int i = 0; i < n; i++)
    {
        printf("%3d: %d\n", i + 1, fi[i]);
    }
    free(fi);

    return 0;
}
