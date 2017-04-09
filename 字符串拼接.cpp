#include<iostream>
using namespace std;
void f(char c1[], char c2[])
{
	int i, j;
	for (i = strlen(c1), j = 0; j <= strlen(c2); j++, i++)
	{
		c1[i] = c2[j];
	}
}
void main()
{
	char c1[60], c2[30];
	gets_s(c1);
	f(c1,c2);
	cout << c1 << endl;
}