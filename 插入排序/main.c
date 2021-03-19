#include <stdio.h>
#include "insertsort.h"

#define LENGTH(a) (sizeof(a)/sizeof(a[0]))

void print_array(int a[], const int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int args, char *argv[])
{
    int s[] = {5, 8, 2, 1, 3};
    int ns  = LENGTH(s);
    int u[] = {10, 5, 6, 2, 3, 5, 2};
    int nu  = LENGTH(u);
    int t[] = {5, 78, 100, 33, -6, 0, -20};
    int nt  = LENGTH(t);
    int w[] = {-4, -7, -8, 9, 6};
    int nw  = LENGTH(w);

    direct_insert_sort(s, ns, 0);
    direct_insert_sort(u, nu, 1);
    binary_insert_sort(t, nt, 0);
    binary_insert_sort(w, nw, 1);

    print_array(s, ns);
    print_array(u, nu);
    print_array(t, nt);
    print_array(w, nw);

    return 0;
}
