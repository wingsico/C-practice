#include<iostream>
using namespace std;
int max(int x, int y, int z);
int min(int x, int y, int z);
void main()
{
	int a, b, c, m, n;
	cout << "输入三个整数" << endl;
	cin >> a >> b >> c;
	m = max(a, b, c);
	n = min(a, b, c);
	cout << "max = " << m << ",min = " << n << endl;
}
int max(int x, int y, int z)
{
	if (x < y)
		x = y;
	if (z > x)
		x = z;
	return x;
}
int min(int x, int y, int z)
{
	if (x > y)
		x = y;
	if (z < x)
		x = z;
	return x;
}