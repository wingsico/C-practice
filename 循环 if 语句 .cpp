#include<iostream>
using namespace std;
void main()
{
	char a[4], i;
	for (i = 0; i < 5; i++)
		{	
		cin >> a[i];
		if (a[i] <= 'Z'&&a[i] >= 'A')
			a[i] += 5;
		else if (a[i] <= 'z'&&a[i] >= 'a')                                                                                                                                                                                              
			a[i] += 5;
		}
	for (i = 0; i < 5;i++)
		cout << a[i];
	cout << endl;
}