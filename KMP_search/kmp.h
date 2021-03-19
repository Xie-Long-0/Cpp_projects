/*
* @file
* @brief    KMP算法实现
* @authur   XieLong
*/

#ifndef KMP_H
#define KMP_H

#define MAX_LEN 128

#ifdef __cplusplus
#include <string>
extern "C" {
#endif

/*
* @brief    使用KMP算法查找字符串
* @details  在源字符串中查找匹配的子字符串，
*           查找成功返回在源字符串中第一次出现子字符串的下标，
*           查找失败则返回-1。
* @param[in] strSrc[] 源字符串
* @param[in] strSub[] 子字符串
* @return   子字符串第一次出现的下标
*   @retval >=0 成功
*   @retval -1  失败
*/
int kmp_search(const char strSrc[], const char strSub[]);

#ifdef __cplusplus
}   // !extern "C"

int kmp_search(const std::string &strSrc, const std::string &strSub);
#endif // !__cplusplus

#endif // !KMP_H
