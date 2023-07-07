#include "binarysort.h"

int binary_search(int a[], const int n, const int data, const bool mode)
{
    int begin = 0;
    int end = n;
    int middle = -1;

    while (begin <= end)
    {
        middle = (begin + end) / 2;
        if (a[middle] > data)
        {
            if (0 == mode)
                end = middle - 1;
            else
                begin = middle + 1;
        }
        else
        {
            if (0 == mode)
                begin = middle + 1;
            else
                end = middle - 1;
        }
    }

    return begin;
}

void binary_insert_sort(int a[], int n, bool mode)
{
    for (int i = 1; i < n; i++)
    {
        int index = binary_search(a, i - 1, a[i], mode);

        if (index != i)
        {
            int temp = a[i];
            for (int k = i; k > index; k--)
                a[k] = a[k - 1];
            a[index] = temp;
        }
    }
}
