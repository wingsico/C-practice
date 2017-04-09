#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	float F, C;
	begin:cout << "输入华氏温度：";
	cin >> F;
	C = 5 * (F - 32) / 9;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "摄氏温度为：" << C << "℃" << endl;
	goto begin;
}