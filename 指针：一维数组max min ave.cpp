#include<iostream>
using namespace std;
void input(float *p,int n);
void find(float *pa,int n);
const int N = 10;
void main()
{
	float a[N];
	input(a, N);
	find(a, N);
}
void input(float *p, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cin >> *(p + i);
	cout << endl;
}
void find(float *pa, int n)
{
	float sum = 0, max=*pa, min=*pa;
	int i;
	for (i = 1; i < n; i++)
		if (*(pa + i)>max)
			max = *(pa + i);
	for (i = 1; i < n; i++)
		if (*(pa + i) < min)
			min = *(pa + i);
	for (i = 0; i < n; i++)
		sum += *(pa + i);
	cout << "max=" << max << ",min=" << min << ",ave=" << sum / n << endl;
}