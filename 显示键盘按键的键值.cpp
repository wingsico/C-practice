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
	cout << "输出键盘按键，按Esc键终止" << endl;
	cout << setiosflags(ios::showbase) << hex;
	do {
		key = getkey();
		switch (key)
		{
		case F1:cout << "您按下F1键,"; break;
		case LeftArrow:cout << "您按下LeftArrow键,"; break;
		case ReturnKey:cout << "您按下ReturnKey键,"; break;
		case ESC:cout << "您按下ESC键,"; break;
		case BackSpace:cout << "您按下BackSpace键,"; break;
		}
		cout << "当前按键值：" << key << endl;
	} while (key != ESC);
}