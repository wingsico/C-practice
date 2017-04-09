#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int num, notation;
	cout << "输入一个十进制数:" << endl;
	cin >> num;
	cout << "输入要转换成的进制数" << endl;
	cin >> notation;
	switch (notation)
	{
	case 8:
	case 16: 
		cout << setiosflags(ios::showbase) << setbase(notation)<< num << endl;
		break;
	default:
		cout << "不能转换为改进制" << endl;
	}
}