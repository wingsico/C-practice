#include<iostream>
using namespace std;

void main()
{
	char *p = "1234567890";
	char a[100];
	char *pa = a;
	while(strcmp(pa,p)!=0)
	{
		gets_s(a);
		if (strcmp(pa, p) > 0)
			cout << "larger!" << endl;
		else if (strcmp(p, pa) > 0)
			cout << "smaller!" << endl;
	}
}