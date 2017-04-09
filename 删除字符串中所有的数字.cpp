#include<iostream>
using namespace std;
void dele(char *s);
void main()
{
	char str[100];
	gets_s(str);
	dele(str);
}
void dele(char *s)
{
	int n = 0, i;
	for (i = 0; s[i]!='\0'; i++)
		if (s[i] > '9' || s[i] < '0')
			s[n++] = s[i];
	for (i = 0; i < n; i++)
		cout << s[i];
}