#include<iostream>
using namespace std;
float age(int n);
int main()
{
	int n;
	float f;
	cout << "输入一个整数：" << endl;
	cin >> n;
	f=age(n);
	cout << "age(" << n << ")=" << f << endl;
}
float age(int n)
{
	if (n == 1)
		return 10;
	else
		return age(n - 1) + 2;
}