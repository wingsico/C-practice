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
	char data[20];//�Ͽ�ʱ����data 
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
		cout << "������ѧ��" << i << "��Ϣ" << endl;
		cout << "ѧ��:"; cin >> stu[i].num;
		cout << "name:"; cin >> stu[i].name;
		cout << "sex:"; cin >> stu[i].sex;
		cout << "age:"; cin >> stu[i].age;
		cout << "������ѡ����Ϣ" << endl;
		for (int j = 0; j<5; j++)
		{
			cout << "��������ѡ�γ�" << j << "��Ϣ" << endl;
			cout << "������ѡ����ʦ������"; cin >> stu[i].xuan[j].xuan_course_teacher;
			cout << "��������ѡ�γ����֣�"; cin >> stu[i].xuan[j].xuan_course_name;
		}
		cout << "������γ���Ϣ" << endl;
		for (int k = 0; k<5; k++)
		{
			cout << "������γ�" << k << "��Ϣ" << endl;
			cout << "��������ѧ�γ����֣�"; cin >> stu[i]._course[k].course_name;
			cout << "���������ڿγ���ʦ���֣�"; cin >> stu[i]._course[k].teacher_name;
			cout << "�������Ͽ�ʱ�䣺"; cin >> stu[i]._course[k].data;
		}
		cout << "������Ӣ��ɼ�"; cin >> stu[i].English_grade;
		cout << "��������ѧ�ɼ�"; cin >> stu[i].math_grade;
		cout << "������c++�ɼ�"; cin >> stu[i].c_grade;
	}
	system("cls");
	jiemian();
}
void search_stu()
{
	int i;
	char num[5];
	cout << "���������ѧ��" << endl;
	cin >> num;
	for (i = 0; i<10; i++)
	{
		if (strcmp(stu[i].num, num) == 0)
		{
			cout << "������" << stu[i].name << endl;
			cout << "�Ա�" << stu[i].sex << endl;
			cout << "���䣺" << stu[i].age << endl;
			cout << "���Ӣ��ɼ��ǣ�" << stu[i].English_grade;
			cout << "�����ѧ�ɼ��ǣ�" << stu[i].math_grade;
			cout << "���c++�ɼ��ǣ�" << stu[i].c_grade;
			cout << "ѡ����Ϣ" << endl;
			for (int j = 0; j<5; j++)
			{
				cout << "��ѡ�γ��ǣ�" << stu[i].xuan[j].xuan_course_name << endl;
				cout << "��ѡ�γ���ʦ�ǣ�" << stu[i].xuan[j].xuan_course_teacher << endl;
			}
			cout << "�γ���Ϣ" << endl;
			for (int k = 0; k<5; k++)
			{
				cout << "�γ�����:" << stu[i]._course[k].course_name << endl;
				cout << "�γ���ʦ:" << stu[i]._course[k].teacher_name << endl;
				cout << "�Ͽ�ʱ��:" << stu[i]._course[k].data << endl;
			}
			break;
		}
	}
	if (i == 10);
	cout << "���������Ϣ��������������" << endl;
	system("cls");
	jiemian();
}
void search_stu_course()//�γ���Ϣ 
{
	int i;
	char num[5];
	cout << "���������ѧ�ţ�" << endl;
	cin >> num;
	for (i = 0; i<10; i++)
	{
		if (strcmp(stu[i].num, num) == 0)
		{
			cout << "��Ŀγ���Ϣ" << endl;
			for (int k = 0; k<5; k++)
			{
				cout << "�γ�����" << stu[i]._course[k].course_name << endl;
				cout << "�γ���ʦ" << stu[i]._course[k].teacher_name << endl;
				cout << "�Ͽ�ʱ��" << stu[i]._course[k].data << endl;
			}
			break;
		}
	}
	if (i == 10);
	cout << "���������Ϣ��������������" << endl;
	system("cls");
	jiemian();
}
void search_stu_xuan()//ѡ����Ϣ 
{
	int i;
	char num[5];
	cout << "���������ѧ�ţ�" << endl;
	cin >> num;
	for (i = 0; i<10; i++)
	{
		if (strcmp(stu[i].num, num) == 0)
		{
			for (int j = 0; j<5; j++)
			{
				cout << "��ѡ�γ��ǣ�" << stu[i].xuan[j].xuan_course_name << endl;
				cout << "��ѡ�γ���ʦ�ǣ�" << stu[i].xuan[j].xuan_course_teacher << endl;
			}
			break;
		}
	}
	if (i == 10);
	cout << "���������Ϣ��������������" << endl;
	system("cls");
	jiemian();
}
void Input_tea()
{
	int i, j, k;
	cout << "������Ҫ��ӵĽ�ʦ��Ϣ��" << endl;
	for (i = 0; i < 3; i++)
	{
		cout << "�������ʦ�ţ�";
		cin >> tea[i].num;
		cout << "�������ʦ������";
		cin >> tea[i].name;
		cout << "������γ����ƣ�";
		cin >> tea[i].course_name;
		for (j = 0; j < 2; j++)
		{
			cout << "������γ�ʱ�䣺" << endl;
			cin >> tea[i].time_tea[j].day >> tea[i].time_tea[j].num_course;
		}
		cout << "������༶ѧ����Ϣ��" << endl;
		for (k = 0; k < 10; k++)
		{
			cout << "�����룺" << endl;
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
	cout << "������Ҫ���ҵĽ�ʦ�ţ�";
	cin >> num;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(tea[i].num, num) == 0)
		{
			cout << setw(7) << tea[i].num << setw(7) << tea[i].name << setw(7) << tea[i].course_name << endl;
			cout << "�ڿ�ʱ�䣺" << endl;
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
	cout << "������Ҫ���ҵĽ�ʦ�ţ�";
	cin >> num;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(tea[i].num, num) == 0)
		{
			cout << setw(7) << tea[i].num << setw(7) << tea[i].name << setw(7) << tea[i].course_name << endl;
			cout << "�༶ѧ����Ϣ" << endl;
			for (k = 0; k < 10; k++)
			{
				cout << setw(5) << tea[i].stu[k].num << setw(5) << tea[i].stu[k].name << setw(5) << tea[i].stu[k].sex <<
					setw(5) << tea[i].stu[k].age << endl;
				cout << "Ӣ��ɼ���" << tea[i].stu[k].English_grade << endl;
				cout << "��ѧ�ɼ���" << tea[i].stu[k].math_grade << endl;
				cout << "C++�ɼ���" << tea[i].stu[k].c_grade << endl;
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
	cout << "�����ļ�����";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "wb")) != 0)
	{
		cout << "�ļ���Ϊ�գ����ܱ��棡";
	}
	for (i = 0; i < 10; i++)
	{
		if (fread(&stu[i], sizeof(struct student), 1, fp) != 1)
			cout << "�ļ�����ʧ�ܣ�" << endl;
	}
	fclose(fp);
	cout << "�ļ��ѱ��棡" << endl;
	cout << "�����������..." << endl;
	system("cls");
	jiemian();
}
void save_tea()
{
	FILE *fp;
	int i = 0;
	char filename[50];
	errno_t err;
	cout << "�����ļ�����";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "wb")) == NULL)
	{
		cout << "�ļ���Ϊ�գ����ܱ��棡";
	}
	for (i = 0; i < 3; i++)
	{
		if (fread(&tea[i], sizeof(struct teacher), 1, fp) != 1)
			cout << "�ļ�����ʧ�ܣ�" << endl;
	}
	fclose(fp);
	cout << "�ļ��ѱ��棡" << endl;
	cout << "�����������..." << endl;
	system("cls");
	jiemian();
}
void open_stu()
{
	FILE *fp;
	int i = 0;
	char filename[50];
	errno_t err;
	cout << "�������ļ�����";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "rb")) == NULL)
	{
		cout << "�ļ��������ڣ�";
		exit(0);
	}
	while (fread(&stu[i], sizeof(struct student), 1, fp) != 0)
	{
		i++;
	}
	fclose(fp);
	cout << "��Ϣ�����룡" << endl;
	cout << "�����������..." << endl;
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
	cout << "�������ļ�����";
	cin >> filename;
	if ((err = fopen_s(&fp, "filename", "rb")) != 0)
	{
		cout << "�ļ��������ڣ�";
		exit(0);
	}
	while (fread(&tea[i], sizeof(struct teacher), 1, fp) != 0)
	{
		i++;
	}
	fclose(fp);
	cout << "��Ϣ�����룡" << endl;
	cout << "�����������..." << endl;
	getchar();
	getchar();
	system("cls");
	jiemian();
}
void quit()
{
	cout << "��������˳�..." << endl;
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
	default:cout << "��Ų�����!" << endl;
	}
}
void jiemian()
{
	cout << "********�������ϵͳ********" << endl;
	cout << "1.���ѧ����Ϣ**************" << endl;
	cout << "2.����ѧ��������Ϣ**********" << endl;
	cout << "3.��ѯѧ���γ���Ϣ**********" << endl;
	cout << "4.��ѯѧ��ѡ����Ϣ**********" << endl;
	cout << "5.��ӽ�ʦ��Ϣ**************" << endl;
	cout << "6.��ѯ��ʦ�ڿ���Ϣ**********" << endl;
	cout << "7.��ѯ��ʦ���ڰ༶ѧ����Ϣ**" << endl;
	cout << "8.����ѧ����Ϣ**************" << endl;
	cout << "9.�����ʦ��Ϣ**************" << endl;
	cout << "10.����ѧ����Ϣ*************" << endl;
	cout << "11�����ʦ��Ϣ**************" << endl;
	cout << "12.�˳�ϵͳ******************" << endl;
	cout << "****************************" << endl;
	cout << "���1-8��ѡ�����Ĳ�����" << endl;
	xuanze();
}
void main()
{
	jiemian();
	system("pause");
}
