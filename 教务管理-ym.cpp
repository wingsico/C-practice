#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip>
using namespace std;
void jiemian();
struct data
{
	char day[20];
	int num_course;
}time_tea[2];
struct xuan_course
{
	char xuan_course_teacher[20];
	char xuan_course_name[20];
}xuan[5];
struct course
{
	char teacher_name[20];
	char course_name[20];
	char data[20];//上课时间是data 
}_course[5];
struct student
{
	char name[20];
	char sex[20];
	int age;
	char num[20];
	struct course _course[5];
	struct xuan_course xuan[5];
	float English_grade;
	float math_grade;
	float c_grade;
}stu[10];
struct teacher
{
	struct data time_tea[2];
	struct student stu[10];
	char num[50];
	char name[20];
	char course_name[20];
}tea[3];
void Input_stu()
{
	int i = 0;
	cout << "please input the information of  all students" << endl;
	for (i = 0; i<10; i++)
	{
		cout << "请输入学生" << i << "信息" << endl;
		cout << "学号:"; cin >> stu[i].num;
		cout << "name:"; cin >> stu[i].name;
		cout << "sex:"; cin >> stu[i].sex;
		cout << "age:"; cin >> stu[i].age;
		cout << "请输入选课信息" << endl;
		for (int j = 0; j<5; j++)
		{
			cout << "请输入所选课程" << j << "信息" << endl;
			cout << "请输入选课老师姓名："; cin >> stu[i].xuan[j].xuan_course_teacher;
			cout << "请输入所选课程名字："; cin >> stu[i].xuan[j].xuan_course_name;
		}
		cout << "请输入课程信息" << endl;
		for (int k = 0; k<5; k++)
		{
			cout << "请输入课程" << k << "信息" << endl;
			cout << "请输入所学课程名字："; cin >> stu[i]._course[k].course_name;
			cout << "请输入所授课程老师名字："; cin >> stu[i]._course[k].teacher_name;
			cout << "请输入上课时间："; cin >> stu[i]._course[k].data;
		}
		cout << "请输入英语成绩"; cin >> stu[i].English_grade;
		cout << "请输入数学成绩"; cin >> stu[i].math_grade;
		cout << "请输入c++成绩"; cin >> stu[i].c_grade;
	}
	system("cls");
	jiemian();
}
void search_stu()
{
	int i;
	char num[5];
	cout << "请输入你的学号" << endl;
	cin >> num;
	for (i = 0; i<10; i++)
	{
		if (strcmp(stu[i].num, num) == 0)
		{
			cout << "姓名：" << stu[i].name << endl;
			cout << "性别：" << stu[i].sex << endl;
			cout << "年龄：" << stu[i].age << endl;
			cout << "你的英语成绩是：" << stu[i].English_grade;
			cout << "你的数学成绩是：" << stu[i].math_grade;
			cout << "你的c++成绩是：" << stu[i].c_grade;
			cout << "选课信息" << endl;
			for (int j = 0; j<5; j++)
			{
				cout << "所选课程是：" << stu[i].xuan[j].xuan_course_name << endl;
				cout << "所选课程老师是：" << stu[i].xuan[j].xuan_course_teacher << endl;
			}
			cout << "课程信息" << endl;
			for (int k = 0; k<5; k++)
			{
				cout << "课程名字:" << stu[i]._course[k].course_name << endl;
				cout << "课程老师:" << stu[i]._course[k].teacher_name << endl;
				cout << "上课时间:" << stu[i]._course[k].data << endl;
			}
			break;
		}
	}
	if (i == 10);
	cout << "您输入的信息有误，请重新输入" << endl;
	system("cls");
	jiemian();
}
void search_stu_course()//课程信息 
{
	int i;
	char num[5];
	cout << "请输入你的学号：" << endl;
	cin >> num;
	for (i = 0; i<10; i++)
	{
		if (strcmp(stu[i].num, num) == 0)
		{
			cout << "你的课程信息" << endl;
			for (int k = 0; k<5; k++)
			{
				cout << "课程名字" << stu[i]._course[k].course_name << endl;
				cout << "课程老师" << stu[i]._course[k].teacher_name << endl;
				cout << "上课时间" << stu[i]._course[k].data << endl;
			}
			break;
		}
	}
	if (i == 10);
	cout << "您输入的信息有误，请重新输入" << endl;
	system("cls");
	jiemian();
}
void search_stu_xuan()//选课信息 
{
	int i;
	char num[5];
	cout << "请输入你的学号：" << endl;
	cin >> num;
	for (i = 0; i<10; i++)
	{
		if (strcmp(stu[i].num, num) == 0)
		{
			for (int j = 0; j<5; j++)
			{
				cout << "所选课程是：" << stu[i].xuan[j].xuan_course_name << endl;
				cout << "所选课程老师是：" << stu[i].xuan[j].xuan_course_teacher << endl;
			}
			break;
		}
	}
	if (i == 10);
	cout << "您输入的信息有误，请重新输入" << endl;
	system("cls");
	jiemian();
}
void Input_tea()
{
	int i, j, k;
	cout << "请输入要添加的教师信息：" << endl;
	for (i = 0; i < 3; i++)
	{
		cout << "请输入教师号：";
		cin >> tea[i].num;
		cout << "请输入教师姓名：";
		cin >> tea[i].name;
		cout << "请输入课程名称：";
		cin >> tea[i].course_name;
		for (j = 0; j < 2; j++)
		{
			cout << "请输入课程时间：" << endl;
			cin >> tea[i].time_tea[j].day >> tea[i].time_tea[j].num_course;
		}
		cout << "请输入班级学生信息：" << endl;
		for (k = 0; k < 10; k++)
		{
			cout << "请输入：" << endl;
			cin >> tea[i].stu[j].num >> tea[i].stu[j].name >> tea[i].stu[j].sex >> tea[i].stu[j].age >> tea[i].stu[j].English_grade >>
				tea[i].stu[j].math_grade >> tea[i].stu[j].c_grade;
		}
		system("cls");
		jiemian();
	}
}
void search_tea_course()
{
	int i, j, k;
	char num[50];
	cout << "请输入要查找的教师号：";
	cin >> num;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(tea[i].num, num) == 0)
		{
			cout << setw(7) << tea[i].num << setw(7) << tea[i].name << setw(7) << tea[i].course_name << endl;
			cout << "授课时间：" << endl;
			for (j = 0; j < 2; j++)
				cout << setw(5) << tea[i].time_tea[j].day << tea[i].time_tea[j].num_course << endl;
		}
	}
	system("cls");
	jiemian();
}
void search_tea_stu()
{
	int i, k;
	char num[50];
	cout << "请输入要查找的教师号：";
	cin >> num;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(tea[i].num, num) == 0)
		{
			cout << setw(7) << tea[i].num << setw(7) << tea[i].name << setw(7) << tea[i].course_name << endl;
			cout << "班级学生信息" << endl;
			for (k = 0; k < 10; k++)
			{
				cout << setw(5) << tea[i].stu[k].num << setw(5) << tea[i].stu[k].name << setw(5) << tea[i].stu[k].sex <<
					setw(5) << tea[i].stu[k].age << endl;
				cout << "英语成绩：" << tea[i].stu[k].English_grade << endl;
				cout << "数学成绩：" << tea[i].stu[k].math_grade << endl;
				cout << "C++成绩：" << tea[i].stu[k].c_grade << endl;
			}
		}
	}
	system("cls");
	jiemian();
}
void save_stu()
{
	FILE *fp;
	int i = 0;
	char filename[50];
	errno_t err;
	cout << "输入文件名：";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "wb")) != 0)
	{
		cout << "文件名为空，不能保存！";
	}
	for (i = 0; i < 10; i++)
	{
		if (fread(&stu[i], sizeof(struct student), 1, fp) != 1)
			cout << "文件保存失败！" << endl;
	}
	fclose(fp);
	cout << "文件已保存！" << endl;
	cout << "按任意键返回..." << endl;
	system("cls");
	jiemian();
}
void save_tea()
{
	FILE *fp;
	int i = 0;
	char filename[50];
	errno_t err;
	cout << "输入文件名：";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "wb")) == NULL)
	{
		cout << "文件名为空，不能保存！";
	}
	for (i = 0; i < 3; i++)
	{
		if (fread(&tea[i], sizeof(struct teacher), 1, fp) != 1)
			cout << "文件保存失败！" << endl;
	}
	fclose(fp);
	cout << "文件已保存！" << endl;
	cout << "按任意键返回..." << endl;
	system("cls");
	jiemian();
}
void open_stu()
{
	FILE *fp;
	int i = 0;
	char filename[50];
	errno_t err;
	cout << "请输入文件名：";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "rb")) == NULL)
	{
		cout << "文件名不存在！";
		exit(0);
	}
	while (fread(&stu[i], sizeof(struct student), 1, fp) != 0)
	{
		i++;
	}
	fclose(fp);
	cout << "信息已载入！" << endl;
	cout << "按任意键返回..." << endl;
	getchar();
	getchar();
	system("cls");
	jiemian();
}
void open_tea()
{
	FILE *fp;
	int i = 0;
	char filename[50];
	errno_t err;
	cout << "请输入文件名：";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "rb")) != 0)
	{
		cout << "文件名不存在！";
		exit(0);
	}
	while (fread(&tea[i], sizeof(struct teacher), 1, fp) != 0)
	{
		i++;
	}
	fclose(fp);
	cout << "信息已载入！" << endl;
	cout << "按任意键返回..." << endl;
	getchar();
	getchar();
	system("cls");
	jiemian();
}
void quit()
{
	cout << "按任意键退出..." << endl;
	exit(0);
}
void xuanze()
{
	int num;
	cin >> num;
	switch (num)
	{
	case 1:Input_stu(); break;
	case 2:search_stu(); break;
	case 3:search_stu_course(); break;
	case 4:search_stu_xuan(); break;
	case 5:Input_tea(); break;
	case 6:search_tea_course(); break;
	case 7:search_tea_stu(); break;
	case 8:save_stu(); break;
	case 9:save_tea(); break;
	case 10:open_stu(); break;
	case 11:open_tea(); break;
	case 12:quit(); break;
	default:cout << "序号不存在!" << endl;
	}
}
void jiemian()
{
	cout << "********教务管理系统********" << endl;
	cout << "1.添加学生信息**************" << endl;
	cout << "2.查找学生基本信息**********" << endl;
	cout << "3.查询学生课程信息**********" << endl;
	cout << "4.查询学生选课信息**********" << endl;
	cout << "5.添加教师信息**************" << endl;
	cout << "6.查询教师授课信息**********" << endl;
	cout << "7.查询教师所在班级学生信息**" << endl;
	cout << "8.保存学生信息**************" << endl;
	cout << "9.保存教师信息**************" << endl;
	cout << "10.载入学生信息*************" << endl;
	cout << "11载入教师信息**************" << endl;
	cout << "12.退出系统******************" << endl;
	cout << "****************************" << endl;
	cout << "请从1-8中选择您的操作：" << endl;
	xuanze();
}
void main()
{
	jiemian();
	system("pause");
}
