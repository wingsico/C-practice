#include<iostream>
using namespace std;
void main()
{
	int i1=10,i2 = 20, *pi;
	double d1 = 100, d2 = 200, *pd;
	char c1 = 'A', c2 = 'B', *pc;
	long l1 = 1000, l2 = 2000, *pl;
	/*显示整型变量的地址及值*/
	pi = &i2;
	cout << "&i1=" << &i1 << ",&i2=" << &i2 << endl;
	cout << "&pi=" << &pi << ",pi=" << pi << ",*pi=" << *pi << endl;
	pi++;															//指向变量i1;
	cout << "&pi=" << &pi << ",pi=" << pi << ",*pi=" << *pi << endl;
	cout << endl << endl;
	/*显示双精度实型变量的地址及值 */
	pd = &d2;
	cout << "&d1=" << &d1 << ",&d2=" << &d2 << endl;
	cout << "&pd=" << &pd << ",pd=" << pd << ",*pd=" << *pd << endl;
	pd++;
	cout << "&pd=" << &pd << ",pd=" << pd << ",*pd=" << *pd << endl;
	cout << endl << endl;
	/*显示字符型变量的地址及值 */
	pc = &c2;
	cout << "&c1=" << static_cast<const void*>(&c1);	//输出c1的地址
	cout << ",&c2=" << static_cast<const void*>(&c2) << endl;
	cout << "&pc=" << &pc;
	cout << ",pc=" << static_cast<const void*>(pc) << ",*pc=" << *pc << endl;
	pc++;												//注意此时没有指向c1
	cout << "&pc=" << &pc;
	cout << ",pc=" << static_cast<const void*>(pc) << ",*pc=" << *pc << endl;
	cout << endl << endl;
	/*显示整型变量的地址及值*/
	pl = &l2;
	cout << "&l1=" << &l1 << ",&l2=" << &l2 << endl;
	cout << "&pl=" << &pl << ",pl=" << pl << ",*pl=" << *pl << endl;
	pl++;															//指向变量i1;
	cout << "&pl=" << &pl << ",pl=" << pl << ",*pl=" << *pl << endl;
	cout << endl << endl;
	int m1 = 100;
	short int*psm;
	psm = (short int*)&m1;
	cout << *psm;
	cout << endl;
	//范围为 短整型的范围：-2^15 ~ 2^15-1
}