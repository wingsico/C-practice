#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	float F, C;
	begin:cout << "���뻪���¶ȣ�";
	cin >> F;
	C = 5 * (F - 32) / 9;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "�����¶�Ϊ��" << C << "��" << endl;
	goto begin;
}