#include<iostream>
//#include<iomanip>
using namespace std;
int main()
{
	FILE *fp;
	int i;
	char s1[3][100];
	for (i = 0; i < 3; i++)
		cin >> s1[i];
	if ((fp = fopen("D:\\CÎÄ¼þ\\message.txt", "w")) == NULL)
	{
		cout << "file can not open!" << endl;
		exit(0);
	}
	for (i = 0; i < 3; i++)
		fputs(s1[i], fp);
	fclose(fp);
	fp = NULL;
	return 0;
}