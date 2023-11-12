/*
课程：程序设计_2023
课程作业：汉诺塔问题
作业题目：03_01.cpp
百炼 http://bailian.openjudge.cn/practice/4147/
定义⼀个move函数（三个形参），⼀个递归的hanoi函数（四个形参）
*/

#include <iostream>
using namespace std;

void hanoi(int n, string source, string destination, string auxiliary) {
    if (n == 0) {
        return;
    }

    hanoi(n - 1, source, auxiliary, destination);

    cout << n << ":" << source << "->" << destination << endl;

    hanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    string source, auxiliary, destination;

    cin >> n >> source >> auxiliary >> destination;

    hanoi(n, source, destination, auxiliary);

    return 0;
}