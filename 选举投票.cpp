#include<iostream>
using namespace std;
struct man
{
	char name[20];
	int count;
}man[] = {"����",0,"����",0,"����",0};
void main()
{
	int i;
	char name[20];
	for (i = 0; i < 10; i++)
	{
		int j;
		gets_s(name);
		for (j = 0; j < 3; j++)
		{
			if (strcmp(name, man[j].name) == 0)
				man[j].count++;
		}
	}
	for (i = 0; i < 3; i++)
	{
		cout << man[i].name << " ��Ʊ��Ϊ��" << man[i].count << endl;
	}
}