#include<iostream>
using namespace std;
void main()
{
	float x, y;
	cout << "����һ��x��ֵ��";
	cin >> x ;
	if(x<0)
	{
		y = x;
	}
	else if (x >= 0 && x < 10)
	{
		y = 2*x - 1;
	}
	else
	{
		y = 3 * x - 11;
	}
	cout << "x=" << x << "," << "y=" << y << endl;
}