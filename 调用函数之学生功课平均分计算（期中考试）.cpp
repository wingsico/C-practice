#include<iostream>
using namespace std;
float a[999][999];
int m, n, i, j;
void ia();
void ja();
void main()
{
	cout << "ѧ������Ϊ:" << endl;
	cin >> m;
	cout << "������ĿΪ:" << endl;
	cin >> n;
	cout << "����ѧ���ĳɼ�:" << endl;
	for (i = 0; i<m; i++)
		for (j = 0; j<n; j++)
			cin >> a[i][j];
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	ia();
	ja();
}
void ia()
{
	float sum = 0;
	int b;
	cout << "��ѯ�ڼ���ѧ���ɼ���ƽ���֣�" << endl;
	cin >> b;
	for (j = 0; j<n; j++)
	{
		sum = sum + a[b - 1][j];
	}
	cout << "��ͬѧ��ƽ����Ϊ " << sum / n << endl;
}
void ja()
{
	float sum = 0;
	int b;
	cout << "��ѯ�ڼ���רҵ��ƽ����?" << endl;
	cin >> b;
	for (i = 0; i<m; i++)
		sum = sum + a[i][b - 1];
	cout << "��רҵ��ƽ����Ϊ " << sum / m << endl;
}
