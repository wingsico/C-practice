#include<iostream>
using namespace std;
int cycle(char *s);
void main()
{
	char str[80];
	gets_s(str);
	if (cycle(str))
		cout << "True" << endl;
	else
		cout << "False" << endl;
}
int cycle(char *s)
{
	char *begin, *end;
	for (begin = s, end = s + strlen(s) - 1; end > begin; begin++, end--)
	{
		if (*begin != *end) break;
	}
	return end <= begin;

}