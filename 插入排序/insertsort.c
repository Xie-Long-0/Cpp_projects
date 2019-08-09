#include "insertsort.h"

void direct_insert_sort(int a[], const unsigned int n, const short mode)
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
