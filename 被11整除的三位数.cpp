#include<iostream>
using namespace std;
void main()
{
	int m, n, i=0,b,s,g;
	for (m = 100; m < 1000; m++)
	{
		b = m / 100;
		s = m / 10 % 10;
		g = m % 10;
		if (m % 11 == 0 &&b != s && b != g && s != g)
		{
			cout << m << " ";
			i = i + 1;
			if (i % 10 == 0)
				cout << endl;
		}
	}
	cout <<endl<< "�ܱ�11�����Ҳ������ظ����ֵ�������λ���ĸ���Ϊ��" << i << endl;
}