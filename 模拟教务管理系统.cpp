#include<iostream>
#include<cstring>
#include<iomanip>
#define N 30
struct birthday
{
	int year;
	int month;
	int day;
};
struct score
{
	float math;
	float English;
	float C_language;
	float PE;
	float sum;
};
struct student
{
	char name[20];
	char sex[5];
	int age;
	char number[20];
	char zhuanye[20];
	int _class;
	char nation[20];
	char identity[20];
	int num;
	struct birthday date;
	struct score _score;
}personal[N] = { 
	{"隋旭辉","男",19,"6130116168","计算机",165,"山东青岛","360702199701010038",165,{1997,1,1},{ 80,90,88,90 } },
	{"刘臻","男",18,"6130116164","计算机",164,"江西九江","360702199810010253",164,{ 1998,10,1 },{ 70,80,77,60 } },
	{ "钟伟杰","男",18,"6130116165","计算机",165,"江西赣州","360702199808310057",165,{ 1998,8,31 },{ 89,99,98,100 } },
	{ "熊超","男",18,"6130116161","计算机",164,"江西南昌","360702199802310136",164,{ 1998,8,31 },{ 82,69,88,70 } }
};
struct student_pro
{
	char pro_name[30]; 
	char pro_academy_name[50];
	char teacher_name[20];
}pro[N];
struct course
{
	char fixed_course[100];
	char choose_course[100];
}course[N];

