#include<iostream>
using namespace std;
void main()
{
	int a = 0, b = 0, c = 0, n, i;
	char str[20];
	cout << "����һ���ַ���" << endl;
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
	cout << "���ֵĸ���Ϊ " << a << "����ĸ�ĸ���Ϊ " << b << "�������ַ��ĸ���Ϊ " << c << endl;
}