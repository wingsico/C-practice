#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	char name[20];
	char sex;
	int age;
	float score;
};
void main()
{
	struct student *p, stu[3] = { {"wang Hong",'F',20,90.0},{"Li Ming",'M',19,86.0},{"Sum Mei",'F',21,83.0} };
	p = stu;
	cout << "   name      sex  age    score" << endl;
	cout.setf(ios::right);					//等于常用控制符setioflags(ios::right).cout.setf就是cout的一个方法
	for (p = stu; p < stu + 3; p++)
	{
		cout << setw(10) << p->name << setw(5) << p->sex << setw(5) << p->age << setw(8)
			<< setprecision(2) << p->score << endl;
	}
}