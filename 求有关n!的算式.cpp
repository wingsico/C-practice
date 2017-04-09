#include<iostream>
using namespace std;
float fac(float x, int n);
void main()
{
	int i, n;
	float  t = 1, sum = 1, x, temp;
	cout << "此函数是计算 1+x+x^2/2!+...+x^i/i! 的函数，请输入x和i的值：" << endl;
	cin >> x >> i;
	for (n = 0; n < i; n++)
	{
		temp = fac(x, n);
		t = t*(n + 1);
		sum += temp / t;
	}
	cout << "该算式的值为：" << sum << endl;
}
float fac(float x, int i)
{
	float t;
	int n;
	for (n = 0, t = x; n < i; n++)
	{
		t = t*x;
	}
	return t;
}