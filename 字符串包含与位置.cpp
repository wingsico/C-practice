#include<iostream>
#include<cstring>
using namespace std;
void main()
{
	char str1[20], str2[20], len1, len2;
	int i = 0,n;
	cout << "�����һ���ַ���str1(�϶�)��" << endl;
	cin >> str1;
	cout << "����ڶ����ַ���str2(�ϳ�)��" << endl;
	cin >> str2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	while(len2 - len1 >= 0)
	{
		if (strcmp(str1, str2 + len2 - len1) == 0)
		{	
			i += 1;
			cout <<"str1��str2����ʼλ��Ϊ " << len2 - len1 + 1 << endl;
		}
		str2[--len2] = '\0';
	}
	if (i == 0)
		cout << "str1��������str2��" << endl;
	else
		cout << "�� "<<i<<" ��str1������str2��" << endl;
}