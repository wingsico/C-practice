#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int person[5][5], i, j, max, sum, p=0;
	cout << "����5λְ����ְ���š��������ʡ��������ʺͽ���" << endl;
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= 3; j++)
			cin >> person[i][j];
	for (i = 0; i <= 4; i++)
	{
		sum = 0;
		for (j = 1; j <= 3; j++)
		{
			sum = sum + person[i][j];
		}
		person[i][4] = sum;
	}
	cout << setw(10) << "ְ����" << setw(12) << "��������" << setw(10) << "��������" << setw(8) << "����" <<setw(10)<<"�ܹ���"<<endl;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
			cout << setw(10) << person[i][j];
		cout << endl;
	}
	max = person[0][4];
	for(i = 1; i <= 4;i++ )
		if (person[i][4] > max)
		{
			max = person[i][4];
			p = i;
		}
	cout << "������ߵ�ְ����ְ����Ϊ " << person[p][0] << ",�ܹ���Ϊ " << max << endl;
	return 0;
}