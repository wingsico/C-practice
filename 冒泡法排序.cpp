#include<iostream>
using namespace std;
int main()
{
	int i, j, f[7], t;
	cout << "���6�����֣�" << endl;
	for (i = 1; i <= 6; i++)
		cin >> f[i];          //ѭ��6��������6������
	for (i = 1; i < 6; i++)   //ѭ����ÿһ�ε����ֵ������³�
		for (j = 1; j <= 6 - i; j++) //ÿѭ��һ��ȷ����ǰ���ֵ��ȷ�������ֵ���ٲ�����һ��ѭ��
			if (f[j] > f[j + 1])	   
			{
				t = f[j+1];
				f[j + 1] = f[j];    //�����Ƚϣ���������Ÿ���
				f[j] = t;
			}
	for (i = 1; i <= 6; i++)  //�������ź��������
		cout << f[i] << " ";
	return 0;
}