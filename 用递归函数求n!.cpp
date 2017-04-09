#include<iostream>
using namespace std;
long fac(int n);
void main()
{
	int n;
	cout << "input an integer:" << endl;
	cin >> n;
	cout << n << "!=" << fac(n) << endl;
}
long fac(int n)
{
	long f;
	if (n == 0 || n == 1)
		f = 1;
	else
		f = n*fac(n - 1);
	return f;
}