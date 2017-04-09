#include<iostream>
using namespace std;
void main()
{
	char a[99][99];
	int  i, j, n;
	cout << "输入一个n*n矩阵的边长n：(n<100)" << endl;
	cin >> n;
	for (i = 0; i < n; i += n-1)
		for (j = 1; j < n-1; j++)
			a[i][j] ='1';
	for (i = 1; i < n-1; i++)
		for (j = 0; j < n; j += n-1)
			a[i][j] = '1';
	for (i = 0; i < n; i++)
		a[i][i] = '1';
	for (i = 0; i < n; i++)
		for (j = n-1; j >= 0; j--)
			if (i != j)
				a[i][j] = '1';
	for (i = 1; i < n - 1; i++)
		for (j = 1; j < n - 1; j++)
			if (i != j&&i != n - 1 - j)
				a[i][j] = '0';
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}
}