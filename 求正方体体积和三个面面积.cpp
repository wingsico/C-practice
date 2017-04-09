#include<iostream>
using namespace std;
int s1, s2, s3;
int vs(int a, int b, int c)
{
	int v;
	v = a*b*c;
	s1 = a*b;
	s2 = a*c;
	s3 = b*c;
	return v;
}
void main()
{
	int v, l, w, h;
	cout << "input length,width and height:" << endl;
	cin >> l >> w >> h;
	v = vs(l, w, h);
	cout << "v=" << v << " " << "s1=" << s1 << " " << "s2=" << s2 << " " << "s3=" << s3 << endl;
}