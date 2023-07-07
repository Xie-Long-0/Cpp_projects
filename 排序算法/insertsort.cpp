#include "insertsort.h"

void direct_insert_sort(int a[], int n, bool type)
{
    int i, k;
    int temp;

    for (i = 1; i < n; i++)
    {
        // Traversing from a[1] to a[n-1]
        temp = a[i];

        for (k = i; k > 0; k--)
        {
            // type == false is ascending otherwise descending
            if ((type == false && a[k - 1] > temp) || (type == true && a[k - 1] < temp))
            {
                a[k] = a[k - 1];      // compare with temp and move a[k-1] to a[k]
            }
            else
            {
                break;
            }
        }

        a[k] = temp;            // place temp to the suitable position
    }
}
