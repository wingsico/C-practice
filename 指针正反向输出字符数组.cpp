#include<iostream>
using namespace std;
int main() {
	char string[10] = "C program";
	char *ptr;
	/*char *pc;
	pc = "C language";
	cout << *pc;*/ //�ַ�ָ��ĸ�ֵ��Щ����֮�����ɽ��ַ������׵�ַ����ָ���ַ����͵�ָ�������
	ptr = string;
	cout << ptr << endl; // ��������ַ���
	while (*ptr != '\0') {
		ptr++;
	}
	while (ptr > string) {
		ptr--;
		cout << *ptr;
	}
	cout << endl;
	return 0; 
}