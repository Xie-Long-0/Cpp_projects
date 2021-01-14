#ifndef KMP_H
#define KMP_H

#define MAX_LEN 128

#ifdef __cplusplus
#include <string>
extern "C" {
#endif

/*
* 在strSrc字符串中使用KMP算法查找匹配的strSub子字符串，
* 查找成功则返回在strSrc中第一次出现strSub的下标，
* 查找失败则返回-1
*/
int kmp_search(const char strSrc[], const char strSub[]);

#ifdef __cplusplus
}   // !extern "C"
int kmp_search(const std::string &strSrc, const std::string &strSub);
#endif // !__cplusplus

#endif // !KMP_H
