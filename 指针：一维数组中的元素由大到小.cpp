#include<iostream>
using namespace std;
void sort(int *p,int n);
const int N = 10;
void main()
{
	int a[N], *p;
	p = a;
	for (; p < a+N; p++)
	{
		cin >> *p;
	}
	sort(a, N);
	p=a;
	for (; p < a + N; p++)
	{
		cout << *p << " ";
	}
}
void sort(int *p, int n)
{
	int i, j, k, temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (*(p + k) < *(p + j))
				k = j;
		if (k != i)
		{
			temp = *(p + k);
			*(p + k) = *(p + i);
			*(p + i) = temp;
		}
	}	
}