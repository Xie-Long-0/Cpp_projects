#include <stdio.h>
#include "insertsort.h"

#define LENGTH(a) (sizeof(a)/sizeof(a[0]))

int main(void)
{
    int s[] = {5, 8, 2, 1, 3};
    int ns = LENGTH(s);
    int u[] = {10, 5, 6, 2, 3, 5, 2};
    int nu = LENGTH(u);

    binary_insert_sort(s, ns, 0);
    binary_insert_sort(u, nu, 1);

    for (int i = 0; i < ns; ++i) {
        printf("%d ", s[i]);
    }
    printf("\n");

    for (int i = 0; i < nu; ++i) {
        printf("%d ", u[i]);
    }
    printf("\n");

    return 0;
}
