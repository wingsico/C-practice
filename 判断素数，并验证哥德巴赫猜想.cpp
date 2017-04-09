#include<iostream>
#include<cmath>
using namespace std;
int is_prime(int n);
int main()
{
	int even, i,num = 0;
	cout << "输入一个大于2的偶数：" << endl;
	cin >> even;
	for (i = 2; i <= even; i++)
		if (is_prime(i) && is_prime(even - i))
		{
			cout << even << "=" << i << "+" << even - i << endl;
			num++;
		}
		else
			cout << "哥德巴赫猜想验证失败！" << endl;
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
