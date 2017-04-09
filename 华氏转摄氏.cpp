#include<iostream>
void main()
{
	using namespace std;
	float F, C;
	printf("输入一个华氏温度\n");
	scanf("%f", &F);
	C = 5*(F-32)/9;
	printf("摄氏度：");
	printf("%.2f ℃\n", C);
}
