/*
课程：程序设计_2023
课程作业：⼤⼩写字⺟互换
作业题目：03_04.cpp
百炼 http://bailian.openjudge.cn/practice/2689
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    for (size_t i = 0; i < input.length(); ++i) {
        if (isupper(input[i])) {
            input[i] = tolower(input[i]);
        } else if (islower(input[i])) {
            input[i] = toupper(input[i]);
        }
    }

    cout << input << endl;

    return 0;
}