#include <stdio.h>
#include <string.h>
#include "kmp.h"

int main(int args, char *argv[])
{
	char *strSrc = NULL;
	char *strSub = NULL;
	int result = -1;

	if (args < 3)
	{
		printf("Usage: %s <source string> <substring> \r\n\r\n", argv[0]);
		printf("Test example: \r\n");
		strSrc = "ABCBABCABDABCABD";
		strSub = "ABCAB";
		printf("Source String: %s \r\n", strSrc);
		printf("Sub String: %s \r\n\r\n", strSub);
	}
	else
	{
		strSrc = argv[1];
		strSub = argv[2];
	}

	result = kmp_search(strSrc, strSub);
	if (result < 0)
	{
		printf("找不到字符串'%s' \r\n", strSub);
	}
	else
	{
		printf("字符串'%s'第一次出现在'%s'中的位置是: %d \r\n", strSub, strSrc, result + 1);
		int len = strlen(strSub);
		printf("%s\r\n", strSrc);
		for (int i = 0; i < result; i++)
			printf("~");
		for (int i = 0; i < len; i++)
			printf("^");
		printf("\r\n");
	}

	return 0;
}
