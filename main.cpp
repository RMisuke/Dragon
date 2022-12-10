#include <iostream>
#include <cstdlib>
#include <ctime>


std::string  Player_Choose;
//定义玩家数值
int Player_Attack_Physic, Player_Attack_Magic, Player_Defense_Physic, Player_Defense_Magic, Player_Speed, Player_Health, Player_Magic;
int Player_Level;
std::string Player_Name, Player_Job;
std::string Player_Job_List[4] = {"剑士", "弓箭手", "魔法师", "格斗家"};

int Random_Number(int Number_Min, int Number_Max);//定义随机数生成模块
int Point(std::string Player_Job);//定义玩家能力值分配函数
char Battle(std::string Player_Name);
int Player_Point;

int Monster_Battle(int Player_Level);

using namespace std;

int main()//主函数
{
    cout << "Welcome to the Dragon's World!" << endl;
    cout << "请输入你的姓名" << endl;
    cin >> Player_Name;
    Player_Level = 1;
    cout << "你好" << Player_Name << endl;
    cout << "请选择你的职业" << endl;
    cout << "|" << Player_Job_List[0] << "|" << Player_Job_List[1] << "|" << Player_Job_List[2] << "|"
         << Player_Job_List[3] << "|" << endl;
    cin >> Player_Job;
    cout << "好的" << "，" << Player_Job << " " << Player_Name << endl;
    Player_Point = Point(Player_Job);
    cout << Player_Name << ":" << endl << "|生命: " << Player_Health << "|魔力: " << Player_Magic << endl << "|物理攻击:"
         << Player_Attack_Physic << "|法术攻击:" << Player_Attack_Magic << endl << "|物理防御:" << Player_Defense_Physic
         << "|魔法防御:" << Player_Defense_Magic << endl << "|速度: " << Player_Speed << "｜等级: " << Player_Level << endl;
    int Test ;
    Test = Monster_Battle(Player_Level);
    cout << Test << endl;

   cout << Test << endl;
    return 0;

}

int Random_Number(int Number_Min, int Number_Max)//随机数生成模块
{
    unsigned seed;
    int Random_Number;
    seed = time(0);
    srand(seed);
    Random_Number = rand() % Number_Max + Number_Min;
    return Random_Number;
}

int Point(std::string Player_Job) //玩家能力分配模块
{
    if (Player_Job == Player_Job_List[0])//剑士能力值
    {
        Player_Attack_Physic = 20;
        Player_Attack_Magic = 10;
        Player_Defense_Physic = 12;
        Player_Defense_Magic = 8;
        Player_Speed = 10;
        Player_Speed = 15;
        Player_Health = 20;
        Player_Magic = 10;
    } else if (Player_Job == Player_Job_List[1])//弓箭手能力值
    {
        Player_Attack_Physic = 15;
        Player_Attack_Magic = 15;
        Player_Defense_Physic = 7;
        Player_Defense_Magic = 7;
        Player_Speed = 10;
        Player_Speed = 20;
        Player_Health = 15;
        Player_Magic = 20;
    } else if (Player_Job == Player_Job_List[2])//魔法师能力值
    {
        Player_Attack_Physic = 7;
        Player_Attack_Magic = 25;
        Player_Defense_Physic = 8;
        Player_Defense_Magic = 15;
        Player_Speed = 15;
        Player_Health = 15;
        Player_Magic = 30;
    } else //格斗家能力值
    {
        Player_Attack_Physic = 25;
        Player_Attack_Magic = 5;
        Player_Defense_Physic = 20;
        Player_Defense_Magic = 10;
        Player_Speed = 10;
        Player_Health = 30;
        Player_Magic = 5;
    }
    return Player_Attack_Physic, Player_Attack_Magic, Player_Defense_Physic, Player_Defense_Magic, Player_Speed, Player_Health, Player_Magic;
}

int Monster_Battle(int Player_Level)
{
    cout<<"Battle Start!"<<endl;
    std::string Monster_Name = "Slim";
    int Monster_Health_Slim = 60;
    while (Monster_Health_Slim > 0)
    {
        cout<<"是否攻击"<<endl<<"|Yes|No"<< endl;
        cin>>Player_Choose;
        if (Player_Choose == "Yes")
        {
            cout<<"攻击"<<Monster_Name<<endl;
            Monster_Health_Slim = Monster_Health_Slim - Player_Attack_Physic;
            cout << "对怪物"<<Monster_Name<<"造成了"<<Player_Attack_Physic<<"点伤害"<<endl;
            cout <<"怪物"<<Monster_Name<<"还有"<<Monster_Health_Slim<<"点生命值"<<endl;
        }
        else
        {
            cout << "放弃攻击"<<Monster_Name<<endl;
            cout <<"怪物"<<Monster_Name<<"还有"<<Monster_Health_Slim<<"点生命值"<<endl;
        }
    }
    cout << Player_Name <<"击败了"<<Monster_Name<< endl;

    return  Player_Level;
}
