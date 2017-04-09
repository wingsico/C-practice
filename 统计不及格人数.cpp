#include<iostream>
using namespace std;
int flag(float score);
void main()
{
	float score[10];
	int i, num = 0;
	cout << "input 10 scores:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> score[i];
		num += flag(score[i]);
	}
	cout << "the number of not passed is " << num << endl;
}

int flag(float score)
{
	if (score < 60)
		return 1;
	else
		return 0;
}