#include<iostream>
#include<cmath>
using namespace std;
int is_prime(int n);
int main()
{
	int even, i,num = 0;
	cout << "����һ������2��ż����" << endl;
	cin >> even;
	for (i = 2; i <= even; i++)
		if (is_prime(i) && is_prime(even - i))
		{
			cout << even << "=" << i << "+" << even - i << endl;
			num++;
		}
		else
			cout << "��°ͺղ�����֤ʧ�ܣ�" << endl;
	cout << num << endl;
	return 0;
}
int is_prime(int n)
{
	int i, k = sqrt(n);
	for (i = 2; i <= k; i++)
		if (n%i == 0)
			return 0;
	return 1;
}
