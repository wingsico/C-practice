#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void main()
{
	const double PI = 3.1415;
	double x, y, z;
	double log1, exp1, sqrt1, sin1, pow1, expr;
	cout << "输入变量 x,y,z 的值:" << endl;
	cin >> x >> y >> z;
	log1 = log(x);
	exp1 = exp(y);
	sqrt1 = sqrt(exp1);
	sin1 = sin(z / 180 * PI);
	pow1 = pow(x, y);
	expr = log1 + sqrt1 + sin1 + pow1;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "表达式的值为:" << setw(7) << expr << endl;
}