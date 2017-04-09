#include<iostream>
using namespace std;
const int N = 7;
void sort(int arr[], int num);
int main()
{
	int arr[N] = { 4, 7, 9, 11, 22, 25 };
	int i, num;
	cout << "原数组为：";
	for (i = 0; i < N - 1; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << "输入要插入的数：";
	cin >> num;
	sort(arr, num);
	cout << "新的数组为：";
	for (i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
//冒泡排序↓;
void sort(int arr[], int num)
{
	arr[N - 1] = num;
	int i, temp;
	for (i = N - 1; i >= 0; i--) //因为原本就为有序数组，所以不需要外部for循环语句;
	{
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = temp;
		}
	}
}

/* 直接选择排序(未完成)
void sort(int arr[], int num)
{
	arr[N - 1] = num;
	int i, temp, k;
	for (i = N - 1; i >= 0; i--)
	{
		if (arr[i] < arr[i - 1])
		{
			k=i-1;
		}
	}	
	temp = arr[i - 1];
	arr[i - 1] = arr[i];
	arr[i] = temp;
}
*/