#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
struct student
{
	char name[20];
	char sex;
	int age;
	float score;
};
void change(struct student *p);
void main()
{
	struct student *p, stu[3] = { {"Wang Hong",'F',20,90.0},{"Li Ming",'M',19,50.0},
	{"Sun Mei",'F',21,83.0} };
	cout << " name sex age    score" << endl;
	cout.setf(ios::fixed);
	for (p = stu; p < stu + 3; p++)
		cout << setw(9) << p->name << setw(4) << p->sex << setw(4) << p->age << setw(10)
		<< setw(8) << setprecision(2) << p->score << endl;
	p = &stu[1];
	change(p);
	cout << "**********************" << endl;
	cout << setw(9) << (*p).name << setw(4) << (*p).sex << setw(4) << (*p).age << setw(8)
		<< setprecision(2) << (*p).score << endl;
	for (p = stu; p < stu + 3; p++)
		cout << setw(9) << p->name << setw(4) << p->sex << setw(4) << p->age << setw(10)
		<< setw(8) << setprecision(2) << p->score << endl;
}
void change(struct student *p)
{
	char name[20];
	cin >> name;
	strcpy(p->name, name);
	p->score = 92.0;
}