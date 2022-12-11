/*Dragon v0.1 Alpha
  By Snow
*/
#include <iostream>
#include <string>
#include <list>
#include "include/allvariables.h"
#include "include/register.h"
#include "include/random.h"
#include "include/json.h"
#include "include/data_operate.h"
using namespace Json;

bool Player_State = false;

int main()
{
    cout << "Welcome to Dragon's World!" << endl;
    Load_Player_Data();//读取玩家数据
    if (Player_State==false)
    {
        Register();
        cout<<"返回主函数"<<endl;
        Save_Player_Data();
    }
    else
    {

    }
}
