#include<iostream>
using namespace std;
const int N = 4;
struct student
{
	char name[20];
	float math, computer, english, pe;
};
void order(struct student score[],struct student *p);
void main()
{
	int i;
	struct student score[N] = {
		"小明",44,44,44,44,
		"二明",55,55,55,55,
		"三明",22,22,22,22,
		"大明",77,77,77,77
	},*p=score;
	order(score, p);
	
}
void order(struct student score[], struct student *p)
{
	int i, j;
	float sum[N];
	struct student temp;
	float _temp;
	for (i = 0; i < N; i++)
	{
		sum[i] = score[i].computer + score[i].math + score[i].english + score[i].pe;
	}
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - i - 1; j++)
		{
			if (sum[j] < sum[j + 1])
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
				_temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j+1] = _temp;
			}
		}
	}
		
	for (i = 0; i < N; p++, i++)
	{
		cout << p->name << " "
			<< p->math << " "
			<< p->computer << " "
			<< p->english << " "
			<< p->pe << endl;
	}
}
