#include<iostream>
using namespace std;
int a = 3, b = 5;
int max(int, int);
void main()
{
	int a = 8;
	cout << max(a, b) << endl;
}
int max(int a, int b)
{
	int c;
	c = a > b ? a : b;
	return c;
}