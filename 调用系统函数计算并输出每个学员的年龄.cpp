#include<iostream>
#include<iomanip>
#include<ctime>														//����ϵͳʱ�亯��
/* struct tm{														//ctime �ж��������ʱ��ṹ
int tm_sec;															//�룬0~59
int tm_min;															//�֣�0~59
int tm_hour;														//ʱ��0~23
int tm_mday;														//����,1~31
int tm_year;														//������0~11
int tm_wday;														//��1900������
int tm_yday;														//�������յ�����0~6
int tm_isdst;														//�Ƿ������ʱ�ƣ�����Ϊ����
};*/
//typedef long time_t;												//ctime�е�ʱ��ֵ
using namespace std;
#define N 5
struct birthday														//����������ڽṹ birthday
{
	int year;
	int month;
	int day;
};
struct
{
	long num;														//ѧ��
	char name[20];													//����
	struct birthday bir;											//��������
	char nation[20];
	char sex[N];
}stu[N];
int cntage(struct birthday *pd1, struct tm*pd2)
{
	//�������ڼ�������
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
	struct tm *ptm;													//����һ������ʱ��ṹ��ָ��
	time_t timer;
	timer = time(0);												//����ϵͳ����time,����ֵ�ǵ�ǰϵͳʱ��
	ptm = localtime(&timer);											//��time_t ���͵�ʱ��ת����tm�ṹ��ʱ��
	for (i = 0; i<N; i++)												//����n��ѧԱ��Ϣ
	{
		cout << "�������" << i + 1 << "ѧԱ��ѧ�ţ�" << endl;
		cin >> stu[i].num;
		cout << "�������" << i + 1 << "ѧԱ��������" << endl;
		cin >> stu[i].name;
		cout << "�������" << i + 1 << "ѧԱ�ĳ�������(���磺1991 1 12��:" << endl;
		cin >> stu[i].bir.year >> stu[i].bir.month >> stu[i].bir.day;
		cout << "�������" << i + 1 << "ѧԱ�ļ���:" << endl;
		cin >> stu[i].nation;
		cout << "�������" << i + 1 << "ѧԱ���Ա�:" << endl;
		cin >> stu[i].sex;
	}
	cout << setw(10) << "ѧ��" << setw(10) << "����" << setw(10) << "����" << setw(10) << "����" << setw(10) << "�Ա�" << endl;
	for (i = 0; i<N; i++)
	{
		cout << setw(10) << stu[i].num;
		cout << setw(10) << stu[i].name;
		cout << setw(10) << cntage(&stu[i].bir, ptm) << "��" << endl;
		cout << setw(10) << stu[i].nation;
		cout << setw(10) << stu[i].sex;
	}
}
