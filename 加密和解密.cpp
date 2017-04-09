#include<iostream>
using namespace std;
void main()
{
	char a[80], b[80], c[80];
	int i = 0;
	cin >> a;
	while (a[i] != '\0')
	{
		b[i] = a[i] + 3;
		if (b[i] > 'z' || b[i] > 'Z'&&b[i] < 'a')
			b[i] = b[i] - 26;
		i++;
	}
	b[i] = '\0';
	i = 0;
	while (b[i] != '\0')
	{
		c[i] = b[i] - 3;
		if (c[i]<'a'&&c[i]>'Z' || c[i] < 'A')
			c[i] += 26;
		i++;
	}
	c[i] = '\0';
	cout << b << endl << c << endl;
}