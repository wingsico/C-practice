#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int num, notation;
	cout << "����һ��ʮ������:" << endl;
	cin >> num;
	cout << "����Ҫת���ɵĽ�����" << endl;
	cin >> notation;
	switch (notation)
	{
	case 8:
	case 16: 
		cout << setiosflags(ios::showbase) << setbase(notation)<< num << endl;
		break;
	default:
		cout << "����ת��Ϊ�Ľ���" << endl;
	}
}