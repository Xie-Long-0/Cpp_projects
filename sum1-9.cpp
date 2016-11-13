#include <iostream>
#include <cmath>
using namespace std;

int Fn(int x)
{
	int s = x;
	for(int k = 1; k < x; k++)
	{
		s += x*pow(10, k);
	}
	return s;
}

int main()
{
	double sum = 0;
	cout<<"a = 1";
	for (int t = 2; t <= 9; t++)
	{
		sum += (double)1/Fn(t);
		cout<<" + 1/"<<Fn(t);
	}
	cout<<"\n= "<<sum<<endl;
	return 0;
}