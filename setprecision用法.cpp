#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	double num1 = 122.07, num2 = -33.7801223, mum3 = 0.1234567123;
	cout << num1 << endl;
	cout << setprecision(0) << num2 << endl
		<< setprecision(2) << mum3 << endl
		<< setprecision(4) << num1 << endl;
	cout << setiosflags(ios::fixed);
	cout << setprecision(8) << num2 << endl;
}