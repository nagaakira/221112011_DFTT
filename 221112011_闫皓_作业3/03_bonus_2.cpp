/*
课程：程序设计_2023
课程作业：⼋皇后
作业题目：03_bonus_2.cpp
百炼 http://bailian.openjudge.cn/practice/2754
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> results;

bool isSafe(vector<int>& queens, int i, int j) {
    for (int c = 0; c < i; ++c) {
        if (queens[c] == j || abs(queens[c] - j) == abs(c - i)) {
            return false;
        }
    }
    return true;
}

void eightQueens(int i, vector<int>& queens) {
    if (i == 8) {
        results.push_back(queens);
        return;
    } else {
        for (int j = 0; j < 8; ++j) {
            if (isSafe(queens, i, j)) {
                queens[i] = j;
                eightQueens(i + 1, queens);
            }
        }
    }
}

int main() {
    int n, b;
    cin >> n;

    vector<int> queens(8, 0);
    eightQueens(0, queens);

    while (n--) {
        cin >> b;
        for (int count = 0; count < 8; ++count) {
            cout << results[b - 1][count] + 1;
        }
        cout << endl;
    }

    return 0;
}