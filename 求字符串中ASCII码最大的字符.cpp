#include<iostream>
using namespace std;
char max(char a[], int);
void main()
{
	char arr[99], m;
	int len;
	cout << "����һ���ַ���";
	gets_s(arr);  
	len = sizeof(arr) / sizeof(char);
	m = max(arr,len);
	cout << "���ַ�����ASCII�������ַ�Ϊ��" << m << endl;
}

char max(char a[],int len)
{
	int i;
	char j;
	for (i = 0, j = a[0]; i < len - 1; i++)
		if (j < a[i + 1])
			j = a[i + 1];
	return j;
}