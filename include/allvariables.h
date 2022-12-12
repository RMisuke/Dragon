//
// Created by Chensinuo on 2022/12/10.
//

#ifndef DRAGON_ALLVARIABLES_H
#define DRAGON_ALLVARIABLES_H
using namespace std;

//玩家姓名和玩家职业

extern string Player_Name,Player_Job;//玩家数值

extern int Player_Level,Player_HP,Player_MP,Player_PA,
Player_MA,Player_PD,Player_MD,Player_SD,Player_MY,Player_EXP;
/*
 HP:生命值； MP:法力值; PA:物理伤害; MA:法术伤害;
 PD:物理防御; MD:法术防御; SD:玩家速度; MY:玩家金钱
 EXP:玩家经验
 */

//extern bool Player_State ;//玩家注册状态

extern int Number_Max,Number_Min,Number;//最大，最小数，用于调用随机函数

#endif //DRAGON_ALLVARIABLES_H
