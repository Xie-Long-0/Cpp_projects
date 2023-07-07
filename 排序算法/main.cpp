#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <type_traits>

#include "insertsort.h"
#include "binarysort.h"

#define LENGTH(a) (sizeof(a)/sizeof(a[0]))

template<typename T>
void print_array(T a[], int n)
{
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ' ';
    }
    printf("\n");
}

template <template<typename, typename...> class M, typename T>
typename std::enable_if<std::is_arithmetic<T>::value, void>::type
print_array(const M<T> &a)
{
    for (auto i : a)
        std::cout << i << ' ';
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
    int nw = LENGTH(w);

    direct_insert_sort(s, ns, false);
    direct_insert_sort(u, nu, true);
    binary_insert_sort(t, nt, false);
    binary_insert_sort(w, nw, true);
    print_array(s, ns);
    print_array(u, nu);
    print_array(t, nt);
    print_array(w, nw);

    double d[] = { 2.1, 3.5, -3, -6.6, 20.4, 15, 5 };
    int nd = LENGTH(d);

    std::vector<int> v = { 10,2,3,4,5,1,2,3 };

    direct_insert_sort_ex(d, nd);
    print_array(d, nd);
    direct_insert_sort_ex(v);
    print_array(v);

    return 0;
}
