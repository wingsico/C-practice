#include<iostream>
using namespace std;
void main()
{
	char **p;
	char *name[] = { "hello","good","world","bye", };
	p = name + 1;
	while (**p != '\0')
		cout << *((*p)++);
	p += 1;
	while (**p != '\0')
		cout << *((*p)++);
}