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
	double sum = 1;
	cout<<"a = 1";
	for (int t = 2; t <= 9; t++)
	{
		sum += pow(-1, t+1)*1/Fn(t);
		if (t%2 == 0)
		cout<<" - 1/"<<Fn(t);
		else
		cout<<" + 1/"<<Fn(t);
	}
	cout<<"\n= "<<sum<<endl;
	return 0;
}