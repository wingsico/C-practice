#include<iostream>
using namespace std;
int num(int y, int m,int d)
{
	int n=0;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		switch (m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:n = 31;
			break;
		case 2:n = 29;
			break;
		default:n = 30;
		}
		return n;
	}
	else
	{
		switch (m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:n = 31;
			break;
		case 2:n = 28;
			break;
		default:n = 30;
		}
		return n;
	}

}
int f1(int y)
{
	int s;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		s = 366;
	else
		s = 365;
	return s;
}
void main()
{
	int y1, m1, d1, y2, m2, d2, n1, n2, n3, i1 = 1, i2 = 1, sum1 = 0, sum2 = 0, sum3 = 0, sum4=0;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	if (y1 > y2 || ((y1 == y2) && (m1 > m2)) || ((y1 == y2) && (m1 == m2) && (d1 > d2))
		||( m1 > 12 )|| (m2 > 12 )|| (d1 > (n1=num(y1, m1, d1)) || (d2 > (n2=num(y2, m2, d2)))))
		cout << "wrong" << endl;
	else
	{
		while (i1 <= m1-1)
		{
			n1 = num(y1, i1, d1);
			sum1 = sum1 + n1;
			i1++;
		}
		sum1 = sum1 + d1;
		while (i2 <= m2-1)
		{
			n2 = num(y2, i2, d2);
			sum2 = sum2 + n2;
			i2++;
		}
		sum2 = sum2 + d2;
		while (y1 <= y2 - 1)
		{
			n3 = f1(y1);
			sum3 = sum3 + n3;
			y1++;
		}
		sum4 = sum2 + sum3 - sum1;
	}
	cout << sum4 << endl;
	system("pause");
}
