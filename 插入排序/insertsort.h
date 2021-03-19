/*
 * @file    insertsort.h
 * @brief   Insertion Sort C header
 * @author  XieLong
 */

#ifndef INSERTSORT_H
#define INSERTSORT_H

/*
 * @brief   Direct Insert Sort
 * @param[in] a[]   The target array to sort;
 * @param[in] n     The length of the array a[];
 * @param[in] mode  Used to select the sorting method of the array;
 *               0: small to large;
 *           not 0: large to small.
 * @return  void
 */
void direct_insert_sort(int a[], const int n, const short mode);

/*
 * @brief   Binary Insert Sort
 * @param[in] a[]   The target array to sort;
 * @param[in] n     The length of the array a[];
 * @param[in] mode  Used to select the sorting method of the array;
 *               0: small to large;
 *           not 0: large to small.
 * @return  void
 */
void binary_insert_sort(int a[], const int n, const short mode);

#endif // !INSERTSORT_H
