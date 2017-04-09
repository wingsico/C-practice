#include<iostream>
using namespace std;
void main()
{
	int a = 0, b = 0, c = 0, n, i;
	char str[20];
	cout << "输入一个字符串" << endl;
	cin >> str;
	n = strlen(str);
	for (i = 0; i<n; i++)
	{
		if (str[i] >= '0'&&str[i] <= '9')
			a++;
		else if (str[i] >= 'A'&&str[i] <= 'Z' || str[i] >= 'a'&&str[i] <= 'z')
			b++;
		else
			c++;
	}
	cout << "数字的个数为 " << a << "，字母的个数为 " << b << "，其他字符的个数为 " << c << endl;
}