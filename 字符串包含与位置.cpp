#include<iostream>
#include<cstring>
using namespace std;
void main()
{
	char str1[20], str2[20], len1, len2;
	int i = 0,n;
	cout << "输入第一个字符串str1(较短)：" << endl;
	cin >> str1;
	cout << "输入第二个字符串str2(较长)：" << endl;
	cin >> str2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	while(len2 - len1 >= 0)
	{
		if (strcmp(str1, str2 + len2 - len1) == 0)
		{	
			i += 1;
			cout <<"str1在str2的起始位置为 " << len2 - len1 + 1 << endl;
		}
		str2[--len2] = '\0';
	}
	if (i == 0)
		cout << "str1不包含在str2中" << endl;
	else
		cout << "有 "<<i<<" 个str1包含在str2中" << endl;
}