/*
程序设计_2023_第二次作业
title:02_bonus_2.cpp
石头剪刀布游戏
用 while, do while, switch, if 等结构编写石头剪刀布游戏
将玩家和电脑的“石头”“剪刀”“布”用数字 0、1、2 取代，计算玩 家输入值与电脑随机值的差，作为判定依据。电脑随机值可用 rand() % 3 生成
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    
    int player, computer;
    int playerScore = 0, computerScore = 0;
    
    while (true) {
        std::cout << "石头剪刀布游戏！选择你的手势 (0 - 石头, 1 - 剪刀, 2 - 布, 3 - 退出): ";
        std::cin >> player;
        
        if (player < 0 || player > 3) {
            std::cout << "无效的选择，请重新输入。" << std::endl;
            continue;
        }
        
        if (player == 3) {
            break;
        }
        
        computer = rand() % 3;
        
        std::cout << "电脑选择了 " << computer << std::endl;
        
        if ((player == 0 && computer == 1) || 
            (player == 1 && computer == 2) || 
            (player == 2 && computer == 0)) {
            std::cout << "YOU WIN!" << std::endl;
            playerScore++;
        } else if (player == computer) {
            std::cout << "DRAW!" << std::endl;
        } else {
            std::cout << "A.I. WIN!" << std::endl;
            computerScore++;
        }
    }
    
    std::cout << "游戏结束。你的分数: " << playerScore << "，电脑的分数: " << computerScore << std::endl;
    
    return 0;
}