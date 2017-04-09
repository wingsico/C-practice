#include<iostream>
using namespace std;
float a[999][999];
int m, n, i, j;
void ia();
void ja();
void main()
{
	cout << "学生人数为:" << endl;
	cin >> m;
	cout << "功课数目为:" << endl;
	cin >> n;
	cout << "输入学生的成绩:" << endl;
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
	cout << "查询第几名学生成绩的平均分？" << endl;
	cin >> b;
	for (j = 0; j<n; j++)
	{
		sum = sum + a[b - 1][j];
	}
	cout << "该同学的平均分为 " << sum / n << endl;
}
void ja()
{
	float sum = 0;
	int b;
	cout << "查询第几个专业的平均分?" << endl;
	cin >> b;
	for (i = 0; i<m; i++)
		sum = sum + a[i][b - 1];
	cout << "该专业的平均分为 " << sum / m << endl;
}
