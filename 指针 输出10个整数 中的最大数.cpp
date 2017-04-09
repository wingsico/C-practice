#include<iostream>
using namespace std;
const int N = 10;
int max_1(int x[], int n);
int main() {
	int a[N], i, max;
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	max = max_1(a, N);
	cout << "max=" << max << endl;
	return 0;
}
int max_1(int x[], int n) {
	int *p = x;
	int max;
	max = *p;
	for (; p < x+n; p++) {
		if ((*p)>max) {
			max = *p;
		}
	}
	return max;
}