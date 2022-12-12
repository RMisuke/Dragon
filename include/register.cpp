/*
 Created by Snow
 Register Model v0.1 Alpha Preview
*/
#include <iostream>
#include <string>
#include "register.h"
#include "allvariables.h"
#include "data_operate.h"

//初始化玩家数值
string Player_Name = "None";
int Player_HP = 1;
int Player_MP = 1;
int Player_PA = 1;
int Player_MA = 1;
int Player_PD = 1;
int Player_MD = 1;
int Player_SD = 1;
int Player_MY = 10;
int Player_EXP = 0;
int Player_Level = 1;
string Player_Job = "None";

string Player_Job_List [4] {"剑士","弓箭手","魔法师","狂战士"} ;
bool Point_Return= false;
//定义函数
void Player_Point();
void Job_Choose();

void Register()//注册函数段
{
    cout<<"检测到你还没有注册，开始进入注册模块！"<<endl;
    cout<<"请输入你的ID："<<endl;
    cin >>Player_Name;
    cout<<"好的"<<Player_Name<<endl;
    while (Point_Return == false)
    {
        Job_Choose();
        Player_Point();
    }
    cout<<Player_Name<<"你选择了: "<<Player_Job<<endl
    <<"｜等级："<<Player_Level<<"｜金钱："<<Player_MY<<endl
    <<"｜生命："<<Player_HP<<"｜法力："<<Player_MP<<endl
    <<"｜速度："<<Player_SD<<"｜经验值："<<Player_EXP<<endl
    <<"｜物理攻击："<<Player_PA<<"|法术攻击："<<Player_MA<<endl
    <<"｜物理防御："<<Player_PD<<"|法术防御："<<Player_MD<<endl;
    cout<<"注册完毕!"<<endl;
    Save_Player_Data();
    //bool Player_State =true;
}

void Job_Choose()
{
    cout<<"请选择你的职业："<<endl<<Player_Job_List[0]<<"|"<<Player_Job_List[1]<<"|"
        <<Player_Job_List[2]<<"|"<<Player_Job_List[3]<<endl;
    cin >>Player_Job;
}

void Player_Point()
{
    if (Player_Job == Player_Job_List[0])//剑士基础数值设置
    {
         Player_HP = 20;
         Player_MP = 15;
         Player_PA = 20;
         Player_MA = 10;
         Player_PD = 15;
         Player_MD = 10;
         Player_SD = 10;
         Player_Level = 1;
         Player_MY = 10;
         Point_Return = true;
    }
    else if (Player_Job == Player_Job_List[1])//弓箭手基础数值设置
    {
         Player_HP = 15;
         Player_MP = 20;
         Player_PA = 15;
         Player_MA = 15;
         Player_PD = 10;
         Player_MD = 10;
         Player_SD = 20;
         Player_Level = 1;
         Player_MY = 10;
         Point_Return = true;
    }
    else if (Player_Job == Player_Job_List[2])//魔法师基础数值设置
    {
         Player_HP = 15;
         Player_MP = 30;
         Player_PA = 7;
         Player_MA = 25;
         Player_PD = 10;
         Player_MD = 15;
         Player_SD = 10;
         Player_Level = 1;
         Player_MY = 10;
         Point_Return = true;
    }
    else if (Player_Job == Player_Job_List[3])//狂战士基础数值设置
    {
         Player_HP = 30;
         Player_MP = 8;
         Player_PA = 25;
         Player_MA = 7;
         Player_PD = 20;
         Player_MD = 7;
         Player_SD = 5;
         Player_Level = 1;
         Player_MY = 10;
         Point_Return = true;
    }
    else
    {
        Point_Return = false;
        cout<<"错误！请输入正确的职业名称！"<<endl;
    }
    }
