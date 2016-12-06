#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a[]={1,3,5,2,3,7,5,2};
	sort(a,a+8);
	for (int i=0;i<8;i++)
	cout<<a[i];
	return 0;
}