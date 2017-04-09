#include<iostream>
#include<iomanip>
#include<ctime>														//包含系统时间函数
/* struct tm{														//ctime 中定义的日期时间结构
int tm_sec;															//秒，0~59
int tm_min;															//分，0~59
int tm_hour;														//时，0~23
int tm_mday;														//天数,1~31
int tm_year;														//月数，0~11
int tm_wday;														//自1900的年数
int tm_yday;														//自星期日的天数0~6
int tm_isdst;														//是否采用夏时制，采用为正数
};*/
//typedef long time_t;												//ctime中的时间值
using namespace std;
#define N 5
struct birthday														//定义出生日期结构 birthday
{
	int year;
	int month;
	int day;
};
struct
{
	long num;														//学号
	char name[20];													//姓名
	struct birthday bir;											//出生日期
	char nation[20];
	char sex[N];
}stu[N];
int cntage(struct birthday *pd1, struct tm*pd2)
{
	//根据日期计算年龄
	int dyear = (*pd2).tm_year + 1900 - (*pd1).year;
	int dmonth = (*pd2).tm_mon + 1 - (*pd1).month;
	int dday = (*pd2).tm_mday - (*pd1).day;
	if (dmonth <0 || dmonth == 0 && dday <0)
		dyear--;
	return dyear;
}
void main()
{
	int i;
	struct tm *ptm;													//定义一个日期时间结构的指针
	time_t timer;
	timer = time(0);												//调用系统函数time,返回值是当前系统时间
	ptm = localtime(&timer);											//将time_t 类型的时间转换成tm结构化时间
	for (i = 0; i<N; i++)												//输入n个学员信息
	{
		cout << "请输入第" << i + 1 << "学员的学号：" << endl;
		cin >> stu[i].num;
		cout << "请输入第" << i + 1 << "学员的姓名：" << endl;
		cin >> stu[i].name;
		cout << "请输入第" << i + 1 << "学员的出生日期(例如：1991 1 12）:" << endl;
		cin >> stu[i].bir.year >> stu[i].bir.month >> stu[i].bir.day;
		cout << "请输入第" << i + 1 << "学员的籍贯:" << endl;
		cin >> stu[i].nation;
		cout << "请输入第" << i + 1 << "学员的性别:" << endl;
		cin >> stu[i].sex;
	}
	cout << setw(10) << "学号" << setw(10) << "姓名" << setw(10) << "年龄" << setw(10) << "籍贯" << setw(10) << "性别" << endl;
	for (i = 0; i<N; i++)
	{
		cout << setw(10) << stu[i].num;
		cout << setw(10) << stu[i].name;
		cout << setw(10) << cntage(&stu[i].bir, ptm) << "岁" << endl;
		cout << setw(10) << stu[i].nation;
		cout << setw(10) << stu[i].sex;
	}
}
