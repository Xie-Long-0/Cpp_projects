#include <iostream>
#define N 1000
using namespace std;
int main()
{
	int i, n, s = 0, a[1000], t = 0;
	for (n = 2; n <= 1000; n++)
	{
		for (i = 1; i <= n/2; i++)
		{
			if (n%i == 0)
			{
				s+=i;		//算出因数
				a[t++] = i; //并存入数组中
			}
		}
		if (s == n)
		{
			cout<<n<<"→1";
			for (i = 1; i < t; i++)
			cout<<", "<<a[i];
			cout<<endl;
		}
		t = 0;
		s = 0;
	}
	return 0;
}