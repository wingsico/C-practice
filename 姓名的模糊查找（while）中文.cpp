#include<iostream>
#include<cstring>
using namespace std;
void main()
{
	char name[4][20] = { "张三","赵三","三毛","赵四" };
	char str1[20], str2[20];
	int i, len1, len2;
	cout << "Please input name:" << endl;
	cin >> str1;
	len1 = strlen(str1);
	for (i = 0; i<4; i++)
	{
		strcpy(str2, name[i]);
		len2 = strlen(str2);
		while (len2 - len1 >= 0)
		{
			if (strcmp(str1, str2 + len2 - len1) == 0)
			{
				cout << name[i] << " ";
				break;
			}
			str2[--len2] = '\0';
		}
	}
	cout << endl;
}