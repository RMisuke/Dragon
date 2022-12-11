//
// Created by Chensinuo on 2022/12/10.
//
#include <iostream>
#include <string>
#include "../include/register.h"
#include "../include/allvariables.h"

string Player_Job_List [4] {"剑士","弓箭手","魔法师","狂战士"} ;

void Register()
{
    string Player_Name = "None";
    string Player_Job = "None";
    cout<<"监测到你还没有注册，开始进入注册模块！"<<endl;
    cout<<"请输入你的ID："<<endl;
    cin >>Player_Name;
    cout<<"好的"<<Player_Name<<endl;
    cout<<"请选择你的职业："<<endl<<Player_Job_List[0]<<"|"<<Player_Job_List[1]<<"|"<<Player_Job_List[2]
    <<"|"<<Player_Job_List[3]<<endl;
    cin >>Player_Job;
    cout<<"注册完毕"<<endl;
    bool Player_State =true;
}