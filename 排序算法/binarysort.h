/*
 * @file    binarysort.h
 * @brief   Binary Sort C header
 * @author  XieLong
 */


#ifndef BINARYSORT_H
#define BINARYSORT_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

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
int binary_search(int a[], int n, int data, bool mode);

 /*
 * @brief   Binary Insert Sort
 * @param arr   The target array to sort;
 * @param len   The length of the array arr[];
 * @param sort_type  Specify the type of sort: false is ascending otherwise descending.
 */
void binary_insert_sort(int arr[], int len, bool sort_type);

#ifdef __cplusplus
}
#endif

#endif // !BINARYSORT_H
