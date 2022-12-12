/*Dragon v0.1 Alpha
  By Snow
*/
#include <iostream>
#include <string>
#include "include/allvariables.h"
#include "include/register.h"
#include "include/random.h"
#include "include/jsonxx/json.hpp"
#include "include/data_operate.h"


int main()
{
    cout << "Welcome to Dragon's World!" << endl;
    Load_Player_Data();//读取玩家数据
    cout<<Player_Name<<endl;
    if (Player_Name=="None")
    {
        Register();
        cout<<"返回主函数"<<Player_Name<<endl;

    }
    else
    {
        cout<<"检测到玩家"<<Player_Name<<endl;
    }
}
