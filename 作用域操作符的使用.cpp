#include<iostream>
using namespace std;
float A;
void main()
{
	int A;
	A = 5;
	::A = 2.5;
	cout << A << endl;
	cout << ::A << endl;
}