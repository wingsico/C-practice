#include<iostream>
#include<cstring>
using namespace std;
struct student
{
	char name[20];
	char sex;
	int age;
	int score[3];
};
void main()
{
	struct student stu, *p;
	int i;
	p = &stu;
	strcpy(p->name, "Li Lin");
	p->sex = 'M';
	p->age = 19;
	p->score[0] = 90;
	p->score[1] = 80;
	p->score[2] = 70;
	cout << "name:" << (*p).name << endl << "sex:" << (*p).sex << endl << "age:" << (*p).age << endl;
	cout << "score:";
	for (i = 0; i < 3; i++)
		cout << (*p).score[i] << "   ";
}