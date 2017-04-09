#include<iostream>
using namespace std;
class Time
{
public:
	Time();
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};
Time::Time()
{
	hour = 0;
	minute = 0;
	sec = 0;
}
void Time::set_time()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}
void Time::show_time()
{
	cout << "Ê±¼äÎª " << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1;
	t1.set_time();
	t1.show_time();
	return 0;
}