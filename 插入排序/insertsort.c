#include "insertsort.h"

void direct_insert_sort(int a[], const int n, const short mode)
{
    int i, k;
    int temp;

    if (0 == mode) {        // mode == 0 is from small to large

        for (i = 1; i < n; i++) {	// Traversing frpm a[1] to a[n-1]
            temp = a[i];

            for (k = i; (k > 0) && (a[k-1] > temp); k--)
                a[k] = a[k-1];      // compare with temp and move a[k-1] to a[k]

            a[k] = temp;            // place temp to the suitable position
        }

    } else {                // else is from large to small
        for (i = 1; i < n; i++) {
            temp = a[i];
            for (k = i; (k > 0) && (a[k-1] < temp); k--)
                a[k] = a[k-1];
            a[k] = temp;
        }
    }
}

/*
 * @brief   Binary Search
 * @param[in] a[]   The target array to search;
 * @param[in] n     The length of the array a[];
 * @param[in] data  The target element to search;
 * @param[in] mode  Used to select the searching method of the array;
 *               0: small to large;
 *           not 0: large to small.
 * @return          index of data in the a[].
 */
int binary_search(int a[], const int n, const int data, const short mode)
{
    int begin = 0;
    int end = n;
    int middle = -1;

    while (begin <= end) {
        middle = (begin + end) / 2;
        if (a[middle] > data) {
            if (0 == mode)
                end = middle - 1;
            else
                begin = middle + 1;
        } else {
            if (0 == mode)
                begin = middle + 1;
            else
                end = middle - 1;
        }
    }

    return begin;
}

void binary_insert_sort(int a[], const int n, const short mode)
{
    for (int i = 1; i < n; i++) {
        int index = binary_search(a, i - 1, a[i], mode);

        if (index != i) {
            int temp = a[i];
            for (int k = i; k > index; k--)
                a[k] = a[k - 1];
            a[index] = temp;
        }
    }
}
