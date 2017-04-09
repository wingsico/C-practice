#include<iostream>
using namespace std;
float average(float array[5]);
void main()
{
	float score[5], av;
	int i;
	cout << "input 5 scores:" << endl;
	for (i = 0; i < 5; i++)
		cin >> score[i];
	av = average(score);
	cout << "average score is " << av << endl;
}
float average(float array[5])
{
	int i;
	float av, sum = 0;
	for (i = 0; i < 5; i++)
		sum = sum + array[i];
	av = sum / 5;
	return av;
}