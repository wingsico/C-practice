#include<iostream>
using namespace std;
char *concta(char *source, char *dest,char *last)
{
	char *p;
	p = source;
	while (*p != '\0')
		p++;
	while (*dest !='\0')
	{
		*p++ = *dest++;
	}
	while (*p++ = *last++);
	*p = '\0';
	return(source);
}
int main()
{
	char str1[40], str2[40], str3[40];
	cout << "�����һ���ַ�����";
	cin.getline(str1, 40);
	cout << "����ڶ����ַ�����";
	cin.getline(str2, 40);
	cout << "����������ַ�����";
	cin.getline(str3, 40);
	cout << "ƴ�Ӻ���ַ�����" << concta(str1, str2,str3) << endl;
}