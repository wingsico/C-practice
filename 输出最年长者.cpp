#include<iostream>
using namespace std;
struct man
{
	char name[10];
	short int age;
}person[] = { "����",28,"��ѩ",24,"�Ӻ���",45 };
void main()
{
	man *p, *q;
	int old;
	p = &person[0];
	old = p->age;
	q = p;
	for (; p < &person[3];p++)
		if (old < p->age)
		{
			q = p;
			old = q->age;
		}
	cout << "���������" << q->name << "�����䣺" << q->age << endl;
}