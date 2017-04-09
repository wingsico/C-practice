#include<iostream>
using namespace std;
int fib(int i);
void main()
{
	int i;
	cout << "Input the item of fibonacci:" << endl;
	cin >> i;
	cout << "fib(" << i << ")=" << fib(i) << endl;
}
int fib(int i)
{
	if (i == 1 || i == 2)
		return 1;
	else
		return fib(i - 1) + fib(i - 2);
}