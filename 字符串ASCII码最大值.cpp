#include<iostream>
using namespace std;
char max(char a[]);
void main()
{
	char a[99];
	cout << "����һ���ַ���:";
	gets_s(a);
	cout << "���ַ�����ASCII�������ַ�Ϊ��" <<max(a)<< endl;
}
char max(char a[])
{
	int i, m;
	char ch = 0;
	m = strlen(a);
	for (i = 0; i < m; i++)
	{
		if (a[i] > ch)
			ch = a[i];
	}
	return ch;
}