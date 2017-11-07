#include <stdio.h>
#include <string.h>

void Reverse(char s[])
{
	int len = strlen(s);
	char temp;
	for (int i=0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
}

int main()
{
	char s[128];
	printf("Input a string:\n");
	scanf("%s", s);
	Reverse(s);
	printf("Reversion:\n%s\n", s);
	return 0;
}
