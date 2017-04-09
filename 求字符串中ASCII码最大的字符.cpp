#include<iostream>
using namespace std;
char max(char a[], int);
void main()
{
	char arr[99], m;
	int len;
	cout << "输入一串字符：";
	gets_s(arr);  
	len = sizeof(arr) / sizeof(char);
	m = max(arr,len);
	cout << "该字符串中ASCII码最大的字符为：" << m << endl;
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