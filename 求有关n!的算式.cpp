#include<iostream>
using namespace std;
float fac(float x, int n);
void main()
{
	int i, n;
	float  t = 1, sum = 1, x, temp;
	cout << "�˺����Ǽ��� 1+x+x^2/2!+...+x^i/i! �ĺ�����������x��i��ֵ��" << endl;
	cin >> x >> i;
	for (n = 0; n < i; n++)
	{
		temp = fac(x, n);
		t = t*(n + 1);
		sum += temp / t;
	}
	cout << "����ʽ��ֵΪ��" << sum << endl;
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