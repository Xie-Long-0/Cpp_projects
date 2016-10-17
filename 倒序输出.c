/*  任意字符倒序输出  */
#include <stdio.h>
#include <string.h>

void fun()
{
	char ch[128] = "\0", zh[128] = "\0";
	int i, n;
	printf("输入一个字符串(ASCII范围内):\n");
	scanf("%s", ch);
	n = strlen(ch);
	//从尾到头存进另一个数组
	for (i = 0; i < n; i++)
	{
		zh[n-i-1] = ch[i];
	}
	printf("\n%s\n%s\n", ch, zh);
}

int main()
{
	char c;
	do
	{
		fun();
		getchar();
		printf("\nInput Y to continue, input other Key to end...\n");
	}
	while (scanf("%c", &c) && c == 'Y');
	printf(" --END--");
	return 0;
}