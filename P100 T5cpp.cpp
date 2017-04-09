#include<iostream>
using namespace std;
void main()
{
	int i, j, sum, m, n = 4;
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		m = 1;
		for (j = 1; j <= i; j++)
			m = m*j;
		sum = sum + m;
		cout << "sum" << sum << endl;
	}
}