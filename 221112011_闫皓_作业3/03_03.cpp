/*
课程：程序设计_2023
课程作业：计算对数
作业题目：03_04.cpp
百炼 http://bailian.openjudge.cn/practice/2739
while循环即可，但要注意应该⽤什么数据类型才能满⾜题⽬要求
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double base, number;
    int exponent = 0;
    bool found = false;

    cin >> base >> number;

    do {
        bool condition1 = (exponent <= (log(number) / log(base))) && ((exponent + 1) > (log(number) / log(base)));
        bool condition2 = (pow(base, exponent) <= number) && (pow(base, exponent + 1) > number);
        found = condition1 || condition2;
        exponent++;
    } while (!found);
    
    cout << exponent - 1 << endl;

    return 0;
}