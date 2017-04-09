#include<iostream>
using namespace std;
long fac(int);
void main()
{
	int n;
	cout << "input an integer:" << endl;
	cin >> n;
	if (n < 0)
		cout << "date error!" << endl;
	else
		cout << n << "! = " << fac(n) << endl;
}
long fac(int x)
{
	int i;
	long y = 1;
	for (i = 1; i <= x; i++)
		y = y*i;
	return y;
}
