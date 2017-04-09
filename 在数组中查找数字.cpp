#include<iostream>
using namespace std;
const int n = 10;
void main()
{
	int i, key, a[n];
	cout << "input " << n << " integers:" << endl;
	for (i = 0; i<n; i++)
		cin >> a[i];
	cout << "input an searching integer:" << endl;
	cin >> key;
	for (i = 0; i<n; i++)
		if (a[i] == key)
		{
			cout << key << "is in array a,the position is " << i << endl;
		}
	if (i >= n)
		cout << "not found!\n";
}