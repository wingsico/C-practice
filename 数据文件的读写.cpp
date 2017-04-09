#include<iostream>
using namespace std;
#define NULL 0
const int SIZE = 4;
struct student {
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];
void save()
{
	FILE *fp;
	int i;
	if ((fp = fopen("D:\\CÎÄ¼ş\\message.dat", "wb")) == NULL)
	{
		cout << "file cant find!";
		exit(0);
	}
	for (i = 0; i < SIZE; i++)
	{
		if (fwrite(&stud[i], sizeof(struct student), 1, fp) == 0)
			cout << "file write error!" << endl;
		
	}
	fclose(fp);
	fp = NULL;
}
int main() {
	int i;
	for (i = 0; i < SIZE; i++) {
		cin >> stud[i].name >> stud[i].num >> stud[i].age >> stud[i].addr;
	}
	save();
	return 0;
}