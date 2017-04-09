#include<iostream>
using namespace std;
#include<iomanip>
int main()
{	
	const int N = 999;
	int n, i, sum = 0, j = 0, grade[N];
	float ave;
	cout << "学生人数为：" << endl;
	cin >> n;
	cout << n << "名学生的成绩为:" << endl;
	for (i = 0; i <= n - 1; i++)
	{
		cin >> grade[i];
		sum += grade[i];
	}
	ave = sum / n;
	for (i = 0; i <= n - 1; i++)
		if (grade[i] < ave)
			j = j + 1;
	for (i = 0; i <= n - 1; i++)
	{
		cout <<"No."<<i+1<<":"<<grade[i]<<endl;
	}
	cout << endl;
	cout << "ave=" << ave << ",低于平均分的人数为：" << j << endl;
	return 0;
}