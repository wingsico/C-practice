#include<iostream>
using namespace std;
void count(char *str, int *pnumA, int*pnuma);
int main() {
	char a[80];
	int numA, numa;
	cin >> a;
	count(a, &numA, &numa);
	cout << "��д��ĸ����Ϊ��" << numA << ",Сд��ĸ����Ϊ��" << numa << endl;
	return 0;
}
void count(char *str, int *pnumA, int*pnuma) {
	*pnumA = 0;
	*pnuma = 0;
	while (*str != '\0') {
		if (*str >= 'A'&&*str <= 'Z')
			(*pnumA)++;
		if (*str >= 'a'&&*str <= 'z') 
			(*pnuma)++;
		str++;	// ����ĸ�Ԫ�صĵ�ַ������һ���
	}
}