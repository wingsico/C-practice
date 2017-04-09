#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
			cout << j << "*" << i << "=" << i*j << " "<<setiosflags(ios::left);
		cout << endl;
	}
	getchar();
}