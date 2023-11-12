/*
课程：程序设计_2023
课程作业：谁拿了最多奖学⾦
作业题目：03_05.cpp
百炼 http://bailian.openjudge.cn/practice/2715
使⽤ string 存储学⽣姓名，根据情况进⾏累加计算
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, scholarship = 0, allScholarships = 0;
    string name;
    cin >> N;

    while (N--) {
        string thisName;
        int thisScholarship = 0, avgGrade, classGrade, paperCount;
        char isLeader, isWest;

        cin >> thisName >> avgGrade >> classGrade >> isLeader >> isWest >> paperCount;

        thisScholarship += (avgGrade > 80 && paperCount >= 1) ? 8000 : 0;
        thisScholarship += (avgGrade > 85 && classGrade > 80) ? 4000 : 0;
        thisScholarship += (avgGrade > 90) ? 2000 : 0;
        thisScholarship += (avgGrade > 85 && isWest == 'Y') ? 1000 : 0;
        thisScholarship += (classGrade > 80 && isLeader == 'Y') ? 850 : 0;

        if (thisScholarship > scholarship) {
            name = thisName;
            scholarship = thisScholarship;
        }

        allScholarships += thisScholarship;
    }

    cout << name << endl << scholarship << endl << allScholarships << endl;

    return 0;
}