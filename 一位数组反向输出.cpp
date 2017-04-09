#include<iostream>
using namespace std;
#include<iomanip>
const int N = 10;
int main() {
	int i, a[N];
	for (i = 0; i <= N - 1; i++)
		cin >> a[i];
	for (i = N - 1; i >= 0; i--)
		cout << setw(6) << a[i];
	return 0;
}