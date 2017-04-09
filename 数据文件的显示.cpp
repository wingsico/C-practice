#include<iostream>
using namespace std;
#include<iomanip>
#define NULL 0
#define SIZE 4
struct student
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];
int main()
{
	int i;
	FILE *fp;
	if ((fp = fopen("D:\\CÎÄ¼þ\\message.dat", "rb")) == NULL)
	{
		cout << "file can not open!";
		exit(0);
	}
	for (i = 0; i < SIZE; i++)
	{
		if (fread(&stud[i], sizeof(struct student), 1, fp))
		{
			cout << setw(10) << stud[i].name << setw(10) << stud[i].num << setw(10) << stud[i].age
				<< setw(10) << stud[i].addr << endl;
		}
	}
	fclose(fp);
	fp = NULL;
	return 0;
}