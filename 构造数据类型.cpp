#include<iostream>
using namespace std;
struct student
{
	struct birthday
	{
		int year;
	}bir, *pbir;
}stu;
struct student *pstu = &stu;

void main()
{
	cout << "sb";
	cin >> pstu->bir.year;
	cout << pstu->bir.year;
}