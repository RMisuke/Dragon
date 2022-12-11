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


bool Player_State = false;

int main()
{
    cout << "Welcome to Dragon's World!" << endl;
    if (Player_State==false)
    {
        Register();
        cout<<"返回主函数"<<endl;

    }
}
