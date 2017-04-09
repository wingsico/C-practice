#include<iostream>
using namespace std;
const int N = 5;
void main()
{
	char str[N][20], (*p)[20] = str;
	char *ptfind = "c++";
	int i;
	cout <<"输入" << N << "个数据：" << endl;
	for (i = 0; i < N; i++)
		cin >> *(p + i);
	cout << "数据列表：" << endl << "————————————" << endl;
	for (i = 0; i < N; i++)
		cout << *(p + i) << endl;
	cout << "————————————" << endl;
	cout << "查找的字符串为" << ptfind << endl;
	for (i = 0; i < N; i++)
	{
		if (strcmp(*(p + i), ptfind) == 0)
		{
			cout << "Find it!" << endl;
			break;
		}
	}
	if (i == N)
	{
		cout << "Not Found!" << endl;
	}
}