using namespace std;
int tea_menu() 
{
	int choice;
	do {
		cout << "\t****************************\n";
		cout << "\t*     学生信息管理系统     *\n";
		cout << "\t*==========================*\n";
		cout << "\t*    1、显示班级信息       *\n";
		cout << "\t*    2、查询学生信息       *\n";
		cout << "\t*    3、添加学生信息       *\n";
		cout << "\t*    4、删除学生信息       *\n";
		cout << "\t*    5、修改学生信息       *\n";
		cout << "\t*    6、显示班级成绩       *\n";		  
		cout << "\t*    7、修改学生成绩       *\n";
		cout << "\t*    0、退出管理系统       *\n";
		cout << "\t****************************\n";
		cout << "\n\t请选择:";
		cin >> choice;
	} while (choice < 0 || choice > 7);
	return choice;
}
int stu_menu()
{
	int choice;
	do {
		cout << "\t****************************\n";
		cout << "\t*     学生信息管理系统     *\n";
		cout << "\t*==========================*\n";
		cout << "\t*    1、显示班级信息       *\n";
		cout << "\t*    2、查询学生信息       *\n";
		cout << "\t*    3、显示班级成绩       *\n";
		cout << "\t*    0、退出管理系统       *\n";
		cout << "\t****************************\n";
		cout << "\n\t请选择:";
		cin >> choice;
	} while (choice < 0 || choice > 4);
	return choice;
}
void showMessage()
{
	int i, num, n = 0;
	cout << "\t输入你要显示的班级号(如165):";
	cin >> num;
	cout.setf(ios::left);
	cout << "\t" << setw(9) << "姓名" << setw(6) << "年龄" << setw(9)
		<< "性别" << setw(14) << "籍贯" << setw(19)
		<< "身份证号码" << setw(12) << "出生日期" << setw(15)
		<< "专业班级" << setw(10) << "学号" << endl;
	cout << "\t---------------------------------------------------------------------------------------------" << endl;
	for (i = 0; i < N; i++)
	{
		if (num == personal[i].num)
		{
			if (personal[i].age != 0)
				{
					n++;
					cout << "\t" << setw(10) << personal[i].name << setw(6) << personal[i].age << setw(6)
						<< personal[i].sex << setw(14) << personal[i].nation << setw(20)
						<< personal[i].identity << setw(6) << personal[i].date.year << setw(3)
						<< personal[i].date.month << setw(3) << personal[i].date.day << setw(6)<<personal[i].zhuanye
						<< personal[i].num <<setw(5)<<"班"<< setw(10) << personal[i].number << endl;

				}
			cout << "\t---------------------------------------------------------------------------------------------" << endl;
		}
	}
	if (n == 0)
		cout << "\t很抱歉，暂无此班级信息！" << endl << endl;
}
void addMessage(int index)
{
	int i;
	for (i = index; i < N; i++)
	{
		cout << "\t输入所添加的学生姓名：";
		cin >> personal[i].name;
		cout << "\t输入所添加的学生年龄：";
		cin >> personal[i].age;
		cout << "\t输入所添加的学生性别：";
		cin >> personal[i].sex;
		cout << "\t输入所添加的学生籍贯：";
		cin >> personal[i].nation;
		cout << "\t输入所添加的学生身份证号：";
		cin >> personal[i].identity;
		cout << "\t输入所添加的学生出生年月日(用空格隔开)：";
		cin >> personal[i].date.year >> personal[i].date.month >> personal[i].date.day;
		cout << "\t输入所添加的学生专业：";
		cin >> personal[i].zhuanye;
		cout << "\t输入所添加的学生班号(如165)：";
		cin >> personal[i]._class;
		cout << "\t输入所添加的学生学号：";
		cin >> personal[i].number;
		break;
	}
}
void deleteMessage()
{
	int i;
	char number[20];
	cout << "\t输入你要删除的学生的学号：";
	cin >> number;
	for (i = 0; i < N; i++)
	{
		if (strcmp(number, personal[i].number) == 0)
		{
			int j = N;
			j--;
			int n = i;
			for (; n < j; n++)
				personal[n] = personal[n + 1];
			break;
		}
	}
	if (i > N)
		cout << "\t该学号不存在!" << endl;
}
void inquireMessage()
{
	int i, n=0;
	char number[20];
	cout << "\t输入你要查询的学生的学号：";
	cin >> number;
	for (i = 0; i < N; i++)
	{
		if (strcmp(number, personal[i].number) == 0)
		{
			n++;
			cout.setf(ios::left);
			cout << "\t" << setw(9) << "姓名" << setw(6) << "年龄" << setw(9)
				<< "性别" << setw(14) << "籍贯" << setw(19)
				<< "身份证号码" << setw(12) << "出生日期" << setw(15)
				<< "专业班级" << setw(10) << "学号" << endl;
			cout << "\t---------------------------------------------------------------------------------------------" << endl;
			cout << "\t" << setw(10) << personal[i].name << setw(6) << personal[i].age << setw(6)
				<< personal[i].sex << setw(14) << personal[i].nation << setw(20)
				<< personal[i].identity << setw(6) << personal[i].date.year << setw(3)
				<< personal[i].date.month << setw(3) << personal[i].date.day << setw(6)<<personal[i].zhuanye
				<< personal[i]._class<<setw(5)<<"班" << setw(10) << personal[i].number << endl;
			cout << "\t---------------------------------------------------------------------------------------------" << endl;
		}
	}
	if (n==0)
		cout << "\t该学号不存在!" << endl;
}
void alterMessage()
{
	int i;
	char number[20];
	cout << "\t输入你要修改的学生的学号：";
	cin >> number;
	for (i = 0; i < N; i++)
	{
		if (strcmp(number, personal[i].number) == 0)
		{
			int order;
			cout << "\t*****************\n";
			cout << "\t*    修改信息   *\n";
			cout << "\t*===============*\n";
			cout << "\t* 1、姓名       *\n";
			cout << "\t* 2、年龄       *\n";
			cout << "\t* 3、性别       *\n";
			cout << "\t* 4、籍贯       *\n";
			cout << "\t* 5、身份证号码 *\n";
			cout << "\t* 6、出生日期   *\n";
			cout << "\t* 7、专业       *\n";
			cout << "\t* 8、学号       *\n";
			cout << "\t* 9、班号       *\n";
			cout << "\t* 0、退出修改   *\n";
			cout << "\t*****************\n";
			cout << "\t输入您要修改的信息对应的数字：";
			cin >> order;
			switch (order)
			{
			case 1:
				char name[20];
				int j;
				cout << "\t输入你要修改的姓名：";
				cin >> name;
				for (j = 0; j < N; j++)
				{
					if (strcmp(name, personal[j].name) != 0)
					{
						strcpy(personal[i].name, name);
						cout << "\t修改成功！" << endl;
						break;
					}	
					else
					{
						cout << "\t该姓名已经存在!" << endl;
						break;
					}	
				}
				break;
			case 2:
				int age;
				cout << "\t输入你要修改的年龄：";
				cin >> age;
				personal[i].age = age;
				cout << "\t修改成功！" << endl;
				break;
			case 3:
				char sex[5];
				cout << "\t输入你要修改的性别：";
				cin >> sex;
				strcpy(personal[i].sex, sex);
				cout << "\t修改成功！" << endl;
				break;
			case 4:
				char nation[20];
				cout << "\t输入你要修改的籍贯：";
				cin >> nation;
				strcpy(personal[i].nation, nation);
				cout << "\t修改成功！" << endl;
				break;
			case 5:
				char identity[20];
				cout << "\t输入你要修改的身份证号码：";
				cin >> identity;
				for (j = 0; j < N; j++)
				{
					if (strcmp(identity, personal[j].identity) != 0)
					{
						strcpy(personal[i].identity,identity);
						cout << "\t修改成功！" << endl;
						break;
					}
					else
					{
						cout << "\t该身份证号码已经存在!" << endl;
						break;
					}
				}
				break;
			case 6:
				int year,month,day;
				cout << "\t输入你要修改的出生日期(年月日用空格隔开)：";
				cin >> year >> month >> day;
				personal[i].date.year = year;
				personal[i].date.month = month;
				personal[i].date.day = day;
				cout << "\t修改成功！" << endl;
				break;
			case 7:
				char zhuanye[20];
				cout << "\t输入你要修改的专业班级：";
				cin >> zhuanye;
				strcpy(personal[i].zhuanye, zhuanye);
				cout << "\t修改成功！" << endl;
				break;
			case 8:
				char number[20];
				cout << "\t输入你要修改的学号：";
				cin >> number;
				for (j = 0; j < N; j++)
				{
					if (strcmp(number, personal[j].number) != 0)
					{
						strcpy(personal[i].number, number);
						cout << "\t修改成功！" << endl;
						break;
					}
					else
					{
						cout << "\t该学号已经存在!" << endl;
						break;
					}
				}
				break;
			case 9:
				int _class;
				cout << "\t输入你要修改的班号：";
				cin >> _class;
				personal[i].num = _class;
				cout << "\t修改成功！" << endl;
				break;
			case 0:
				break;
			}
		}
	}
	if (i > N)
		cout << "\t该学号不存在!" << endl;
}
void showScore()
{
	int i, j, num, n = 0;
	student temp;
	student *p = personal;
	for (i = 0; i < N; i++)
		personal[i]._score.sum = personal[i]._score.math + personal[i]._score.English + personal[i]._score.C_language + personal[i]._score.PE;
	cout << "\t输入你要查询的班级(如165):";
	cin >> num;
	cout.setf(ios::left);
	cout << "\t 姓名    高数    英语    C语言   体育    总分" << endl;
	cout << "\t---------------------------------------------------------------------------------------------" << endl;
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (personal[j]._score.sum < personal[j + 1]._score.sum)
			{
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		if (num == personal[i].num)
		{
			if (personal[i]._score.math != 0)
			{
				n++;
				cout << "\t" << setw(10) << personal[i].name << setw(8) << personal[i]._score.math << setw(8) << personal[i]._score.English << setw(8)
					<< personal[i]._score.C_language << setw(8) << personal[i]._score.PE << setw(8) << personal[i]._score.sum << endl;
				cout << "\t---------------------------------------------------------------------------------------------" << endl;
			}
		}
	}
	if (n == 0)
		cout << "\t很抱歉，暂无该班成绩!" << endl << endl;
		
}
void main()
{
	int choice, t, access;
	t = 1;
	int index;
	index = 3;
	cout << "\t-------------------------------" << endl;
	cout << "\t           教务管理系统        " << endl;
	cout << "\t-------------------------------" << endl;
	cout << "\t           1、教师入口         " << endl;
	cout << "\t           2、学生入口         " << endl;
	cout << "\t-------------------------------" << endl;
	cout << "\t请选择：";
	cin >> access;
	switch (access)
	{
	case 1:
		int code;
		code:cout << "\t 输入教师密码(6位):";
		cin >> code;
		if (code == 123456)
		{
			while (t)
			{
				choice = tea_menu();
				switch (choice)
				{
				case 1:
					showMessage();
					break;
				case 2:
					inquireMessage();
					break;
				case 3:
					addMessage(index);
					index++;
					break;
				case 4:
					deleteMessage();
					index--;
					break;
				case 5:
					alterMessage();
					break;
				case 6:
					showScore();
					break;
				case 0:
					t = 0;
					break;
				}
			}
		}
		else
		{
			cout << "\t密码错误!请重新输入" << endl;
			goto code;
		}
		break;
	case 2:
		while (t)
		{
			choice =stu_menu();
			switch (choice)
			{
			case 1:
				showMessage();
				break;
			case 2:
				inquireMessage();
				break;
			case 3:
				showScore();
				break;
			case 0:
				t = 0;
				break;
			}
		}
		break;
	}
}

	