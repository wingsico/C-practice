#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int asize = 20;
	char name[asize];
	char dessert[asize];
	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicous " << dessert;
	cout << " for you, " << name << endl;`
	return 0;
}