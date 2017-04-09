#include<iostream>
#include<iomanip>
using namespace std;
struct stuff
{
	char name[20];
	int wage, f_wage, bonus, t_wage;
}stu[5] = { {"車嚴",2300,1980,2000},
		{"嫖哦",1908,2000,1000},{"川檀",2490,1080,980},
		{"藍揖蘇",980,1200,680},{"匐垂戴",1290,1800,390}
};
void main()
{
	int i, max;
	for (i = 0; i < 5; i++)
		stu[i].t_wage = stu[i].f_wage + stu[i].wage + stu[i].bonus;
	max = stu[0].t_wage;
	for (i = 1; i < 5; i++)
		if (max < stu[i].t_wage)
			max = stu[i].t_wage;
	cout.setf(ios::left);
	cout << "！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
	cout << setw(20) << "name(char 10)" << setw(15) << "wage(int)" << setw(25)
		<< "floating wages(int)" << setw(15) << "Bonus(int)" << setw(25) << "Total wages(int)" << endl;
	cout << "！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
	for (i = 0; i < 5;i++)
		cout << setw(20) << stu[i].name << setw(15) << stu[i].wage << setw(25)
		<< stu[i].f_wage << setw(15) << stu[i].bonus << setw(25) << stu[i].t_wage << endl;
	cout << "！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
	for (i = 0; i < 5; i++)
		if (max == stu[i].t_wage)
			cout << stu[i].name << " 議悳垢彿恷互��拝悳垢彿葎 " << max << endl;

}