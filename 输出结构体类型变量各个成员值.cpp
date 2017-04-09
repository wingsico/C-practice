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
void print(struct student stu);
void main()
{
	struct student stu = { "Wang Hong",'F',20,90.0 };
	print(stu);
}
void print(struct student stu)
{
	cout << setw(10)<< stu.name << setw(5) << stu.sex << setw(5) << stu.age << setw(8) << stu.score;
}