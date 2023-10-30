/*
程序设计_2023_第二次作业
title:02_03.cpp
用 * 号在屏幕上输出金字塔图形
使用 while 循环结构
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0, layer;

	cout << "Please input the number of pyramid layers you want: ";
	cin >> layer;

	while (a != layer) {
		for (int i = a; i < layer-1; ++i) {
			cout << " ";
		}
		for (int i = 0; i < a*2+1; i++) {
			cout << "*";
		}
		cout << endl;

		a++;
	}

	return 0;
}