#include<iostream>
using namespace std;
void length(char *pt);
void main()
{
	char str[100];
	int n;
	gets_s(str);
	length(str);
}
void length(char *pt)
{
	int n = 0;
	while (*pt != '\0')
	{
		n++;
		*pt++;
	}
	cout << "length£º" << n << endl;
}