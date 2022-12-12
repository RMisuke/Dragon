//
// Created by Chensinuo on 2022/12/11.
//
#include <iostream>
#include <string>
#include <fstream>
#include "jsonxx/json.hpp"
#include "allvariables.h"
#include "data_operate.h"

using namespace configor;

json::value root ;

int Save_Player_Data()
{

    ofstream outfile;
    outfile.open("Player_Data.json");
    /*root["Player_Name"] = Player_Name;
    root["Player_Job"]= Player_Job;*/
    root["Player_MY"] = Player_MY;
    root["Player_EXP"] = Player_EXP;
    root["Player_Level"] = Player_Level;
    root["Player_HP"] = Player_HP;
    root["Player_MP"] = Player_MP;
    root["Player_PA"] = Player_PA;
    root["Player_MA"] = Player_MA;
    root["Player_PD"] = Player_PD;
    root["Player_MD"] = Player_MD;
    root["Player_SD"] = Player_SD;
    outfile << json::wrap(root) << endl;
    outfile.close();
}

int Load_Player_Data()
{
    ifstream infile;
    infile.open("Player_Data.json");
    /*Player_Name = root["Player_Name"];
    Player_Job = root["Player_Job"];*/
    Player_MY = root["Player_MY"];
    Player_EXP = root["Player_EXP"];
    Player_Level = root["Player_Level"];
    Player_HP = root["Player_HP"];
    Player_MP = root["Player_MP"];
    Player_PA = root["Player_PA"];
    Player_MA = root["Player_MA"];
    Player_PD = root["Player_PD"];
    Player_MD = root["Player_MD"];
    Player_SD = root["Player_SD"];
    infile.close();
}