#include<iostream>
using namespace std;
int main()
{
	int i, j, f[7], t;
	cout << "输出6个数字：" << endl;
	for (i = 1; i <= 6; i++)
		cin >> f[i];          //循环6次以输入6个数字
	for (i = 1; i < 6; i++)   //循环得每一次的最大值，逐个下沉
		for (j = 1; j <= 6 - i; j++) //每循环一次确定当前最大值，确定的最大值不再参与下一次循环
			if (f[j] > f[j + 1])	   
			{
				t = f[j+1];
				f[j + 1] = f[j];    //两两比较，更大者序号更高
				f[j] = t;
			}
	for (i = 1; i <= 6; i++)  //逐个输出排好序的数组
		cout << f[i] << " ";
	return 0;
}