#include <stdio.h>
#include <string.h>

void DelsubStr(char str[], char substr[])
{
	int len = strlen(str);
	int sublen = strlen(substr);
	for (int n=0; n<len-sublen; n++)
	{
		for (int i=0; i<sublen; i++)
		{
			if (str[n+i] != substr[i])
				break;
			if (i == sublen-1)
			{
				for (int k=n; k<=len-sublen; k++)
					str[k] = str[k+sublen];
				n--;
			}
		}
	}
}

int main()
{
	char s[] = "asdsdkbsdnk";
	char b[] = "sd";
	printf("%s\n", s);
	DelsubStr(s, b);
	printf("%s\n", s);
	return 0;
}

