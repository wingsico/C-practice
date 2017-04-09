#include<iostream>
using namespace std;
void f();
void main()
{
	f();
	f();
	f();
}
void f()
{
	static int a = 1;
	auto  b = 1.2;
	a = a + 1;
	b = b + 1;
	cout << "a=" << a << "," << "b=" << b << endl;
}