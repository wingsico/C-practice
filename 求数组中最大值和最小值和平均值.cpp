#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int arr[10], i, max, min,n;
	float sum;
	cout << "请输入计算的数字的个数：" << endl;
	cin >> n;
	cout << "Please input "<<n<<" integers" << endl;
	for (i = 0; i <= n-1; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];
	min = arr[0];
	sum = arr[0];
	for (i = 1; i <= n-1; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
		sum = sum + arr[i];
	}
	cout << "Max=" << max << ",Min=" << min << endl;
	cout << "Ave=" << sum / n << endl;
	return 0;
}