#include<iostream>
#include<iomanip>
using namespace std;
#include<conio.h>
enum keyvaule { F1 = 0x3b00, LeftArrow = 0x4be0, Return, ReturnKey = 0x0d,\
	ESC = 0x1b, BackSpace = 0x08 };
short int getkey()
{
	union key {
		unsigned short int value;
		unsigned char ch[2];
	}key1;
	key1.value = 0;
	while (_kbhit())
		_getch();
	while (!_kbhit());
	if (_kbhit())
	{
		key1.ch[0] = _getch();
		if (_kbhit())
			key1.ch[1] = _getch();
	}
	return key1.value;
}
void main()
{
	short int key = 0;
	cout << "������̰�������Esc����ֹ" << endl;
	cout << setiosflags(ios::showbase) << hex;
	do {
		key = getkey();
		switch (key)
		{
		case F1:cout << "������F1��,"; break;
		case LeftArrow:cout << "������LeftArrow��,"; break;
		case ReturnKey:cout << "������ReturnKey��,"; break;
		case ESC:cout << "������ESC��,"; break;
		case BackSpace:cout << "������BackSpace��,"; break;
		}
		cout << "��ǰ����ֵ��" << key << endl;
	} while (key != ESC);
}