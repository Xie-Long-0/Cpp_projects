/*
 * Insertion Sort C header
 *
 * @Author: XieLong
 */

#ifndef INSERTSORT_H
#define INSERTSORT_H

/*
 * Direct Insert Sort
 * param:
 * [i&o] a[] is the target array to sort;
 *   [i] n is the length of the array a[];
 *   [i] mode is used to select the sorting method of the array,
 *       0 is from small to large, the other numbers are the opposite.
 * return: void
 */
void direct_insert_sort(int a[], const int n, const short mode);

/*
 * Binary Insert Sort
 * param:
 * [i&o] a[] is the target array to sort;
 *   [i] n is the length of the array a[];
 *   [i] mode is used to select the sorting method of the array,
 *       0 is from small to large, the other numbers are the opposite.
 * return: void
 */
void binary_insert_sort(int a[], const int n, const short mode);

#endif // !INSERTSORT_H
