/**
 * @file    insertsort.h
 * @brief   Insertion Sort C header
 * @author  XieLong
 */

#ifndef INSERTSORT_H
#define INSERTSORT_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

 /**
 * @brief   Direct Insert Sort
 * @param arr   The target array to sort.
 * @param len   The length of the array arr[].
 * @param sort_type  Specify the type of sort: false is ascending otherwise descending.
 */
void direct_insert_sort(int arr[], int len, bool sort_type);

#ifdef __cplusplus
}
#endif

#include <type_traits>
#include <exception>
#include <iostream>

/**
 * @brief   Direct Insert Sort. Overloaded function.
 * @details 使用模板进行重载与限定输入类型，数组arr只接受int、double等基础算术类型。
 * @param arr   The target array to sort. The accepted variable type is the basic arithmetic type, such as `int`, `double` etc.
 * @param len   The length of the array arr[].
 * @param sort_type  Specify the type of sort: false is ascending otherwise descending.
*/
template<typename T>
typename std::enable_if<std::is_arithmetic<T>::value, void>::type
direct_insert_sort_ex(T arr[], int len, bool sort_type = false)
{
    int i, k;
    T temp;

    try
    {
        for (i = 1; i < len; i++)
        {
            // Traversing from a[1] to a[n-1]
            temp = arr[i];

            for (k = i; k > 0; k--)
            {
                // type == false is ascending otherwise descending
                if ((sort_type == false && arr[k - 1] > temp) || (sort_type == true && arr[k - 1] < temp))
                {
                    arr[k] = arr[k - 1];    // compare with temp and move a[k-1] to a[k]
                }
                else
                {
                    break;
                }
            }

            arr[k] = temp;    // place temp to the suitable position
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

/**
 * @brief   Direct Insert Sort. Overloaded function.
 * @details 使用模板进行重载与限定输入类型，参数arr只接受vector、list等模板容器，并且该容器的类型限定为int、double等基础算术类型。
 * @param arr   The target array to sort. The accepted variable type is the basic arithmetic type, such as `int`, `double` etc.
 * @param sort_type  Specify the type of sort: false is ascending otherwise descending.
*/
template <template<typename, typename...> class M, typename T>
typename std::enable_if<std::is_arithmetic<T>::value, void>::type
direct_insert_sort_ex(M<T> &arr, bool sort_type = false)
{
    int i, k;
    T temp;
    int len = arr.size();

    try
    {
        for (i = 1; i < len; i++)
        {
            // Traversing from a[1] to a[n-1]
            temp = arr[i];

            for (k = i; k > 0; k--)
            {
                // type == false is ascending otherwise descending
                if ((sort_type == false && arr[k - 1] > temp) || (sort_type == true && arr[k - 1] < temp))
                {
                    arr[k] = arr[k - 1];    // compare with temp and move a[k-1] to a[k]
                }
                else
                {
                    break;
                }
            }

            arr[k] = temp;    // place temp to the suitable position
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}


#endif // !INSERTSORT_H
