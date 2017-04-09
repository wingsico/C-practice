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
	{"�����","��",19,"6130116168","�����",165,"ɽ���ൺ","360702199701010038",165,{1997,1,1},{ 80,90,88,90 } },
	{"����","��",18,"6130116164","�����",164,"�����Ž�","360702199810010253",164,{ 1998,10,1 },{ 70,80,77,60 } },
	{ "��ΰ��","��",18,"6130116165","�����",165,"��������","360702199808310057",165,{ 1998,8,31 },{ 89,99,98,100 } },
	{ "�ܳ�","��",18,"6130116161","�����",164,"�����ϲ�","360702199802310136",164,{ 1998,8,31 },{ 82,69,88,70 } }
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
		cout << "\t*     ѧ����Ϣ����ϵͳ     *\n";
		cout << "\t*==========================*\n";
		cout << "\t*    1����ʾ�༶��Ϣ       *\n";
		cout << "\t*    2����ѯѧ����Ϣ       *\n";
		cout << "\t*    3�����ѧ����Ϣ       *\n";
		cout << "\t*    4��ɾ��ѧ����Ϣ       *\n";
		cout << "\t*    5���޸�ѧ����Ϣ       *\n";
		cout << "\t*    6����ʾ�༶�ɼ�       *\n";		  
		cout << "\t*    7���޸�ѧ���ɼ�       *\n";
		cout << "\t*    0���˳�����ϵͳ       *\n";
		cout << "\t****************************\n";
		cout << "\n\t��ѡ��:";
		cin >> choice;
	} while (choice < 0 || choice > 7);
	return choice;
}
int stu_menu()
{
	int choice;
	do {
		cout << "\t****************************\n";
		cout << "\t*     ѧ����Ϣ����ϵͳ     *\n";
		cout << "\t*==========================*\n";
		cout << "\t*    1����ʾ�༶��Ϣ       *\n";
		cout << "\t*    2����ѯѧ����Ϣ       *\n";
		cout << "\t*    3����ʾ�༶�ɼ�       *\n";
		cout << "\t*    0���˳�����ϵͳ       *\n";
		cout << "\t****************************\n";
		cout << "\n\t��ѡ��:";
		cin >> choice;
	} while (choice < 0 || choice > 4);
	return choice;
}
void showMessage()
{
	int i, num, n = 0;
	cout << "\t������Ҫ��ʾ�İ༶��(��165):";
	cin >> num;
	cout.setf(ios::left);
	cout << "\t" << setw(9) << "����" << setw(6) << "����" << setw(9)
		<< "�Ա�" << setw(14) << "����" << setw(19)
		<< "���֤����" << setw(12) << "��������" << setw(15)
		<< "רҵ�༶" << setw(10) << "ѧ��" << endl;
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
						<< personal[i].num <<setw(5)<<"��"<< setw(10) << personal[i].number << endl;

				}
			cout << "\t---------------------------------------------------------------------------------------------" << endl;
		}
	}
	if (n == 0)
		cout << "\t�ܱ�Ǹ�����޴˰༶��Ϣ��" << endl << endl;
}
void addMessage(int index)
{
	int i;
	for (i = index; i < N; i++)
	{
		cout << "\t��������ӵ�ѧ��������";
		cin >> personal[i].name;
		cout << "\t��������ӵ�ѧ�����䣺";
		cin >> personal[i].age;
		cout << "\t��������ӵ�ѧ���Ա�";
		cin >> personal[i].sex;
		cout << "\t��������ӵ�ѧ�����᣺";
		cin >> personal[i].nation;
		cout << "\t��������ӵ�ѧ�����֤�ţ�";
		cin >> personal[i].identity;
		cout << "\t��������ӵ�ѧ������������(�ÿո����)��";
		cin >> personal[i].date.year >> personal[i].date.month >> personal[i].date.day;
		cout << "\t��������ӵ�ѧ��רҵ��";
		cin >> personal[i].zhuanye;
		cout << "\t��������ӵ�ѧ�����(��165)��";
		cin >> personal[i]._class;
		cout << "\t��������ӵ�ѧ��ѧ�ţ�";
		cin >> personal[i].number;
		break;
	}
}
void deleteMessage()
{
	int i;
	char number[20];
	cout << "\t������Ҫɾ����ѧ����ѧ�ţ�";
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
		cout << "\t��ѧ�Ų�����!" << endl;
}
void inquireMessage()
{
	int i, n=0;
	char number[20];
	cout << "\t������Ҫ��ѯ��ѧ����ѧ�ţ�";
	cin >> number;
	for (i = 0; i < N; i++)
	{
		if (strcmp(number, personal[i].number) == 0)
		{
			n++;
			cout.setf(ios::left);
			cout << "\t" << setw(9) << "����" << setw(6) << "����" << setw(9)
				<< "�Ա�" << setw(14) << "����" << setw(19)
				<< "���֤����" << setw(12) << "��������" << setw(15)
				<< "רҵ�༶" << setw(10) << "ѧ��" << endl;
			cout << "\t---------------------------------------------------------------------------------------------" << endl;
			cout << "\t" << setw(10) << personal[i].name << setw(6) << personal[i].age << setw(6)
				<< personal[i].sex << setw(14) << personal[i].nation << setw(20)
				<< personal[i].identity << setw(6) << personal[i].date.year << setw(3)
				<< personal[i].date.month << setw(3) << personal[i].date.day << setw(6)<<personal[i].zhuanye
				<< personal[i]._class<<setw(5)<<"��" << setw(10) << personal[i].number << endl;
			cout << "\t---------------------------------------------------------------------------------------------" << endl;
		}
	}
	if (n==0)
		cout << "\t��ѧ�Ų�����!" << endl;
}
void alterMessage()
{
	int i;
	char number[20];
	cout << "\t������Ҫ�޸ĵ�ѧ����ѧ�ţ�";
	cin >> number;
	for (i = 0; i < N; i++)
	{
		if (strcmp(number, personal[i].number) == 0)
		{
			int order;
			cout << "\t*****************\n";
			cout << "\t*    �޸���Ϣ   *\n";
			cout << "\t*===============*\n";
			cout << "\t* 1������       *\n";
			cout << "\t* 2������       *\n";
			cout << "\t* 3���Ա�       *\n";
			cout << "\t* 4������       *\n";
			cout << "\t* 5�����֤���� *\n";
			cout << "\t* 6����������   *\n";
			cout << "\t* 7��רҵ       *\n";
			cout << "\t* 8��ѧ��       *\n";
			cout << "\t* 9�����       *\n";
			cout << "\t* 0���˳��޸�   *\n";
			cout << "\t*****************\n";
			cout << "\t������Ҫ�޸ĵ���Ϣ��Ӧ�����֣�";
			cin >> order;
			switch (order)
			{
			case 1:
				char name[20];
				int j;
				cout << "\t������Ҫ�޸ĵ�������";
				cin >> name;
				for (j = 0; j < N; j++)
				{
					if (strcmp(name, personal[j].name) != 0)
					{
						strcpy(personal[i].name, name);
						cout << "\t�޸ĳɹ���" << endl;
						break;
					}	
					else
					{
						cout << "\t�������Ѿ�����!" << endl;
						break;
					}	
				}
				break;
			case 2:
				int age;
				cout << "\t������Ҫ�޸ĵ����䣺";
				cin >> age;
				personal[i].age = age;
				cout << "\t�޸ĳɹ���" << endl;
				break;
			case 3:
				char sex[5];
				cout << "\t������Ҫ�޸ĵ��Ա�";
				cin >> sex;
				strcpy(personal[i].sex, sex);
				cout << "\t�޸ĳɹ���" << endl;
				break;
			case 4:
				char nation[20];
				cout << "\t������Ҫ�޸ĵļ��᣺";
				cin >> nation;
				strcpy(personal[i].nation, nation);
				cout << "\t�޸ĳɹ���" << endl;
				break;
			case 5:
				char identity[20];
				cout << "\t������Ҫ�޸ĵ����֤���룺";
				cin >> identity;
				for (j = 0; j < N; j++)
				{
					if (strcmp(identity, personal[j].identity) != 0)
					{
						strcpy(personal[i].identity,identity);
						cout << "\t�޸ĳɹ���" << endl;
						break;
					}
					else
					{
						cout << "\t�����֤�����Ѿ�����!" << endl;
						break;
					}
				}
				break;
			case 6:
				int year,month,day;
				cout << "\t������Ҫ�޸ĵĳ�������(�������ÿո����)��";
				cin >> year >> month >> day;
				personal[i].date.year = year;
				personal[i].date.month = month;
				personal[i].date.day = day;
				cout << "\t�޸ĳɹ���" << endl;
				break;
			case 7:
				char zhuanye[20];
				cout << "\t������Ҫ�޸ĵ�רҵ�༶��";
				cin >> zhuanye;
				strcpy(personal[i].zhuanye, zhuanye);
				cout << "\t�޸ĳɹ���" << endl;
				break;
			case 8:
				char number[20];
				cout << "\t������Ҫ�޸ĵ�ѧ�ţ�";
				cin >> number;
				for (j = 0; j < N; j++)
				{
					if (strcmp(number, personal[j].number) != 0)
					{
						strcpy(personal[i].number, number);
						cout << "\t�޸ĳɹ���" << endl;
						break;
					}
					else
					{
						cout << "\t��ѧ���Ѿ�����!" << endl;
						break;
					}
				}
				break;
			case 9:
				int _class;
				cout << "\t������Ҫ�޸ĵİ�ţ�";
				cin >> _class;
				personal[i].num = _class;
				cout << "\t�޸ĳɹ���" << endl;
				break;
			case 0:
				break;
			}
		}
	}
	if (i > N)
		cout << "\t��ѧ�Ų�����!" << endl;
}
void showScore()
{
	int i, j, num, n = 0;
	student temp;
	student *p = personal;
	for (i = 0; i < N; i++)
		personal[i]._score.sum = personal[i]._score.math + personal[i]._score.English + personal[i]._score.C_language + personal[i]._score.PE;
	cout << "\t������Ҫ��ѯ�İ༶(��165):";
	cin >> num;
	cout.setf(ios::left);
	cout << "\t ����    ����    Ӣ��    C����   ����    �ܷ�" << endl;
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
		cout << "\t�ܱ�Ǹ�����޸ð�ɼ�!" << endl << endl;
		
}
void main()
{
	int choice, t, access;
	t = 1;
	int index;
	index = 3;
	cout << "\t-------------------------------" << endl;
	cout << "\t           �������ϵͳ        " << endl;
	cout << "\t-------------------------------" << endl;
	cout << "\t           1����ʦ���         " << endl;
	cout << "\t           2��ѧ�����         " << endl;
	cout << "\t-------------------------------" << endl;
	cout << "\t��ѡ��";
	cin >> access;
	switch (access)
	{
	case 1:
		int code;
		code:cout << "\t �����ʦ����(6λ):";
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
			cout << "\t�������!����������" << endl;
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

	