#include<iostream>
using namespace std;
int main() {
	char string[10] = "C program";
	char *ptr;
	/*char *pc;
	pc = "C language";
	cout << *pc;*/ //字符指针的赋值有些特殊之处，可将字符串的首地址赋给指向字符类型的指针变量。
	ptr = string;
	cout << ptr << endl; // 正向输出字符串
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