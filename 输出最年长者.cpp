#include<iostream>
using namespace std;
struct man
{
	char name[10];
	short int age;
}person[] = { "张萌",28,"白雪",24,"朴海玉",45 };
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
	cout << "最长者姓名：" << q->name << "，年龄：" << q->age << endl;
}