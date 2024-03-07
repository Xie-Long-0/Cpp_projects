#include <stdio.h>
#include <stdlib.h>

const int MAXSIZE = 50;

void fibonacci_iteration(int arr[], int len)
{
    int a = 0, b = 1, temp;

    if (arr == NULL || len <= 0)
        return;
    else if (len > MAXSIZE)
        len = MAXSIZE;

    arr[0] = 1;

    for (int i = 2; i <= len; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        arr[i - 1] = b;
    }
}

int main()
{
    int n = 45; // 要计算的Fibonacci数列的项数

    int *fi = (int *)malloc(sizeof(int) * MAXSIZE);
    if (n > MAXSIZE)
    {
        n = MAXSIZE;
    }

    printf("Fibonacci 数列的前 %d 项为：\n", n);
    fibonacci_iteration(fi, n);

    for (int i = 0; i < n; i++)
    {
        printf("%3d: %d\n", i + 1, fi[i]);
    }
	free(fi);

    return 0;
}
