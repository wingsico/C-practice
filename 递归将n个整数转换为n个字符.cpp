#include<iostream>
using namespace std;
#define N 99
int tran(int i);
void main()
{
	int i;
	cout << "输入一段整数：";
	cin >> i;
	tran(i);
	cout << endl;
}
int tran(int x)
{
	int n = x % 10;
	if (x == 0)
		return n;
	else
	{
		tran(x / 10);
		switch(n)
		{
			case 0:cout << "k ";
				break;
			case 1:cout << "z ";
				break;
			case 2:cout << "w "; 
				break;
			case 3:cout << "d "; 
				break;
			case 4:cout << "u "; 
				break;
			case 5:cout << "t "; 
				break;
			case 6:cout << "c "; 
				break;
			case 7:cout << "a "; 
				break;
			case 8:cout << "d "; 
				break;
			case 9:cout << "p "; 
				break;
		}
		return n;
	}
}