/*
 * Insertion Sort C header
 *
 * @Author: XieLong
 */

#ifndef INSERTSORT_H
#define INSERTSORT_H

/*
 * Direct Insert Sort
 * @ a[] is the target array to sort;
 * @ n is the length of the array a[];
 * @ mode is used to select the sorting methodof the array,
 *   0 is from small to large, the other numbers are the opposite.
 */
void direct_insert_sort(int a[], const unsigned int n, const short mode);

#endif // !INSERTSORT_H
