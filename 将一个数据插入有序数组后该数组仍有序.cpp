#include<iostream>
using namespace std;
const int N = 7;
void sort(int arr[], int num);
int main()
{
	int arr[N] = { 4, 7, 9, 11, 22, 25 };
	int i, num;
	cout << "ԭ����Ϊ��";
	for (i = 0; i < N - 1; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << "����Ҫ���������";
	cin >> num;
	sort(arr, num);
	cout << "�µ�����Ϊ��";
	for (i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
//ð�������;
void sort(int arr[], int num)
{
	arr[N - 1] = num;
	int i, temp;
	for (i = N - 1; i >= 0; i--) //��Ϊԭ����Ϊ�������飬���Բ���Ҫ�ⲿforѭ�����;
	{
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = temp;
		}
	}
}

/* ֱ��ѡ������(δ���)
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