#include<iostream>
using namespace std;
void main()
{
	int a[999], n, i, k, temp, j;
	cout << "������Ҫ�Ƚϵ����ֵĸ�����";
	cin >> n;
	cout << "���� " << n << " ������" << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << "��ʼֵ:";
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