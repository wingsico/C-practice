#include<iostream>
using namespace std;
void main()
{
	double i = 1;
	double n = 1.0, t = 1, e = 0;
	while(t >= 1e-6)
	{
		e = e + t;
		n = n*i;
		t = 1 / n;
		i = i + 1;
	}
	cout << "e=" << e << endl;
}