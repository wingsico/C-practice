#include<iostream>
using namespace std;
const int N = 10;
void inv(int *p, int n);
void main()
{
	int i, a[N] = { 1,2,3,4,5,6,7,8,9,10 }, *p;
	cout << "The orginal array:" << endl;
	for (i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
	inv(a,N);
	cout << "The array has been inversted:" << endl;
	p = a;
	for (; p < a + N; p++)
		cout << *p << " ";
	cout << endl;
}
void inv(int *p, int n)
{
	int i, temp;
	int *p_end;
	for (p_end = p + n - 1; p < p_end; p_end--,p++)
	{
		temp = *p;
		*p = *p_end;
		*p_end = temp;		
	}
}