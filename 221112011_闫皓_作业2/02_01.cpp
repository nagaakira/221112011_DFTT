/*
程序设计_2023_第二次作业
title:02_01.cpp
输入两个整数，比较两个数的大小，输出比较结果
使用 if else 语句
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "please type number a, then type number b." << endl;
	cin >> a >> b;

	if (a > b) {
		cout << "number > b.";
	}
	else if (a == b) {
		cout << "number a = b.";
	}
	else {
		cout << "number a < b.";
	}

	return 0;
}