#include<iostream>
using namespace std;
void main()
{
	int num;
	cin >> num;
	while (num > 0)
	{
		if (num % 2 == 0)
			num = num / 2;
		else
			num = 3 * num + 1;
		cout << " " << num;
	}
}