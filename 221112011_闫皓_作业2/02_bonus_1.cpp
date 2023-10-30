/*
程序设计_2023_第二次作业
title:02_bonus_1.cpp
求一元二次方程 ax2 + bx + c = 0 的根
三个 double 类型对象 a、b、c
判定 a 是否为 0 / 无实根 / 两个相同实根 / 两个不同实根
*/
#include <iostream>
#include <cmath>

void solveQuadraticEquation(double a, double b, double c) {
    if (a == 0) {
        std::cout << "a不能为0,这不是一个一元二次方程。" << std::endl;
        return;
    }

    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "两个不同实根: root1 = " << root1 << ", root2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "两个相同实根: root = " << root << std::endl;
    } else {
        std::cout << "无实根" << std::endl;
    }
}

int main() {
    double a, b, c;
    std::cout << "请输入a, b, c的值: ";
    std::cin >> a >> b >> c;
    solveQuadraticEquation(a, b, c);
    return 0;
}