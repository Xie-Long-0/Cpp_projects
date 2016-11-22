/*  倒序输出  */
#include <iostream>
#include <string.h>

 int main()
{
	while (1)
	{
		char ch[128] = "\0", zh[128] = "\0";
		int i, n;
		cout<<"\n输入一个字符串(ASCII范围内):\n";
		cin>>ch;
		n = strlen(ch);
		//从尾到头存进另一个数组
		for (i = 0; i < n; i++)
		{
			zh[n-i-1] = ch[i];
		}
		cout<<endl<<ch<<endl<<zh<<endl;
	}
	return 0;
}