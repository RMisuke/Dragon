//
// Created by Chensinuo on 2022/12/10.
//
#include <iostream>
#include "AllVariable.h"
#include "BattleModel.h"


int Monster_Battle(int Player_Level)
{
    std::cout<<"Battle Start!"<<std::endl;
    std::string Monster_Name = "Slim";
    int Monster_Health_Slim = 60;
    while (Monster_Health_Slim > 0)
    {
        std::cout<<"是否攻击"<<std::endl<<"|Yes|No"<< std::endl;
        std::cin>>Player_Choose;
        if (Player_Choose == "Yes")
        {
            std::cout<<"攻击"<<Monster_Name<<std::endl;
            Monster_Health_Slim = Monster_Health_Slim - Player_Attack_Physic;
            std::cout << "对怪物"<<Monster_Name<<"造成了"<<Player_Attack_Physic<<"点伤害"<<std::endl;
            std::cout <<"怪物"<<Monster_Name<<"还有"<<Monster_Health_Slim<<"点生命值"<<std::endl;
        }
        else
        {
            std::cout << "放弃攻击"<<Monster_Name<<std::endl;
            std::cout <<"怪物"<<Monster_Name<<"还有"<<Monster_Health_Slim<<"点生命值"<<std::endl;
        }
    }
    std::cout << Player_Name <<"击败了"<<Monster_Name<< std::endl;

    return  Player_Level;
}