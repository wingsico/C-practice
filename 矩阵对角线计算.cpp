#include<iostream>
using namespace std;
void main()
{
	int a[3][3], sum = 0;
	int i, j;
	cout << "please input the elements of a matrix:" << endl;
	for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			cin >> a[i][j];
	for (i = 0; i<3; i++)
		sum = sum + a[i][i];
	cout << "the sum of diagonal is " << sum << endl;
}