//
// Created by Chensinuo on 2022/12/11.
//
#include <iostream>
#include <string>
#include <fstream>
#include "json.h"
#include "allvariables.h"
#include "data_operate.h"

using namespace Json;
Json::Value root;  // 表示整个 json 对象
Json::Reader reader;

int Save_Player_Data()//玩家数据保存函数
{
    ofstream outfile;
    outfile.open("Player_Date.json");
    root["Player_Name"] = Player_Name; //写入玩家ID
    root["Player_Job"] = Player_Job;//写入玩家职业
    root["Player_Level"] = Player_Level;//写入玩家等级
    root["Player_EXP"] = Player_EXP;//写入玩家经验
    root["Player_HP"] = Player_HP;//写入玩家生命
    root["Player_MP"] = Player_MP;//写入玩家法力
    root["Player_MY"] = Player_MY;//写入玩家金币
    root["Player_PA"] = Player_PA;//写入玩家物攻
    root["Player_MA"] = Player_MA;//写入玩家法攻
    root["Player_PD"] = Player_PD;//写入玩家物防
    root["Player_MD"] = Player_MD;//写入玩家法防
    root["Player_SD"] = Player_SD;//写入玩家速度
    root["Player_State"] = true;//
    Json::StyledWriter styled_writer;
    outfile << styled_writer.write(root) << endl;
    cout <<"玩家数据保存完毕！" <<endl;
    outfile.close();//关闭文件
}

int Load_Player_Data()//玩家数据读取函数
{
    ifstream infile;
    infile.open("Player_Data.json");
    reader.parse("Player_Data.json", root);
    Player_Name = root["Player_Name"].as<string>();
    Player_Job = root["Player_Job"].as<string>();
    Player_Level = root["Player_Level"].as<int>();
    Player_EXP = root["Player_EXP"].as<int>();
    Player_HP = root["Player_HP"].as<int>();
    Player_MP = root["Player_MP"].as<int>();
    Player_MY = root["Player_MY"].as<int>();
    Player_PA = root["Player_PA"].as<int>();
    Player_MA = root["Player_MA"].as<int>();
    Player_PD = root["Player_PD"].as<int>();
    Player_MD = root["Player_MD"].as<int>();
    Player_SD = root["Player_SD"].as<int>();
    Player_State = root["Player_State"].as<bool>();
    cout << "玩家数据读取完毕！" << endl;
    infile.close();//关闭文件
}

