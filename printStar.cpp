#include<iostream>
using namespace std;
void star();
void message();
void main()
{
	star();
	message();
}
void star()
{
	cout << "***************" << endl;
}
void message()
{
	cout << "Welcome to C++!" << endl;
	star();
}
