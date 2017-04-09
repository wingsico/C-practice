#include<iostream>
using namespace std;
void main()
{
	int a[999], n, i, k, temp, j;
	cout << "输入你要比较的数字的个数：";
	cin >> n;
	cout << "输入 " << n << " 个数字" << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << "初始值:";
	for (i = 0; i < n; i++)
		cout << a[i]<<" ";
	cout << endl << endl;
	for (k = 0; k < n-1; k++)
	{
		j = k;
		for (i = k + 1; i < n; i++)
			if (a[j] > a[i])
				j = i;	
		temp = a[j];
		a[j] = a[k];
		a[k] = temp;
	}
	for (k = 0; k < n; k++)
		cout << a[k] << " ";
}