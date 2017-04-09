#include<iostream>
using namespace std;
void main()
{
	char ch1, ch2, ch3, ch4, ch5;
	printf("输入需要转译的密码\n");
	scanf("%c %c %c %c %c",&ch1,&ch2,&ch3,&ch4,&ch5);
	ch1 += 5;
	ch2 += 5;
	ch3 += 5;
	ch4 += 5;
	ch5 += 5;
	printf("%c%c%c%c%c\n",ch1, ch2, ch3, ch4, ch5);

}