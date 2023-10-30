/*
程序设计_2023_第二次作业
title:02_03.cpp
输入一个正整数，计算其除以 7 的余数，根据余数 0-6 分别转换成“星期日 /一/二/三/四/五/六” ，打印输出
使用 switch 语句
*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Please input an integer: ";
	cin >> a;

	switch (a%7) {
	case 0:
		cout << "Sunday";
		break;
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	}

	return 0;
}